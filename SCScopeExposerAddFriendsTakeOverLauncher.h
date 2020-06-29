//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsTakeOverLauncher-Protocol.h"
#import "SCAddFriendsTakeOverWorkflowDelegate-Protocol.h"

@class NSString, SCLazy, SCScopeExposer;

@interface SCScopeExposerAddFriendsTakeOverLauncher : NSObject <SCAddFriendsTakeOverWorkflowDelegate, SCAddFriendsTakeOverLauncher>
{
    SCScopeExposer *_addFriendsTakeOverScopeExposer;
    SCLazy *_takeoverSnapchatterProvider;
    SCLazy *_resourceDownloader;
    _Bool _isLaunched;
}

- (void).cxx_destruct;
- (void)addFriendsTakeOverWorkflowCompleted;
- (void)_exposeScopeWithPresentingViewController:(id)arg1 workflowDelegate:(id)arg2 snapchatters:(id)arg3 confettiImage:(id)arg4;
- (void)launchIfNeededWithPresentingViewController:(id)arg1 presentingViewIsFullyVisibleBlock:(CDUnknownBlockType)arg2;
- (id)initWithAddFriendsTakeOverScopeExposer:(id)arg1 takeoverSnapchatterProvider:(id)arg2 resourceDownloader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

