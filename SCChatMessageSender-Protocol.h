//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCQueuePerformer;
@protocol SOJUConversationMessage;

@protocol SCChatMessageSender <NSObject>
- (void)sendConversationMessage:(id <SOJUConversationMessage>)arg1 withCompletionHandler:(void (^)(long long, SOJUConversationMessageResponse *))arg2;
- (_Bool)connectionAllowsSending;
- (SCQueuePerformer *)performer;
@end

