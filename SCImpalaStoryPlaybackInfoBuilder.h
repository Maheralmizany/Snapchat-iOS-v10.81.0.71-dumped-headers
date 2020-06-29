//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface SCImpalaStoryPlaybackInfoBuilder : NSObject
{
    NSURL *_metricsURL;
    NSNumber *_reach;
    NSNumber *_screenshots;
    NSNumber *_storyReplies;
    _Bool _showPeekingViewersList;
    _Bool _appearWithExpandedViewersList;
    int _deleteAction;
    _Bool _saveable;
    _Bool _allowSaveEntireStory;
    _Bool _reportable;
    _Bool _profileEnabled;
    NSURL *_thumbnailURL;
}

+ (id)impalaStoryPlaybackInfoFromExistingImpalaStoryPlaybackInfo:(id)arg1;
+ (id)impalaStoryPlaybackInfo;
- (void).cxx_destruct;
- (id)withThumbnailURL:(id)arg1;
- (id)withProfileEnabled:(_Bool)arg1;
- (id)withReportable:(_Bool)arg1;
- (id)withAllowSaveEntireStory:(_Bool)arg1;
- (id)withSaveable:(_Bool)arg1;
- (id)withDeleteAction:(int)arg1;
- (id)withAppearWithExpandedViewersList:(_Bool)arg1;
- (id)withShowPeekingViewersList:(_Bool)arg1;
- (id)withStoryReplies:(id)arg1;
- (id)withScreenshots:(id)arg1;
- (id)withReach:(id)arg1;
- (id)withMetricsURL:(id)arg1;
- (id)build;

@end

