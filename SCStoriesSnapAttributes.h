//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCStoriesStoryInfo;

@interface SCStoriesSnapAttributes : NSObject <NSCopying>
{
    long long _storyType;
    SCStoriesStoryInfo *_storyInfo;
}

@property(readonly, copy, nonatomic) SCStoriesStoryInfo *storyInfo; // @synthesize storyInfo=_storyInfo;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryType:(long long)arg1 storyInfo:(id)arg2;

@end

