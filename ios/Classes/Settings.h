// Autogenerated from Pigeon (v3.2.3), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, FLT_SETTINGSOrnamentPosition) {
  FLT_SETTINGSOrnamentPositionTOP_LEFT = 0,
  FLT_SETTINGSOrnamentPositionTOP_RIGHT = 1,
  FLT_SETTINGSOrnamentPositionBOTTOM_RIGHT = 2,
  FLT_SETTINGSOrnamentPositionBOTTOM_LEFT = 3,
};

typedef NS_ENUM(NSUInteger, FLT_SETTINGSScrollMode) {
  FLT_SETTINGSScrollModeHORIZONTAL = 0,
  FLT_SETTINGSScrollModeVERTICAL = 1,
  FLT_SETTINGSScrollModeHORIZONTAL_AND_VERTICAL = 2,
};

typedef NS_ENUM(NSUInteger, FLT_SETTINGSPuckBearingSource) {
  FLT_SETTINGSPuckBearingSourceHEADING = 0,
  FLT_SETTINGSPuckBearingSourceCOURSE = 1,
};

@class FLT_SETTINGSScreenCoordinate;
@class FLT_SETTINGSGesturesSettings;
@class FLT_SETTINGSLocationPuck2D;
@class FLT_SETTINGSLocationPuck3D;
@class FLT_SETTINGSLocationPuck;
@class FLT_SETTINGSLocationComponentSettings;
@class FLT_SETTINGSScaleBarSettings;
@class FLT_SETTINGSCompassSettings;
@class FLT_SETTINGSAttributionSettings;
@class FLT_SETTINGSLogoSettings;

@interface FLT_SETTINGSScreenCoordinate : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithX:(NSNumber *)x
    y:(NSNumber *)y;
@property(nonatomic, strong) NSNumber * x;
@property(nonatomic, strong) NSNumber * y;
@end

@interface FLT_SETTINGSGesturesSettings : NSObject
+ (instancetype)makeWithRotateEnabled:(nullable NSNumber *)rotateEnabled
    pinchToZoomEnabled:(nullable NSNumber *)pinchToZoomEnabled
    scrollEnabled:(nullable NSNumber *)scrollEnabled
    simultaneousRotateAndPinchToZoomEnabled:(nullable NSNumber *)simultaneousRotateAndPinchToZoomEnabled
    pitchEnabled:(nullable NSNumber *)pitchEnabled
    scrollMode:(FLT_SETTINGSScrollMode)scrollMode
    doubleTapToZoomInEnabled:(nullable NSNumber *)doubleTapToZoomInEnabled
    doubleTouchToZoomOutEnabled:(nullable NSNumber *)doubleTouchToZoomOutEnabled
    quickZoomEnabled:(nullable NSNumber *)quickZoomEnabled
    focalPoint:(nullable FLT_SETTINGSScreenCoordinate *)focalPoint
    pinchToZoomDecelerationEnabled:(nullable NSNumber *)pinchToZoomDecelerationEnabled
    rotateDecelerationEnabled:(nullable NSNumber *)rotateDecelerationEnabled
    scrollDecelerationEnabled:(nullable NSNumber *)scrollDecelerationEnabled
    increaseRotateThresholdWhenPinchingToZoom:(nullable NSNumber *)increaseRotateThresholdWhenPinchingToZoom
    increasePinchToZoomThresholdWhenRotating:(nullable NSNumber *)increasePinchToZoomThresholdWhenRotating
    zoomAnimationAmount:(nullable NSNumber *)zoomAnimationAmount
    pinchPanEnabled:(nullable NSNumber *)pinchPanEnabled;
