//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaAppInfoCardViewDelegate-Protocol.h"
#import "SCOperaLayerView-Protocol.h"

@class NSString, SCOperaAppInfoCardView;
@protocol SCOperaCTACardLayerViewDelegate;

@interface SCOperaCTACardLayerView : UIView <SCOperaAppInfoCardViewDelegate, SCOperaLayerView>
{
    SCOperaAppInfoCardView *_cardView;
    double _cardYOffset;
    id <SCOperaCTACardLayerViewDelegate> _delegate;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <SCOperaCTACardLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapAppInfoCardView:(id)arg1 tapLocation:(struct CGPoint)arg2;
- (struct CGRect)_cardViewFrame;
- (void)hideCardViewWithAnimation:(_Bool)arg1;
- (void)showCardViewWithAnimation:(_Bool)arg1;
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
