//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCSearchPersonStoryThumbnail;

@interface SCSearchPerson : NSObject <NSCopying, NSCoding>
{
    _Bool _isSnapchatter;
    _Bool _isVerified;
    _Bool _isPopular;
    NSString *_username;
    NSString *_userId;
    SCSearchPersonStoryThumbnail *_storyThumbnail;
    NSString *_displayName;
    NSString *_friendmoji;
    long long _searchAddReason;
    NSString *_searchSuggestReason;
    long long _searchResultReasonEnum;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
}

@property(readonly, nonatomic) _Bool isPopular; // @synthesize isPopular=_isPopular;
@property(readonly, nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(readonly, nonatomic) _Bool isSnapchatter; // @synthesize isSnapchatter=_isSnapchatter;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, nonatomic) long long searchResultReasonEnum; // @synthesize searchResultReasonEnum=_searchResultReasonEnum;
@property(readonly, copy, nonatomic) NSString *searchSuggestReason; // @synthesize searchSuggestReason=_searchSuggestReason;
@property(readonly, nonatomic) long long searchAddReason; // @synthesize searchAddReason=_searchAddReason;
@property(readonly, copy, nonatomic) NSString *friendmoji; // @synthesize friendmoji=_friendmoji;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) SCSearchPersonStoryThumbnail *storyThumbnail; // @synthesize storyThumbnail=_storyThumbnail;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUsername:(id)arg1 userId:(id)arg2 storyThumbnail:(id)arg3 displayName:(id)arg4 friendmoji:(id)arg5 searchAddReason:(long long)arg6 searchSuggestReason:(id)arg7 searchResultReasonEnum:(long long)arg8 bitmojiAvatarId:(id)arg9 bitmojiSelfieId:(id)arg10 isSnapchatter:(_Bool)arg11 isVerified:(_Bool)arg12 isPopular:(_Bool)arg13;
- (id)initWithCoder:(id)arg1;

@end