@property(nonatomic, strong, nullable) NSNumber * rotateEnabled;
@property(nonatomic, strong, nullable) NSNumber * pinchToZoomEnabled;
@property(nonatomic, strong, nullable) NSNumber * scrollEnabled;
@property(nonatomic, strong, nullable) NSNumber * simultaneousRotateAndPinchToZoomEnabled;
@property(nonatomic, strong, nullable) NSNumber * pitchEnabled;
@property(nonatomic, assign) FLT_SETTINGSScrollMode scrollMode;
@property(nonatomic, strong, nullable) NSNumber * doubleTapToZoomInEnabled;
@property(nonatomic, strong, nullable) NSNumber * doubleTouchToZoomOutEnabled;
@property(nonatomic, strong, nullable) NSNumber * quickZoomEnabled;
@property(nonatomic, strong, nullable) FLT_SETTINGSScreenCoordinate * focalPoint;
@property(nonatomic, strong, nullable) NSNumber * pinchToZoomDecelerationEnabled;
@property(nonatomic, strong, nullable) NSNumber * rotateDecelerationEnabled;
@property(nonatomic, strong, nullable) NSNumber * scrollDecelerationEnabled;
@property(nonatomic, strong, nullable) NSNumber * increaseRotateThresholdWhenPinchingToZoom;
@property(nonatomic, strong, nullable) NSNumber * increasePinchToZoomThresholdWhenRotating;
@property(nonatomic, strong, nullable) NSNumber * zoomAnimationAmount;
@property(nonatomic, strong, nullable) NSNumber * pinchPanEnabled;
@end

@interface FLT_SETTINGSLocationPuck2D : NSObject
+ (instancetype)makeWithTopImage:(nullable FlutterStandardTypedData *)topImage
    bearingImage:(nullable FlutterStandardTypedData *)bearingImage
    shadowImage:(nullable FlutterStandardTypedData *)shadowImage
    scaleExpression:(nullable NSString *)scaleExpression;
@property(nonatomic, strong, nullable) FlutterStandardTypedData * topImage;
@property(nonatomic, strong, nullable) FlutterStandardTypedData * bearingImage;
@property(nonatomic, strong, nullable) FlutterStandardTypedData * shadowImage;
@property(nonatomic, copy, nullable) NSString * scaleExpression;
@end

@interface FLT_SETTINGSLocationPuck3D : NSObject
+ (instancetype)makeWithModelUri:(nullable NSString *)modelUri
    position:(nullable NSArray<NSNumber *> *)position
    modelOpacity:(nullable NSNumber *)modelOpacity
    modelScale:(nullable NSArray<NSNumber *> *)modelScale
    modelScaleExpression:(nullable NSString *)modelScaleExpression
    modelTranslation:(nullable NSArray<NSNumber *> *)modelTranslation
    modelRotation:(nullable NSArray<NSNumber *> *)modelRotation;
@property(nonatomic, copy, nullable) NSString * modelUri;
@property(nonatomic, strong, nullable) NSArray<NSNumber *> * position;
@property(nonatomic, strong, nullable) NSNumber * modelOpacity;
@property(nonatomic, strong, nullable) NSArray<NSNumber *> * modelScale;
@property(nonatomic, copy, nullable) NSString * modelScaleExpression;
@property(nonatomic, strong, nullable) NSArray<NSNumber *> * modelTranslation;
@property(nonatomic, strong, nullable) NSArray<NSNumber *> * modelRotation;
@end

@interface FLT_SETTINGSLocationPuck : NSObject
+ (instancetype)makeWithLocationPuck2D:(nullable FLT_SETTINGSLocationPuck2D *)locationPuck2D
    locationPuck3D:(nullable FLT_SETTINGSLocationPuck3D *)locationPuck3D;
@property(nonatomic, strong, nullable) FLT_SETTINGSLocationPuck2D * locationPuck2D;
@property(nonatomic, strong, nullable) FLT_SETTINGSLocationPuck3D * locationPuck3D;
@end

