//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCDrawingV2ColorStrawUIHelperDelegate-Protocol.h"
#import "SCDrawingViewCommonDelegate-Protocol.h"
#import "SCPalettedColorPickerDropletDelegate-Protocol.h"
#import "SCPalettedColorPickerViewDelegate-Protocol.h"
#import "SCPreviewFeatureDrawing-Protocol.h"

@class NSMutableDictionary, NSString, SCColorPickerScreenshotProvider, SCDrawingMetadata, SCDrawingV2ColorStrawUIHelper, SCEmojiBrushResourceProvider, SCMultiSnapDrawingCache, SCPinchResizeTooltipView, SCPreviewConfiguration, SCPreviewDrawingToolBarButtonItem, SCPreviewView, SCSnapCommonLoggingParameters, SCUserSession, UIColor, UIView;
@protocol SCDownloadableContentManaging, SCDrawingViewCommon, SCFeatureSnapCrop, SCFeatureSwipeFilters, SCPreviewFeatureDrawingDelegate, SCPreviewLogging;

@interface SCPreviewFeatureDrawingImpl : SCFeature <SCDrawingViewCommonDelegate, SCDrawingV2ColorStrawUIHelperDelegate, SCPalettedColorPickerViewDelegate, SCPalettedColorPickerDropletDelegate, SCPreviewFeatureDrawing>
{
    SCPreviewConfiguration *_configuration;
    SCPreviewDrawingToolBarButtonItem *_toolBarButtonItem;
    SCUserSession *_userSession;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    id <SCFeatureSnapCrop> _snapCrop;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    id <SCPreviewLogging> _previewLogger;
    SCDrawingV2ColorStrawUIHelper *_colorStrawUIHelper;
    _Bool _didUserSelectFromStraw;
    NSMutableDictionary *_drawingMetadata;
    SCColorPickerScreenshotProvider *_screenshotProvider;
    id <SCPreviewFeatureDrawingDelegate> _delegate;
    UIView<SCDrawingViewCommon> *_drawingView;
    SCEmojiBrushResourceProvider *_emojiBrushResourceProvider;
    SCPinchResizeTooltipView *_pinchResizeTooltipView;
    SCPreviewView *_previewView;
    id <SCFeatureSwipeFilters> _swipeFilters;
    unsigned long long _drawingV2UIState;
    unsigned long long _colorPickerV2State;
    UIColor *_strawColor;
}

@property(copy, nonatomic) UIColor *strawColor; // @synthesize strawColor=_strawColor;
@property(nonatomic) unsigned long long colorPickerV2State; // @synthesize colorPickerV2State=_colorPickerV2State;
@property(nonatomic) unsigned long long drawingV2UIState; // @synthesize drawingV2UIState=_drawingV2UIState;
@property(retain, nonatomic) id <SCFeatureSwipeFilters> swipeFilters; // @synthesize swipeFilters=_swipeFilters;
@property(nonatomic) __weak SCPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) SCPinchResizeTooltipView *pinchResizeTooltipView; // @synthesize pinchResizeTooltipView=_pinchResizeTooltipView;
@property(readonly, nonatomic) SCEmojiBrushResourceProvider *emojiBrushResourceProvider; // @synthesize emojiBrushResourceProvider=_emojiBrushResourceProvider;
@property(readonly, nonatomic) UIView<SCDrawingViewCommon> *drawingView; // @synthesize drawingView=_drawingView;
@property(nonatomic) __weak id <SCPreviewFeatureDrawingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)palettedColorPickerView:(id)arg1 didEndMovingDropletOutWithColor:(id)arg2;
- (void)palettedColorPickerViewDidStartMovingDropletOut:(id)arg1;
- (id)_userPreferences;
- (void)drawingView:(id)arg1 didMoveToPoint:(struct CGPoint)arg2;
- (void)drawingViewDidFinishPinchResize:(id)arg1;
- (void)drawingViewDidStartPinchResize:(id)arg1;
- (void)drawingView:(id)arg1 didEndDrawingWithStrokeSize:(double)arg2 isResized:(_Bool)arg3;
- (void)drawingViewDidStartDrawing:(id)arg1;
- (void)drawingV2ColorStrawUIHelper:(id)arg1 didFinishStrawWithColor:(id)arg2;
- (void)drawingV2ColorStrawUIHelperDidStartStraw:(id)arg1;
- (void)palettedColorPickerView:(id)arg1 didTogglePaletteToType:(unsigned long long)arg2 selectedColor:(id)arg3;
- (void)palettedColorPickerView:(id)arg1 didChangeColor:(id)arg2;
- (void)_toolbarButtonTapped:(id)arg1;
- (struct CGRect)_pinchResizeTooltipFrame;
- (void)_restoreDrawingState;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (void)replaceDrawingStrokeHistory:(id)arg1 forSegmentIndex:(long long)arg2;
- (void)setMultiSnapDelegate:(id)arg1;
- (void)setTooltipDidResize;
- (void)hideTooltip;
- (void)updatePinchResizeTooltipFrame;
- (void)updateForDrawItem:(_Bool)arg1;
- (void)drawingDidChangePaletteType:(unsigned long long)arg1;
- (void)drawingV1DidChangeColor:(id)arg1;
- (id)drawingStartPositions;
- (id)drawingColorsHexString;
- (void)_updateUIWithUserAction:(unsigned long long)arg1 dataDict:(id)arg2;
- (void)_updateUserPreferencesWithColor:(id)arg1 paletteType:(id)arg2;
- (void)_updateStrokeColor:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
@property(readonly, nonatomic) SCPreviewDrawingToolBarButtonItem *toolbarButtonItem;
@property(readonly, nonatomic) _Bool shouldDisplayEmojiBrushOnboardingAnimation;
@property(readonly, nonatomic) NSString *emojiBrushListVersion;
@property(readonly, nonatomic) SCMultiSnapDrawingCache *multiSnapDrawingCache;
@property(readonly, nonatomic) SCDrawingMetadata *drawingMetadata;
@property(readonly, nonatomic) long long updateVersion;
@property(readonly, nonatomic) long long pointCount;
@property(readonly, nonatomic) long long strokeCount;
@property(readonly, nonatomic) _Bool hasStroke;
- (void)createDrawingViewWithFrame:(struct CGRect)arg1;
- (id)initWithConfiguration:(id)arg1 userSession:(id)arg2 downloadableContentManager:(id)arg3 snapCrop:(id)arg4 previewLogger:(id)arg5 commonLoggingParameters:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

