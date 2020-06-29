//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextOperaLayerPresenter-Protocol.h"

@class NSString;
@protocol SCContextOperaLayerPresenterDelegate, SCContextPresenting;

@interface SCContextOperaLayerPresenterCtaV2 : NSObject <SCContextOperaLayerPresenter>
{
    id <SCContextPresenting> _presenter;
    id <SCContextOperaLayerPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCContextOperaLayerPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)teardown;
- (void)didAppear;
- (void)didDisappear;
- (void)prepareToDisappear;
- (void)show;
- (void)hide;
@property(readonly, nonatomic, getter=isPresentingContent) _Bool presentingContent;
- (void)setupWithPresenter:(id)arg1 contextMenuProvider:(id)arg2 layerView:(id)arg3 viewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
