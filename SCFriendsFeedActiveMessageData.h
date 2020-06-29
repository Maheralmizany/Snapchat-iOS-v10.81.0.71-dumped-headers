//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCFriendsFeedMessageContent, SCNMessagingInteractionInfo;

@interface SCFriendsFeedActiveMessageData : NSObject <NSCopying>
{
    _Bool _isVisibleInFeed;
    _Bool _isConversationPending;
    _Bool _isConversationDoNotDisturbEnabled;
    _Bool _isSentByUser;
    _Bool _hasMessagesToReplay;
    _Bool _isArroyo;
    NSString *_conversationId;
    NSString *_messageState;
    NSDate *_lastInteractionTimestamp;
    NSDate *_displayTimestamp;
    SCFriendsFeedMessageContent *_messageContent;
    SCNMessagingInteractionInfo *_arroyoInteractionInfo;
}

@property(readonly, nonatomic) _Bool isArroyo; // @synthesize isArroyo=_isArroyo;
@property(readonly, copy, nonatomic) SCNMessagingInteractionInfo *arroyoInteractionInfo; // @synthesize arroyoInteractionInfo=_arroyoInteractionInfo;
@property(readonly, copy, nonatomic) SCFriendsFeedMessageContent *messageContent; // @synthesize messageContent=_messageContent;
@property(readonly, nonatomic) _Bool hasMessagesToReplay; // @synthesize hasMessagesToReplay=_hasMessagesToReplay;
@property(readonly, copy, nonatomic) NSDate *displayTimestamp; // @synthesize displayTimestamp=_displayTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(readonly, nonatomic) _Bool isSentByUser; // @synthesize isSentByUser=_isSentByUser;
@property(readonly, nonatomic) _Bool isConversationDoNotDisturbEnabled; // @synthesize isConversationDoNotDisturbEnabled=_isConversationDoNotDisturbEnabled;
@property(readonly, nonatomic) _Bool isConversationPending; // @synthesize isConversationPending=_isConversationPending;
@property(readonly, copy, nonatomic) NSString *messageState; // @synthesize messageState=_messageState;
@property(readonly, nonatomic) _Bool isVisibleInFeed; // @synthesize isVisibleInFeed=_isVisibleInFeed;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversationId:(id)arg1 isVisibleInFeed:(_Bool)arg2 messageState:(id)arg3 isConversationPending:(_Bool)arg4 isConversationDoNotDisturbEnabled:(_Bool)arg5 isSentByUser:(_Bool)arg6 lastInteractionTimestamp:(id)arg7 displayTimestamp:(id)arg8 hasMessagesToReplay:(_Bool)arg9 messageContent:(id)arg10 arroyoInteractionInfo:(id)arg11 isArroyo:(_Bool)arg12;

@end
