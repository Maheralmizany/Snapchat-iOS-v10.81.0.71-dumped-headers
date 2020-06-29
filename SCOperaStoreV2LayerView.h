//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaAppInfoCardViewDelegate-Protocol.h"
#import "SCOperaLayerView-Protocol.h"

@class NSString, SCOperaAppInfoCardView;
@protocol SCOperaImageProvider, SCOperaStoreV2LayerViewDelegate;

@interface SCOperaStoreV2LayerView : UIView <SCOperaAppInfoCardViewDelegate, SCOperaLayerView>
{
    double _storeViewYOffset;
    double _storeViewAnimatableHeight;
    id <SCOperaStoreV2LayerViewDelegate> _delegate;
    id <SCOperaImageProvider> _imageProvider;
    SCOperaAppInfoCardView *_appInfoCardView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) SCOperaAppInfoCardView *appInfoCardView; // @synthesize appInfoCardView=_appInfoCardView;
@property(retain, nonatomic) id <SCOperaImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) __weak id <SCOperaStoreV2LayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendAppIconEventWithImageMissing:(_Bool)arg1;
- (void)didTapAppInfoCardView:(id)arg1 tapLocation:(struct CGPoint)arg2;
- (struct CGRect)backgroundCardViewFrame;
- (void)hideStoreViewWithAnimation;
- (void)showStoreViewWithAnimation;
- (void)layoutSubviews;
- (void)setupViewForLayer:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

