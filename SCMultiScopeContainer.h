//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMultiScopeExposer.h"

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SCMultiScopeContainer : SCMultiScopeExposer
{
    CDUnknownBlockType _scopeExposerProvider;
    NSMutableDictionary *_scopePointerToScopeExposer;
    NSMutableArray *_recycledScopeExposers;
    NSObject<OS_dispatch_queue> *_lock;
}

- (void).cxx_destruct;
- (void)removeScope:(id)arg1;
- (void)exposeScope:(id)arg1;
- (id)initWithScopeExposerProvider:(CDUnknownBlockType)arg1;

@end
