//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStartupScopeCompletionSignal-Protocol.h"

@class NSMutableArray, SCDispatchLock;

@interface SCStartupScopeCompletionSignalImp : NSObject <SCStartupScopeCompletionSignal>
{
    SCDispatchLock *_dispatchLock;
    _Bool _isStartupCompleted;
    NSMutableArray *_scopeExposers;
}

- (void).cxx_destruct;
- (void)signalStartupCompleted;
- (void)exposeScopeWhenStartupCompleted:(id)arg1 scopeExposer:(id)arg2;
- (id)init;

@end

