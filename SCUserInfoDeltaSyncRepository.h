//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUserInfoProvider.h"

@class NSArray, SCDisposableObserver, SCLazy, SCQueuePerformer;

@interface SCUserInfoDeltaSyncRepository : SCUserInfoProvider
{
    NSArray *_coreUserDataIds;
    SCLazy *_docObjectContext;
    CDUnknownBlockType _fetchedResultProvider;
    CDUnknownBlockType _userInfoPropertyProcessor;
    SCQueuePerformer *_performer;
    SCLazy *_updates;
    SCDisposableObserver *_disposableObserver;
}

- (void).cxx_destruct;
- (void)_performDocObjectTransaction:(id)arg1 transactionContext:(id)arg2;
- (void)_processNewUserInfo:(id)arg1;
- (id)_updates;
- (id)_fetchedResult;
- (id)updates;
- (id)currentValue;
- (id)initWithCoreUserDataIds:(id)arg1 mutatorUpdates:(id)arg2 docObjectContext:(id)arg3 fetchedResultProvider:(CDUnknownBlockType)arg4 userInfoPropertyProcessor:(CDUnknownBlockType)arg5;

@end
