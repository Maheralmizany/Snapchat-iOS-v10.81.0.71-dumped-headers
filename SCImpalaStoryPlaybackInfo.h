//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSURL;

@interface SCImpalaStoryPlaybackInfo : NSObject <NSCopying>
{
    _Bool _showPeekingViewersList;
    _Bool _appearWithExpandedViewersList;
    _Bool _saveable;
    _Bool _allowSaveEntireStory;
    _Bool _reportable;
    _Bool _profileEnabled;
    int _deleteAction;
    NSURL *_metricsURL;
    NSNumber *_reach;
    NSNumber *_screenshots;
    NSNumber *_storyReplies;
    NSURL *_thumbnailURL;
}

@property(readonly, copy, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, nonatomic) _Bool profileEnabled; // @synthesize profileEnabled=_profileEnabled;
@property(readonly, nonatomic) _Bool reportable; // @synthesize reportable=_reportable;
@property(readonly, nonatomic) _Bool allowSaveEntireStory; // @synthesize allowSaveEntireStory=_allowSaveEntireStory;
@property(readonly, nonatomic) _Bool saveable; // @synthesize saveable=_saveable;
@property(readonly, nonatomic) int deleteAction; // @synthesize deleteAction=_deleteAction;
@property(readonly, nonatomic) _Bool appearWithExpandedViewersList; // @synthesize appearWithExpandedViewersList=_appearWithExpandedViewersList;
@property(readonly, nonatomic) _Bool showPeekingViewersList; // @synthesize showPeekingViewersList=_showPeekingViewersList;
@property(readonly, copy, nonatomic) NSNumber *storyReplies; // @synthesize storyReplies=_storyReplies;
@property(readonly, copy, nonatomic) NSNumber *screenshots; // @synthesize screenshots=_screenshots;
@property(readonly, copy, nonatomic) NSNumber *reach; // @synthesize reach=_reach;
@property(readonly, copy, nonatomic) NSURL *metricsURL; // @synthesize metricsURL=_metricsURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetricsURL:(id)arg1 reach:(id)arg2 screenshots:(id)arg3 storyReplies:(id)arg4 showPeekingViewersList:(_Bool)arg5 appearWithExpandedViewersList:(_Bool)arg6 deleteAction:(int)arg7 saveable:(_Bool)arg8 allowSaveEntireStory:(_Bool)arg9 reportable:(_Bool)arg10 profileEnabled:(_Bool)arg11 thumbnailURL:(id)arg12;

@end
