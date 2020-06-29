//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUChatConversationMessages-Protocol.h"

@class NSArray, NSString, SOJUSignedPayload;

@interface SOJUChatConversationMessages : SCSojuMessage <SOJUChatConversationMessages>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithMessagingAuth:(id)arg1 messages:(id)arg2 messageIterToken:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *messageIterToken; // @dynamic messageIterToken;
@property(readonly, nonatomic) NSArray *messages; // @dynamic messages;
@property(readonly, nonatomic) SOJUSignedPayload *messagingAuth; // @dynamic messagingAuth;
@property(readonly) Class superclass;

@end
