//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesTransferSession.h"

@class NSDate, NSMutableArray, NSUUID, SCSpectaclesDevice, SCSpectaclesTaskMediaTransfer;

@interface SCSpectaclesMutableTransferSession : SCSpectaclesTransferSession
{
    SCSpectaclesDevice *_internalDevice;
    NSMutableArray *_completedTasksInternal;
    NSUUID *_batchIDInternal;
    NSDate *_internalSessionStartTime;
    unsigned long long _transferTypeInternal;
    long long _transferChannel;
    SCSpectaclesTaskMediaTransfer *_currentMediaTask;
}

@property(retain, nonatomic) SCSpectaclesTaskMediaTransfer *currentMediaTask; // @synthesize currentMediaTask=_currentMediaTask;
@property(nonatomic) long long transferChannel; // @synthesize transferChannel=_transferChannel;
- (void).cxx_destruct;
- (id)completedTasks;
- (void)markTaskComplete:(id)arg1;
- (_Bool)isContentBeingTranferred:(id)arg1 component:(unsigned long long)arg2;
- (_Bool)isContentPartOfCurrentTransferBatch:(id)arg1 component:(unsigned long long)arg2;
- (long long)numberOfContentTransferredForComponent:(unsigned long long)arg1;
- (float)progress;
- (unsigned long long)component;
- (id)currentlyTransferringContent;
- (id)untransferredCountByComponent;
- (id)untransferredContent;
- (id)transferredContent;
- (unsigned long long)transferType;
- (long long)channel;
- (long long)numberOfContentTransferred;
- (long long)numberOfContentBeingTransferred;
- (id)sessionStartTime;
- (id)batchID;
- (id)device;
- (id)initWithDevice:(id)arg1 transferType:(unsigned long long)arg2;

@end

