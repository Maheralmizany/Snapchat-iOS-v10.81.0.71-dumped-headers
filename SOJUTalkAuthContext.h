//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUTalkAuthContext-Protocol.h"

@class NSDictionary, NSString;

@interface SOJUTalkAuthContext : SCSojuMessage <SOJUTalkAuthContext>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithConversationId:(id)arg1 scopeId:(id)arg2 mac:(id)arg3 token:(id)arg4 usernameToUserId:(id)arg5 sessionType:(id)arg6 sessionId:(id)arg7 userIdToTalkParticipantId:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *mac; // @dynamic mac;
@property(readonly, nonatomic) NSString *scopeId; // @dynamic scopeId;
@property(readonly, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(readonly, nonatomic) NSString *sessionType; // @dynamic sessionType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *token; // @dynamic token;
@property(readonly, nonatomic) NSDictionary *userIdToTalkParticipantId; // @dynamic userIdToTalkParticipantId;
@property(readonly, nonatomic) NSDictionary *usernameToUserId; // @dynamic usernameToUserId;

@end

