//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCFriendsFeedConversationVersion;

@interface SCFriendsFeedSyncData : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendsFeedConversationVersion *_serverData_conversationVersion;
    _Bool _serverData_syncRequired;
    SCFriendsFeedConversationVersion *_clientData_conversationVersion;
    _Bool _clientData_isVisibleInFeed;
}

+ (id)serverDataWithConversationVersion:(id)arg1 syncRequired:(_Bool)arg2;
+ (id)clientDataWithConversationVersion:(id)arg1 isVisibleInFeed:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchServerData:(CDUnknownBlockType)arg1 clientData:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

