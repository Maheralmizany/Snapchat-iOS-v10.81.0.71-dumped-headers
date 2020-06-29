//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCStoriesPlaybackDiscoverStoryMetadata;

@interface SCStoriesPlaybackUserStorySequence : NSObject <NSCopying>
{
    NSString *_userId;
    NSString *_username;
    SCStoriesPlaybackDiscoverStoryMetadata *_discoverMetadata;
    NSArray *_storySnaps;
}

@property(readonly, copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
@property(readonly, copy, nonatomic) SCStoriesPlaybackDiscoverStoryMetadata *discoverMetadata; // @synthesize discoverMetadata=_discoverMetadata;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 discoverMetadata:(id)arg3 storySnaps:(id)arg4;

@end