@interface FLT_SETTINGSLocationComponentSettings : NSObject
+ (instancetype)makeWithEnabled:(nullable NSNumber *)enabled
    pulsingEnabled:(nullable NSNumber *)pulsingEnabled
    pulsingColor:(nullable NSNumber *)pulsingColor
    pulsingMaxRadius:(nullable NSNumber *)pulsingMaxRadius
    showAccuracyRing:(nullable NSNumber *)showAccuracyRing
    accuracyRingColor:(nullable NSNumber *)accuracyRingColor
    accuracyRingBorderColor:(nullable NSNumber *)accuracyRingBorderColor
    layerAbove:(nullable NSString *)layerAbove
    layerBelow:(nullable NSString *)layerBelow
    puckBearingEnabled:(nullable NSNumber *)puckBearingEnabled
    puckBearingSource:(FLT_SETTINGSPuckBearingSource)puckBearingSource
    locationPuck:(nullable FLT_SETTINGSLocationPuck *)locationPuck;
@property(nonatomic, strong, nullable) NSNumber * enabled;
@property(nonatomic, strong, nullable) NSNumber * pulsingEnabled;
@property(nonatomic, strong, nullable) NSNumber * pulsingColor;
@property(nonatomic, strong, nullable) NSNumber * pulsingMaxRadius;
@property(nonatomic, strong, nullable) NSNumber * showAccuracyRing;
@property(nonatomic, strong, nullable) NSNumber * accuracyRingColor;
@property(nonatomic, strong, nullable) NSNumber * accuracyRingBorderColor;
@property(nonatomic, copy, nullable) NSString * layerAbove;
@property(nonatomic, copy, nullable) NSString * layerBelow;
@property(nonatomic, strong, nullable) NSNumber * puckBearingEnabled;
@property(nonatomic, assign) FLT_SETTINGSPuckBearingSource puckBearingSource;
@property(nonatomic, strong, nullable) FLT_SETTINGSLocationPuck * locationPuck;
@end

@interface FLT_SETTINGSScaleBarSettings : NSObject
+ (instancetype)makeWithEnabled:(nullable NSNumber *)enabled
    position:(FLT_SETTINGSOrnamentPosition)position
    marginLeft:(nullable NSNumber *)marginLeft
    marginTop:(nullable NSNumber *)marginTop
    marginRight:(nullable NSNumber *)marginRight
    marginBottom:(nullable NSNumber *)marginBottom
    textColor:(nullable NSNumber *)textColor
    primaryColor:(nullable NSNumber *)primaryColor
    secondaryColor:(nullable NSNumber *)secondaryColor
    borderWidth:(nullable NSNumber *)borderWidth
    height:(nullable NSNumber *)height
    textBarMargin:(nullable NSNumber *)textBarMargin
    textBorderWidth:(nullable NSNumber *)textBorderWidth
    textSize:(nullable NSNumber *)textSize
    isMetricUnits:(nullable NSNumber *)isMetricUnits
    refreshInterval:(nullable NSNumber *)refreshInterval
    showTextBorder:(nullable NSNumber *)showTextBorder
    ratio:(nullable NSNumber *)ratio
    useContinuousRendering:(nullable NSNumber *)useContinuousRendering;
@property(nonatomic, strong, nullable) NSNumber * enabled;
@property(nonatomic, assign) FLT_SETTINGSOrnamentPosition position;
@property(nonatomic, strong, nullable) NSNumber * marginLeft;
@property(nonatomic, strong, nullable) NSNumber * marginTop;
@property(nonatomic, strong, nullable) NSNumber * marginRight;
@property(nonatomic, strong, nullable) NSNumber * marginBottom;
@property(nonatomic, strong, nullable) NSNumber * textColor;
@property(nonatomic, strong, nullable) NSNumber * primaryColor;
@property(nonatomic, strong, nullable) NSNumber * secondaryColor;
@property(nonatomic, strong, nullable) NSNumber * borderWidth;
@property(nonatomic, strong, nullable) NSNumber * height;
@property(nonatomic, strong, nullable) NSNumber * textBarMargin;
@property(nonatomic, strong, nullable) NSNumber * textBorderWidth;
@property(nonatomic, strong, nullable) NSNumber * textSize;
@property(nonatomic, strong, nullable) NSNumber * isMetricUnits;
@property(nonatomic, strong, nullable) NSNumber * refreshInterval;
@property(nonatomic, strong, nullable) NSNumber * showTextBorder;
@property(nonatomic, strong, nullable) NSNumber * ratio;
@property(nonatomic, strong, nullable) NSNumber * useContinuousRendering;
@end

