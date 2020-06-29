//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSSet, NSString, SCArroyoConversationIdsPartitionResult, SCFuture, SCObservable;

@protocol SCArroyoConversationIdsManaging
@property(readonly, nonatomic) NSSet *sessionMigratedArroyoConversationIds;
@property(readonly, nonatomic) NSSet *arroyoConversationIds;
- (void)resetConversationsToBeMigrated:(SCFuture *)arg1;
- (SCFuture *)conversationIdsToBeMigrated;
- (NSDictionary *)displayPrefixesByConversationId;
- (SCArroyoConversationIdsPartitionResult *)partitionConversationIds:(NSArray *)arg1;
- (NSArray *)arroyoConversationIdsFromConversationIds:(NSArray *)arg1;
- (_Bool)isArroyoConversationId:(NSString *)arg1;
- (SCObservable *)finishedLoadingObservable;
- (void)addV3ConversationId:(NSString *)arg1;
- (void)addV3ConversationIdsFromDeserialization:(NSSet *)arg1;
- (void)addNewArroyoConversationId:(NSString *)arg1;
@end

