//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCCTXPostSnapActions, SCContextV3UserIdentity, SCObservable, SCQueuePerformer;

@protocol SCContextV3PostSnapDataStoring <NSObject>
- (void)cleanupPostSnapActions:(void (^)(void))arg1;
- (SCObservable *)conversationActionsObservable:(NSString *)arg1;
- (void)fetchActionsForConversationId:(NSString *)arg1 isGroupConversation:(_Bool)arg2 completionPerformer:(SCQueuePerformer *)arg3 completion:(void (^)(struct NSDictionary *))arg4;
- (void)storeActions:(SCCTXPostSnapActions *)arg1 forConversationId:(NSString *)arg2 messageId:(NSString *)arg3 senderIdentity:(SCContextV3UserIdentity *)arg4 contextSessionId:(NSString *)arg5;
@end