@interface FLT_SETTINGSCompassSettings : NSObject
+ (instancetype)makeWithEnabled:(nullable NSNumber *)enabled
    position:(FLT_SETTINGSOrnamentPosition)position
    marginLeft:(nullable NSNumber *)marginLeft
    marginTop:(nullable NSNumber *)marginTop
    marginRight:(nullable NSNumber *)marginRight
    marginBottom:(nullable NSNumber *)marginBottom
    opacity:(nullable NSNumber *)opacity
    rotation:(nullable NSNumber *)rotation
    visibility:(nullable NSNumber *)visibility
    fadeWhenFacingNorth:(nullable NSNumber *)fadeWhenFacingNorth
    clickable:(nullable NSNumber *)clickable
    image:(nullable FlutterStandardTypedData *)image;
@property(nonatomic, strong, nullable) NSNumber * enabled;
@property(nonatomic, assign) FLT_SETTINGSOrnamentPosition position;
@property(nonatomic, strong, nullable) NSNumber * marginLeft;
@property(nonatomic, strong, nullable) NSNumber * marginTop;
@property(nonatomic, strong, nullable) NSNumber * marginRight;
@property(nonatomic, strong, nullable) NSNumber * marginBottom;
@property(nonatomic, strong, nullable) NSNumber * opacity;
@property(nonatomic, strong, nullable) NSNumber * rotation;
@property(nonatomic, strong, nullable) NSNumber * visibility;
@property(nonatomic, strong, nullable) NSNumber * fadeWhenFacingNorth;
@property(nonatomic, strong, nullable) NSNumber * clickable;
@property(nonatomic, strong, nullable) FlutterStandardTypedData * image;
@end

@interface FLT_SETTINGSAttributionSettings : NSObject
+ (instancetype)makeWithEnabled:(nullable NSNumber *)enabled
    iconColor:(nullable NSNumber *)iconColor
    position:(FLT_SETTINGSOrnamentPosition)position
    marginLeft:(nullable NSNumber *)marginLeft
    marginTop:(nullable NSNumber *)marginTop
    marginRight:(nullable NSNumber *)marginRight
    marginBottom:(nullable NSNumber *)marginBottom
    clickable:(nullable NSNumber *)clickable;
@property(nonatomic, strong, nullable) NSNumber * enabled;
@property(nonatomic, strong, nullable) NSNumber * iconColor;
@property(nonatomic, assign) FLT_SETTINGSOrnamentPosition position;
@property(nonatomic, strong, nullable) NSNumber * marginLeft;
@property(nonatomic, strong, nullable) NSNumber * marginTop;
@property(nonatomic, strong, nullable) NSNumber * marginRight;
@property(nonatomic, strong, nullable) NSNumber * marginBottom;
@property(nonatomic, strong, nullable) NSNumber * clickable;
@end

@interface FLT_SETTINGSLogoSettings : NSObject
+ (instancetype)makeWithEnabled:(nullable NSNumber *)enabled
    position:(FLT_SETTINGSOrnamentPosition)position
    marginLeft:(nullable NSNumber *)marginLeft
    marginTop:(nullable NSNumber *)marginTop
    marginRight:(nullable NSNumber *)marginRight
    marginBottom:(nullable NSNumber *)marginBottom;
@property(nonatomic, strong, nullable) NSNumber * enabled;
@property(nonatomic, assign) FLT_SETTINGSOrnamentPosition position;
@property(nonatomic, strong, nullable) NSNumber * marginLeft;
@property(nonatomic, strong, nullable) NSNumber * marginTop;
@property(nonatomic, strong, nullable) NSNumber * marginRight;
@property(nonatomic, strong, nullable) NSNumber * marginBottom;
@end

