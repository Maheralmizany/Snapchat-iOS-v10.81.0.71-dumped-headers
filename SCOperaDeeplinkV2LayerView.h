//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaAppInfoCardViewDelegate-Protocol.h"
#import "SCOperaLayerView-Protocol.h"

@class NSString, SCOperaAppInfoCardView;
@protocol SCOperaDeeplinkV2LayerViewDelegate, SCOperaImageProvider;

@interface SCOperaDeeplinkV2LayerView : UIView <SCOperaAppInfoCardViewDelegate, SCOperaLayerView>
{
    SCOperaAppInfoCardView *_appInfoCardView;
    double _deeplinkCardViewYOffset;
    double _deeplinkCardViewAnimatableHeight;
    id <SCOperaDeeplinkV2LayerViewDelegate> _delegate;
    id <SCOperaImageProvider> _imageProvider;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) id <SCOperaImageProvider> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) __weak id <SCOperaDeeplinkV2LayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendAppIconEventWithImageMissing:(_Bool)arg1;
- (void)didTapAppInfoCardView:(id)arg1 tapLocation:(struct CGPoint)arg2;
- (struct CGRect)backgroundCardViewFrame;
- (_Bool)isDeeplinkCardViewVisible;
- (void)hideDeeplinkCardViewWithAnimation:(_Bool)arg1;
- (void)showDeeplinkCardViewWithAnimation:(_Bool)arg1;
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

