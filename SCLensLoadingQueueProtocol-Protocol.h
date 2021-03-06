//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLensDownloadOperation, SCObservable;

@protocol SCLensLoadingQueueProtocol <NSObject>
@property(readonly, nonatomic) SCObservable *availableOperationObservable;
@property(readonly, nonatomic) SCObservable *finishedOperationObservable;
@property(readonly, nonatomic) SCObservable *executeOperationObservable;
- (void)removeOperation:(SCLensDownloadOperation *)arg1;
- (void)addOperation:(SCLensDownloadOperation *)arg1;
- (void)resume;
- (void)pause;
- (void)cancel;
@end

