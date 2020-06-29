//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendToUIContainer-Protocol.h"

@class NSString, SCDelayedUIContainer, UIViewController;
@protocol SCSendToLoadingOverlay;

@interface SCLegacySendToUIContainer : NSObject <SCSendToUIContainer>
{
    UIViewController *_presentingViewController;
    id <SCSendToLoadingOverlay> _sendToviewController;
    SCDelayedUIContainer *_delayedUIContainer;
    CDUnknownBlockType _attachBlock;
    CDUnknownBlockType _detachBlock;
    _Bool _matchaSendToEnabled;
    CDUnknownBlockType _willPresentUIBlock;
}

@property(nonatomic) _Bool matchaSendToEnabled; // @synthesize matchaSendToEnabled=_matchaSendToEnabled;
@property(copy, nonatomic) CDUnknownBlockType willPresentUIBlock; // @synthesize willPresentUIBlock=_willPresentUIBlock;
- (void).cxx_destruct;
- (void)_onDetach:(CDUnknownBlockType)arg1;
- (void)_onAttach:(id)arg1;
- (void)removeLoadingOverlay;
- (void)showLoadingOverlay;
- (void)detachUI:(CDUnknownBlockType)arg1;
- (void)attachUI:(id)arg1;
- (void)setDetachBlock:(CDUnknownBlockType)arg1;
- (void)setAttachBlock:(CDUnknownBlockType)arg1;
- (void)presentUI;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

