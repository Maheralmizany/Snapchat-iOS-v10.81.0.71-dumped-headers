//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, SCNMessagingSyncFeedMetadata;

@protocol SCNMessagingSyncFeedCallback
- (void)onError:(long long)arg1;
- (void)onBootstrapNotComplete;
- (void)onSyncFeedComplete:(NSArray *)arg1 multiRecipientFeedEntries:(NSArray *)arg2 feedEntriesDeleted:(NSArray *)arg3 resetFeed:(_Bool)arg4 metadata:(SCNMessagingSyncFeedMetadata *)arg5;
- (void)onFeedEntriesArrived:(NSArray *)arg1 feedEntriesDeleted:(NSArray *)arg2 resetFeed:(_Bool)arg3 metadata:(SCNMessagingSyncFeedMetadata *)arg4;
@end

