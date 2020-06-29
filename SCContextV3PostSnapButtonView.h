//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCContextV3PostSnapButton-Protocol.h"

@class NSString, SCCTXPostSnapAction, SCContextV3ImageView, SCContextV3Label, UITapGestureRecognizer, UIViewController;
@protocol SCContextV3ActionHandling, SCPageNameLogging;

@interface SCContextV3PostSnapButtonView : UIView <SCContextV3PostSnapButton>
{
    double _lastLayoutHeight;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController<SCPageNameLogging> *_baseViewController;
    id <SCContextV3ActionHandling> _actionHandler;
    SCCTXPostSnapAction *_action;
    SCContextV3Label *_titleLabel;
    SCContextV3ImageView *_imageView;
    UIView *_contentView;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)handleTap;
- (void)layoutSubviews;
- (void)configureForAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2 imagePerformer:(id)arg3 actionHandler:(id)arg4 baseViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

