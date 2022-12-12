part of mapbox_maps_flutter;

typedef OnPlatformViewCreatedCallback = void Function(int);

class _MapboxMapsPlatform {
  final observers = ArgumentCallbacks<Event>();
  final onStyleLoadedPlatform = ArgumentCallbacks<StyleLoadedEventData>();
  final onCameraChangeListenerPlatform =
      ArgumentCallbacks<CameraChangedEventData>();
  final onMapIdlePlatform = ArgumentCallbacks<MapIdleEventData>();
  final onMapLoadedPlatform = ArgumentCallbacks<MapLoadedEventData>();
  final onMapLoadErrorPlatform = ArgumentCallbacks<MapLoadingErrorEventData>();
  final onRenderFrameFinishedPlatform =
      ArgumentCallbacks<RenderFrameFinishedEventData>();
  final onRenderFrameStartedPlatform =
      ArgumentCallbacks<RenderFrameStartedEventData>();
  final onSourceAddedPlatform = ArgumentCallbacks<SourceAddedEventData>();
  final onSourceDataLoadedPlatform =
      ArgumentCallbacks<SourceDataLoadedEventData>();
  final onSourceRemovedPlatform = ArgumentCallbacks<SourceRemovedEventData>();
  final onStyleDataLoadedPlatform =
      ArgumentCallbacks<StyleDataLoadedEventData>();
  final onStyleImageMissingPlatform =
      ArgumentCallbacks<StyleImageMissingEventData>();
  final onStyleImageUnusedPlatform =
      ArgumentCallbacks<StyleImageUnusedEventData>();

  late MethodChannel _channel;

  Future<dynamic> _handleMethodCall(MethodCall call) async {
    try {
      if (call.method.startsWith("event")) {
        handleEvents(call);
      } else {
        throw MissingPluginException();
      }
    } catch (error) {
      print(
          "Handle method call ${call.method}, arguments: ${call.arguments} with error: $error");
    }
  }

  void handleEvents(MethodCall call) {
    var eventType = call.method.split("#")[1];
    observers(Event(type: eventType, data: call.arguments));
    switch (eventType) {
      case MapEvents.STYLE_LOADED:
        onStyleLoadedPlatform(
            StyleLoadedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.CAMERA_CHANGED:
        onCameraChangeListenerPlatform(
            CameraChangedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.MAP_IDLE:
        onMapIdlePlatform(
            MapIdleEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.MAP_LOADED:
        onMapLoadedPlatform(
            MapLoadedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.MAP_LOADING_ERROR:
        onMapLoadErrorPlatform(
            MapLoadingErrorEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.RENDER_FRAME_FINISHED:
        onRenderFrameFinishedPlatform(
            RenderFrameFinishedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.RENDER_FRAME_STARTED:
        onRenderFrameStartedPlatform(
            RenderFrameStartedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.SOURCE_ADDED:
        onSourceAddedPlatform(
            SourceAddedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.SOURCE_REMOVED:
        onSourceRemovedPlatform(
            SourceRemovedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.SOURCE_DATA_LOADED:
        onSourceDataLoadedPlatform(
            SourceDataLoadedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.STYLE_DATA_LOADED:
        onStyleDataLoadedPlatform(
            StyleDataLoadedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.STYLE_IMAGE_MISSING:
        onStyleImageMissingPlatform(
            StyleImageMissingEventData.fromJson(jsonDecode(call.arguments)));
        break;
      case MapEvents.STYLE_IMAGE_REMOVE_UNUSED:
        onStyleImageUnusedPlatform(
            StyleImageUnusedEventData.fromJson(jsonDecode(call.arguments)));
        break;
      default:
        throw MissingPluginException();
    }
  }

  void initPlatform(int id) {
    _channel = MethodChannel('plugins.flutter.io/mapbox_maps_$id');
    _channel.setMethodCallHandler(_handleMethodCall);
  }

  Widget buildView(
      Map<String, dynamic> creationParams,
      OnPlatformViewCreatedCallback onPlatformViewCreated,
      Set<Factory<OneSequenceGestureRecognizer>>? gestureRecognizers) {
    if (defaultTargetPlatform == TargetPlatform.android) {
      return AndroidView(
        viewType: 'plugins.flutter.io/mapbox_maps',
        onPlatformViewCreated: onPlatformViewCreated,
        gestureRecognizers: gestureRecognizers,
        creationParams: creationParams,
        creationParamsCodec: const StandardMessageCodec(),
      );
    } else if (defaultTargetPlatform == TargetPlatform.iOS) {
      return UiKitView(
        viewType: 'plugins.flutter.io/mapbox_maps',
        onPlatformViewCreated: onPlatformViewCreated,
        gestureRecognizers: gestureRecognizers,
        creationParams: creationParams,
        creationParamsCodec: const StandardMessageCodec(),
      );
    }
    return Text(
        '$defaultTargetPlatform is not yet supported by the maps plugin');
  }

  void dispose() {
    _channel.setMethodCallHandler(null);
  }

  Future<void> addEventListener(String event) async {
    try {
      await _channel
          .invokeMethod('map#subscribe', <String, dynamic>{'event': event});
    } on PlatformException catch (e) {
      return new Future.error(e);
    }
  }

  Future<dynamic> createAnnotationManager(String type) async {
    try {
      return _channel.invokeMethod(
          'annotation#create_manager', <String, dynamic>{'type': type});
    } on PlatformException catch (e) {
      return new Future.error(e);
    }
  }

  Future<void> removeAnnotationManager(String id) {
    try {
      return _channel.invokeMethod(
          'annotation#remove_manager', <String, dynamic>{'id': id});
    } on PlatformException catch (e) {
      return new Future.error(e);
    }
  }
}
