//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;

@protocol SCBloopsFriendsBloopsDataCache <NSObject>
- (void)removeCachedFriendsBloopsDataForConversationId:(NSString *)arg1;
- (void)addFriendsBloopsTargetsData:(NSMutableDictionary *)arg1 forConversationId:(NSString *)arg2;
- (void)getCachedFriendsBloopsDataForConversationId:(NSString *)arg1 completion:(void (^)(SCBloopsConversationCachedDataModel *))arg2;
- (void)configureForNewConversation;
@end
