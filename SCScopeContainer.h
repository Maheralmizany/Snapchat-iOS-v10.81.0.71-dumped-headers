//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeExposer.h"

#import "SCScopeLifecycleContainer-Protocol.h"

@class NSOperationQueue, NSString, SCLifecycleCleanupScopeRemoval, SCScopeLifecycle, SCScopeLifecycleSubLifecycles;
@protocol SCScopeContainerDelegate;

@interface SCScopeContainer : SCScopeExposer <SCScopeLifecycleContainer>
{
    NSOperationQueue *_operationQueue;
    SCScopeLifecycleSubLifecycles *_lifecycles;
    CDUnknownBlockType _lifecycleProvider;
    id <SCScopeContainerDelegate> _delegate;
    id _scope;
    SCScopeLifecycle *_subLifecycle;
    _Bool _scopeRemovedDuringLifecycleCreation;
    SCLifecycleCleanupScopeRemoval *_scopeRemoval;
}

@property(nonatomic) __weak id <SCScopeContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)removeScope;
- (void)exposeScope:(id)arg1;
- (id)scope;
- (void)beginLifecycle;
- (id)initWithOperationQueue:(id)arg1 lifecycles:(id)arg2 lifecycleProvider:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

