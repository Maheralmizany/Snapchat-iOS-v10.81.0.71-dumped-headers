//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMyContributionStories.h"

@class NSString;

@interface SCMyOurStories : SCMyContributionStories
{
    NSString *_storyGroupId;
}

+ (id)uniqueStoriesIdForStoryGroupId:(id)arg1;
+ (id)mySharedStoriesFromSoju:(id)arg1;
@property(retain, nonatomic) NSString *storyGroupId; // @synthesize storyGroupId=_storyGroupId;
- (void).cxx_destruct;
- (id)uniqueStoriesId;
- (id)displayName;
- (id)username;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoryGroupId:(id)arg1;

@end

