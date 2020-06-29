//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCStoriesCustomStoryInfo, SCStoriesUserStoryInfo;

@interface SCStoriesStoryInfo : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCStoriesUserStoryInfo *_userStoryInfo_userStoryInfo;
    SCStoriesCustomStoryInfo *_customStoryInfo_customStoryInfo;
}

+ (id)userStoryInfoWithUserStoryInfo:(id)arg1;
+ (id)customStoryInfoWithCustomStoryInfo:(id)arg1;
- (void).cxx_destruct;
- (void)matchUserStoryInfo:(CDUnknownBlockType)arg1 customStoryInfo:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asCustomStoryInfo;
- (id)asUserStoryInfo;
- (unsigned long long)subtype;
- (_Bool)isSameSubtype:(id)arg1;

@end
