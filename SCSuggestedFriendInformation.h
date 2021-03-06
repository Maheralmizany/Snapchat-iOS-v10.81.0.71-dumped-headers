//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSuggestedFriendInformation : NSObject
{
    _Bool _isPopularAccount;
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSString *_storyPrivacy;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSString *_popularUserEmoji;
}

+ (id)initWithFriend:(id)arg1;
+ (id)initWithSojuSuggestedFriend:(id)arg1;
@property(retain, nonatomic) NSString *popularUserEmoji; // @synthesize popularUserEmoji=_popularUserEmoji;
@property(nonatomic) _Bool isPopularAccount; // @synthesize isPopularAccount=_isPopularAccount;
@property(copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(retain, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(retain, nonatomic) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

