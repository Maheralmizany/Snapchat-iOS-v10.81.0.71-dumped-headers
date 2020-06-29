//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaToggleView.h"

#import "SCOperaLayerView-Protocol.h"
#import "SCOperaSubscribeButtonViewDelegate-Protocol.h"

@class NSString, UIView;
@protocol SCOperaSubscribeButtonLayerViewDelegate, SCOperaSubscribeButtonViewObject;

@interface SCOperaSubscribeButtonLayerView : SCOperaToggleView <SCOperaSubscribeButtonViewDelegate, SCOperaLayerView>
{
    id <SCOperaSubscribeButtonLayerViewDelegate> _delegate;
    UIView<SCOperaSubscribeButtonViewObject> *_subscribeButtonView;
}

+ (double)xPositionOfButtonInBounds:(struct CGRect)arg1 withType:(unsigned long long)arg2;
+ (double)xPositionOfButtonInBounds:(struct CGRect)arg1 withWidth:(double)arg2;
+ (id)layerViewWithFrame:(struct CGRect)arg1 properties:(id)arg2;
+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView<SCOperaSubscribeButtonViewObject> *subscribeButtonView; // @synthesize subscribeButtonView=_subscribeButtonView;
@property(nonatomic) __weak id <SCOperaSubscribeButtonLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupViewForLayer:(id)arg1 animated:(_Bool)arg2 animationDuration:(double)arg3;
- (void)operaSubscribeButtonViewWillAnimateToWidth:(double)arg1;
- (void)operaSubscribeButtonViewDidPressButton:(id)arg1 isSubscribed:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateYOffset:(double)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 properties:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
