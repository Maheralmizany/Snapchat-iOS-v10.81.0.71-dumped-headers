//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFideliusBatchInitRetryExecutor, SCFideliusLogger;

@interface SCFideliusRetryService : NSObject
{
    SCFideliusLogger *_logger;
    SCFideliusBatchInitRetryExecutor *_executor;
}

- (void).cxx_destruct;
- (void)requestClientInitiatedRetry:(id)arg1 source:(id)arg2;
- (id)initWithDataSource:(id)arg1 betaSyncDelegate:(id)arg2 logger:(id)arg3;

@end
