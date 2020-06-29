//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesMyStoryPlaybackSequence : SCDocObject <NSCopying>
{
    NSString *_storyId;
    long long _storyType;
    NSArray *_storySnaps;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryId:(id)arg1 storyType:(long long)arg2 storySnaps:(id)arg3;

@end

