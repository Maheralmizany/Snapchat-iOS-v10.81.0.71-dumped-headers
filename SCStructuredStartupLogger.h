//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, SCQueuePerformer;
@protocol OS_os_log;

@interface SCStructuredStartupLogger : NSObject
{
    _Bool _isApplicationActive;
    SCQueuePerformer *_performer;
    NSMutableArray *_trackedEventQueue;
    NSMapTable *_commandMap;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1;
- (void)_flushEvents;
- (void)_signpostCommandExecutionEnd:(id)arg1;
- (void)_signpostCommandExecutionBegin:(id)arg1;
- (void)logCommandFinished:(id)arg1 withCommandIdentifier:(id)arg2;
- (void)logCommandFinished:(id)arg1 withRelatedCommandIdentifier:(id)arg2 withCommandIdentifier:(id)arg3;
- (void)logCommandFinished:(id)arg1 withRelatedCommandIdentifier:(id)arg2;
- (void)logCommandFinished:(id)arg1;
- (void)logCommandBegan:(id)arg1;
- (void)applicationDidBecomeInactive;
- (void)applicationDidBecomeActive;
- (id)init;

@end

