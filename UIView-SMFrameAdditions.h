//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCLensGestureViewProvider-Protocol.h"

@class CAGradientLayer, MASViewAttribute, NSLayoutYAxisAnchor, NSMutableDictionary, NSMutableSet, SCComposerContext, SCComposerViewNode;

@interface UIView (SMFrameAdditions) <SCLensGestureViewProvider>
+ (id)measurePlaceholderView;
+ (id)viewNamed:(id)arg1 bundleName:(id)arg2 owner:(id)arg3 componentContext:(id)arg4;
+ (id)viewNamed:(id)arg1 bundleName:(id)arg2 owner:(id)arg3;
+ (id)composerViewLoader;
+ (id)composerViewLoaderManager;
+ (id)_composerTouchAreaExtensionComponents;
+ (id)_composerTransformComponents;
+ (void)bindAttributes:(id)arg1;
+ (id)sc_highlightCircleViewWithFrame:(struct CGRect)arg1 fillColor:(id)arg2;
+ (void)sct_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)sct_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double frameBottom;
@property(nonatomic) double frameRight;
@property(nonatomic) double frameTop;
@property(nonatomic) double frameLeft;
@property(nonatomic) double frameHeight;
@property(nonatomic) double frameWidth;
@property(nonatomic) struct CGSize frameSize;
@property(nonatomic) double frameY;
@property(nonatomic) double frameX;
@property(nonatomic) struct CGPoint frameOrigin;
- (id)sp_sizeContraints:(struct CGSize)arg1;
- (id)sp_edgesContraints:(struct UIEdgeInsets)arg1;
- (id)sp_edgesContraints:(struct UIEdgeInsets)arg1 exclude:(unsigned long long)arg2;
- (void)grantMiniProfileCardDisplayCharacteristics;
- (void)setRoundedCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)configureLayoutWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isYogaEnabled;
- (id)yoga;
- (_Bool)canUseMeasurePlaceholderView;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
- (_Bool)willEnqueueIntoComposerPool;
- (void)scrollableContentSizeDidChangeWithSize:(struct CGSize)arg1 rtlOffsetX:(double)arg2;
- (void)invalidateLayoutAndMarkFlexBoxDirty:(_Bool)arg1;
- (void)invalidateLayout;
- (_Bool)composer_setTouchAreaExtensionValue:(id)arg1;
- (_Bool)composer_setTranslationX:(double)arg1 translationY:(double)arg2 scaleX:(double)arg3 scaleY:(double)arg4 rotation:(double)arg5 animator:(id)arg6;
- (_Bool)composer_setAlpha:(double)arg1 animator:(id)arg2;
- (void)composer_resetTouchGestureRecognizerForTouchType:(unsigned long long)arg1;
- (void)composer_setTouchGestureRecognizerForTouchType:(unsigned long long)arg1 function:(id)arg2;
- (void)composer_resetGestureRecognizerForClass:(Class)arg1;
- (void)composer_setupGestureRecognizerForClass:(Class)arg1 function:(id)arg2 predicate:(id)arg3;
- (id)composer_gestureRecognizerForClass:(Class)arg1;
- (_Bool)composer_setBorderWidth:(double)arg1 animator:(id)arg2;
- (_Bool)composer_setBorderRadius:(struct SCComposerCornerValues)arg1 animator:(id)arg2;
- (void)composer_applyBorderRadius:(struct SCComposerCornerValues)arg1 animator:(id)arg2;
- (void)composer_applySlowClipping:(_Bool)arg1 animator:(id)arg2;
- (_Bool)requiresShapeLayerForBorderRadius;
- (_Bool)clipsToBoundsByDefault;
- (_Bool)composer_setBackgroundColor:(id)arg1 animator:(id)arg2;
- (_Bool)composer_setBackground:(id)arg1 animator:(id)arg2;
- (void)composer_layoutBackgroundLayer:(id)arg1 animator:(id)arg2;
- (_Bool)composer_setBorder:(id)arg1 animator:(id)arg2;
- (_Bool)composer_setBorderColor:(id)arg1 animator:(id)arg2;
- (_Bool)composer_setRasterize:(_Bool)arg1;
- (_Bool)composer_setObjectFit:(id)arg1;
- (_Bool)composer_setBoxShadow:(id)arg1 animator:(id)arg2;
- (void)composer_applyShadowPathWithAnimator:(id)arg1;
- (void)removeCSSClass:(id)arg1;
- (void)addCSSClass:(id)arg1;
@property(retain, nonatomic) SCComposerViewNode *composerViewNode;
@property(retain, nonatomic) SCComposerContext *composerContext;
@property(readonly, nonatomic) double boundsHeight;
@property(readonly, nonatomic) double boundsWidth;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double bottom;
@property(nonatomic) double left;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)hitTestSlop;
- (void)setHitTestSlop:(struct UIEdgeInsets)arg1;
- (void)sc_constrainToSuperviewEdgesWithInsets:(struct UIEdgeInsets)arg1;
- (void)sc_constrainToSuperviewEdges;
- (void)sc_constrainToSuperviewCenter;
- (id)safeSnapshotViewAfterScreenUpdates:(_Bool)arg1;
- (id)snapshotViewWhenFullyVisible;
- (_Bool)pixelIsTransparentAtLoc:(struct CGPoint)arg1 extension:(int)arg2;
- (_Bool)pixelIsTransparentAtLoc:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSMutableSet *mas_installedConstraints;
- (id)mas_closestCommonSuperview:(id)arg1;
@property(retain, nonatomic) id mas_key;
@property(readonly, nonatomic) CDUnknownBlockType mas_attribute;
@property(readonly, nonatomic) MASViewAttribute *mas_baseline;
@property(readonly, nonatomic) MASViewAttribute *mas_centerY;
@property(readonly, nonatomic) MASViewAttribute *mas_centerX;
@property(readonly, nonatomic) MASViewAttribute *mas_height;
@property(readonly, nonatomic) MASViewAttribute *mas_width;
@property(readonly, nonatomic) MASViewAttribute *mas_trailing;
@property(readonly, nonatomic) MASViewAttribute *mas_leading;
@property(readonly, nonatomic) MASViewAttribute *mas_bottom;
@property(readonly, nonatomic) MASViewAttribute *mas_right;
@property(readonly, nonatomic) MASViewAttribute *mas_top;
@property(readonly, nonatomic) MASViewAttribute *mas_left;
- (id)mas_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_updateConstraints:(CDUnknownBlockType)arg1;
- (id)mas_makeConstraints:(CDUnknownBlockType)arg1;
- (void)enableDragging;
- (void)disableDragging;
- (void)adjustAnchorPointForGestureRecognizer:(id)arg1;
- (void)handleDrag:(id)arg1;
- (CDUnknownBlockType)draggingEndedBlock;
- (void)setDraggingEndedBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)draggingMovedBlock;
- (void)setDraggingMovedBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)draggingStartedBlock;
- (void)setDraggingStartedBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)handle;
- (void)setHandle:(struct CGRect)arg1;
- (_Bool)cancelsTouchesInView;
- (void)setCancelsTouchesInView:(_Bool)arg1;
- (id)dragGestureRecognizer;
- (void)setDragGestureRecognizer:(id)arg1;
- (void)unobscureBlock;
- (void)obscureBlock;
- (id)censorView;
- (void)setCensorView:(id)arg1;
@property(nonatomic) long long obscuringMethod;
- (void)sc_uninstallAllMASConstraints;
@property(readonly, nonatomic) NSMutableDictionary *sc_trackedMASConstraints;
- (void)sc_applySketchShadowWithColor:(id)arg1 alpha:(double)arg2 x:(double)arg3 y:(double)arg4 blur:(double)arg5 spread:(double)arg6;
- (void)sc_roundCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)sc_forceLeftToRightLayout;
- (void)sc_removeAllSubviews;
- (void)sc_enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (void)sc_enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (void)sc_enumerateAncestorsUsingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) struct CGPoint sc_anchorPoint;
@property(nonatomic) struct CGPoint sc_position;
@property(nonatomic) double sc_cornerRadius;
@property(nonatomic) _Bool sc_masksToBounds;
- (void)centerInSuperView;
- (void)centerHorizontallyInSuperView;
- (void)centerVerticallyInSuperView;
- (id)findFirstResponder;
- (void)sc_setGradientEffectWithFrame:(struct CGRect)arg1 topColor:(id)arg2 bottomColor:(id)arg3;
- (id)_cornersLayerName;
- (id)sc_cornersLayer;
- (void)sc_setRoundedCornerWithRoundingCorners:(unsigned long long)arg1 cornerRadius:(double)arg2 backgroundColor:(id)arg3 bounds:(struct CGRect)arg4;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *keyboardAnchor;
- (void)_sig_associatedKeyboardLayoutGuide:(id)arg1;
- (id)_sig_associatedKeyboardLayoutGuide;
- (struct CGAffineTransform)scsearch_translationToView:(id)arg1 inContainingView:(id)arg2;
@property(readonly, nonatomic) UIView *lensGestureView;
@property(readonly, nonatomic) double sct_bottomOffset;
@property(readonly, nonatomic) double sct_height;
@property(readonly, nonatomic) double sct_width;
@property(readonly, nonatomic) NSMutableDictionary *scopera_trackedMASConstraints;
- (id)_operaPageViewController;
- (struct UIEdgeInsets)sc_edgeInsetsForPointInSelfCoordinatesToPageViewBounds:(struct CGPoint)arg1;
- (double)sc_operaConvertOffsetFromTopEdgeOfOperaPageViewToSelf:(double)arg1;
- (void)sc_setOperaContentRoundedCornersWithNotchedRadius:(double)arg1 nonNotchedRadius:(double)arg2;
- (void)disableShadow;
- (void)enableShadow;
- (void)dropShadowWithBezierPath:(id)arg1 offset:(struct CGSize)arg2;
- (void)dropDefaultShadow;
@end