/// The codec used by FLT_SETTINGSGesturesSettingsInterface.
NSObject<FlutterMessageCodec> *FLT_SETTINGSGesturesSettingsInterfaceGetCodec(void);

@protocol FLT_SETTINGSGesturesSettingsInterface
/// @return `nil` only when `error != nil`.
- (nullable FLT_SETTINGSGesturesSettings *)getSettingsWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)updateSettingsSettings:(FLT_SETTINGSGesturesSettings *)settings error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLT_SETTINGSGesturesSettingsInterfaceSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_SETTINGSGesturesSettingsInterface> *_Nullable api);

/// The codec used by FLT_SETTINGSLocationComponentSettingsInterface.
NSObject<FlutterMessageCodec> *FLT_SETTINGSLocationComponentSettingsInterfaceGetCodec(void);

@protocol FLT_SETTINGSLocationComponentSettingsInterface
/// @return `nil` only when `error != nil`.
- (nullable FLT_SETTINGSLocationComponentSettings *)getSettingsWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)updateSettingsSettings:(FLT_SETTINGSLocationComponentSettings *)settings error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLT_SETTINGSLocationComponentSettingsInterfaceSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_SETTINGSLocationComponentSettingsInterface> *_Nullable api);

/// The codec used by FLT_SETTINGSScaleBarSettingsInterface.
NSObject<FlutterMessageCodec> *FLT_SETTINGSScaleBarSettingsInterfaceGetCodec(void);

@protocol FLT_SETTINGSScaleBarSettingsInterface
/// @return `nil` only when `error != nil`.
- (nullable FLT_SETTINGSScaleBarSettings *)getSettingsWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)updateSettingsSettings:(FLT_SETTINGSScaleBarSettings *)settings error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLT_SETTINGSScaleBarSettingsInterfaceSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_SETTINGSScaleBarSettingsInterface> *_Nullable api);

/// The codec used by FLT_SETTINGSCompassSettingsInterface.
NSObject<FlutterMessageCodec> *FLT_SETTINGSCompassSettingsInterfaceGetCodec(void);

@protocol FLT_SETTINGSCompassSettingsInterface
/// @return `nil` only when `error != nil`.
- (nullable FLT_SETTINGSCompassSettings *)getSettingsWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)updateSettingsSettings:(FLT_SETTINGSCompassSettings *)settings error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLT_SETTINGSCompassSettingsInterfaceSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_SETTINGSCompassSettingsInterface> *_Nullable api);

/// The codec used by FLT_SETTINGSAttributionSettingsInterface.
NSObject<FlutterMessageCodec> *FLT_SETTINGSAttributionSettingsInterfaceGetCodec(void);

@protocol FLT_SETTINGSAttributionSettingsInterface
/// @return `nil` only when `error != nil`.
- (nullable FLT_SETTINGSAttributionSettings *)getSettingsWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)updateSettingsSettings:(FLT_SETTINGSAttributionSettings *)settings error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLT_SETTINGSAttributionSettingsInterfaceSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_SETTINGSAttributionSettingsInterface> *_Nullable api);

/// The codec used by FLT_SETTINGSLogoSettingsInterface.
NSObject<FlutterMessageCodec> *FLT_SETTINGSLogoSettingsInterfaceGetCodec(void);

@protocol FLT_SETTINGSLogoSettingsInterface
/// @return `nil` only when `error != nil`.
- (nullable FLT_SETTINGSLogoSettings *)getSettingsWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)updateSettingsSettings:(FLT_SETTINGSLogoSettings *)settings error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLT_SETTINGSLogoSettingsInterfaceSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_SETTINGSLogoSettingsInterface> *_Nullable api);

NS_ASSUME_NONNULL_END
