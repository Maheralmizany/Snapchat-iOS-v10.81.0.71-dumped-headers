//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCDiscoverFeedStory;

@protocol SCDiscoverFeedStoryPositionProviding <NSObject>
- (unsigned long long)itemIndexForStory:(SCDiscoverFeedStory *)arg1 inFeedType:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForFeedType:(unsigned long long)arg1;
@end

