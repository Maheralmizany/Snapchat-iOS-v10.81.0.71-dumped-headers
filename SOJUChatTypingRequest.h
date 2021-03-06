//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUChatTypingRequest-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SOJUChatTypingRequest : SCSojuMessage <SOJUChatTypingRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 recipientUsernames:(id)arg4 conversationId:(id)arg5 seqNums:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *recipientUsernames; // @dynamic recipientUsernames;
@property(readonly, nonatomic) NSString *reqToken; // @dynamic reqToken;
@property(readonly, nonatomic) NSDictionary *seqNums; // @dynamic seqNums;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end

