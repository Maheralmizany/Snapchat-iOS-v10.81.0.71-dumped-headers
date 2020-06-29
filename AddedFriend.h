//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNamedFriend-Protocol.h"

@class NSNumber, NSString;

@interface AddedFriend : NSObject <SCNamedFriend>
{
    _Bool _newLink;
    _Bool _ignored;
    _Bool _hidden;
    _Bool _isFriendRequestViewed;
    _Bool _removed;
    _Bool _hasBeenSeen;
    _Bool _blocking;
    _Bool _reporting;
    NSString *_display;
    NSString *_snapcodeUrl;
    NSString *_name;
    NSString *_userId;
    unsigned long long _pendingSnapCount;
    unsigned long long _pendingChatCount;
    unsigned long long _potentialHighQualityScore;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSNumber *_timestamp;
    long long _type;
    NSString *_addSource;
    long long _addSourceType;
}

@property(getter=getAddSourceType) long long addSourceType; // @synthesize addSourceType=_addSourceType;
@property(retain, getter=getAddSource) NSString *addSource; // @synthesize addSource=_addSource;
@property(getter=isReporting) _Bool reporting; // @synthesize reporting=_reporting;
@property(getter=isBlocking) _Bool blocking; // @synthesize blocking=_blocking;
@property _Bool hasBeenSeen; // @synthesize hasBeenSeen=_hasBeenSeen;
@property(getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property long long type; // @synthesize type=_type;
@property _Bool isFriendRequestViewed; // @synthesize isFriendRequestViewed=_isFriendRequestViewed;
@property _Bool hidden; // @synthesize hidden=_hidden;
@property _Bool ignored; // @synthesize ignored=_ignored;
@property _Bool newLink; // @synthesize newLink=_newLink;
@property(retain) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(retain) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property unsigned long long potentialHighQualityScore; // @synthesize potentialHighQualityScore=_potentialHighQualityScore;
@property unsigned long long pendingChatCount; // @synthesize pendingChatCount=_pendingChatCount;
@property unsigned long long pendingSnapCount; // @synthesize pendingSnapCount=_pendingSnapCount;
@property(retain) NSString *userId; // @synthesize userId=_userId;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *snapcodeUrl; // @synthesize snapcodeUrl=_snapcodeUrl;
@property(retain) NSString *display; // @synthesize display=_display;
- (void).cxx_destruct;
- (id)identifier;
- (id)nameToDisplay;
- (_Bool)hasDisplay;
- (void)updateWithAddedFriend:(id)arg1;
- (_Bool)isDeletedOrBlocked;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5;
- (id)initWithFriend:(id)arg1;
- (id)initWithSoju:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
