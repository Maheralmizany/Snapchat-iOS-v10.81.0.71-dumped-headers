//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCFriendsFeedChatMessage : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_activeChat_actionPerformer;
    _Bool _activeChat_isReceivedUnreadChat;
    _Bool _activeChat_isChatMention;
    _Bool _groupNameChange_isReceivedUnreadChat;
    _Bool _participantChange_isReceivedUnreadChat;
    long long _participantChange_groupChangeType;
}

+ (id)participantChangeWithIsReceivedUnreadChat:(_Bool)arg1 groupChangeType:(long long)arg2;
+ (id)groupNameChangeWithIsReceivedUnreadChat:(_Bool)arg1;
+ (id)activeChatWithActionPerformer:(id)arg1 isReceivedUnreadChat:(_Bool)arg2 isChatMention:(_Bool)arg3;
- (void).cxx_destruct;
- (void)matchActiveChat:(CDUnknownBlockType)arg1 groupNameChange:(CDUnknownBlockType)arg2 participantChange:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

