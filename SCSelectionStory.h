//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, NSURL;

@interface SCSelectionStory : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_myStory_userId;
    NSString *_myStory_username;
    unsigned long long _myStory_type;
    NSString *_myStory_bitmojiAvatarId;
    NSString *_myStory_bitmojiSelfieId;
    NSString *_ourStory_ourStoryId;
    NSString *_ourStory_displayName;
    NSString *_ourStory_subtext;
    NSString *_businessStory_businessStoryId;
    NSString *_businessStory_displayName;
    NSURL *_businessStory_logoURL;
    NSString *_customStory_publicationId;
    long long _customStory_type;
    NSString *_customStory_displayName;
    NSDate *_customStory_creationTimestamp;
    NSDate *_customStory_myLastPostTimestamp;
    NSString *_appStory_applicationId;
    NSString *_appStory_displayName;
    NSString *_appStory_iconURL;
    _Bool _appStory_isAuthorized;
    _Bool _appStory_isPostingEnabled;
}

+ (id)ourStoryWithOurStoryId:(id)arg1 displayName:(id)arg2 subtext:(id)arg3;
+ (id)myStoryWithUserId:(id)arg1 username:(id)arg2 type:(unsigned long long)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5;
+ (id)customStoryWithPublicationId:(id)arg1 type:(long long)arg2 displayName:(id)arg3 creationTimestamp:(id)arg4 myLastPostTimestamp:(id)arg5;
+ (id)businessStoryWithBusinessStoryId:(id)arg1 displayName:(id)arg2 logoURL:(id)arg3;
+ (id)appStoryWithApplicationId:(id)arg1 displayName:(id)arg2 iconURL:(id)arg3 isAuthorized:(_Bool)arg4 isPostingEnabled:(_Bool)arg5;
- (void).cxx_destruct;
- (void)matchMyStory:(CDUnknownBlockType)arg1 ourStory:(CDUnknownBlockType)arg2 businessStory:(CDUnknownBlockType)arg3 customStory:(CDUnknownBlockType)arg4 appStory:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

