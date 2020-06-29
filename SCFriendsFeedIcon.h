//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor, UIImage;

@interface SCFriendsFeedIcon : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_iconImage_imageName;
    UIImage *_iconImage_image;
    NSString *_emoji_emoji;
    UIColor *_activityIndicator_tintColor;
    _Bool _activityIndicator_isLoading;
}

+ (id)iconImageWithImageName:(id)arg1 image:(id)arg2;
+ (id)emojiWithEmoji:(id)arg1;
+ (id)activityIndicatorWithTintColor:(id)arg1 isLoading:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchIconImage:(CDUnknownBlockType)arg1 emoji:(CDUnknownBlockType)arg2 activityIndicator:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

