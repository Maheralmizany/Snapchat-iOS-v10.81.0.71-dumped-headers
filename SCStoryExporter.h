//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, NSArray, NSDate, NSMutableDictionary, NSString, NSTimer, SCSpectaclesExportSettings;
@protocol SCPerforming, SCStoryExporterDelegate;

@interface SCStoryExporter : NSObject
{
    id <SCPerforming> _performer;
    SCSpectaclesExportSettings *_spectaclesExportSettings;
    long long _spectaclesExportFormat;
    NSDate *_spectaclesCreateTimeUtc;
    _Bool _processingStarted;
    id <SCStoryExporterDelegate> _delegate;
    NSString *_exporterTag;
    unsigned long long _backgroundTaskId;
    NSArray *_stories;
    NSMutableDictionary *_urls;
    NSTimer *_exportProgressTimer;
    AVAssetExportSession *_exportSession;
}

@property(nonatomic) _Bool processingStarted; // @synthesize processingStarted=_processingStarted;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(retain, nonatomic) NSTimer *exportProgressTimer; // @synthesize exportProgressTimer=_exportProgressTimer;
@property(retain, nonatomic) NSMutableDictionary *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(copy, nonatomic) NSString *exporterTag; // @synthesize exporterTag=_exporterTag;
@property(nonatomic) __weak id <SCStoryExporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)storyCount;
- (void)pollExporterProgress:(id)arg1;
- (void)didFinishExportingToURL:(id)arg1 withError:(id)arg2;
- (void)didProceedToProgress:(double)arg1;
- (void)compositeVideos;
- (void)exportStoryAtIndex:(long long)arg1;
- (id)generateOutputMovieURL;
- (void)startExporting;
- (id)init;
- (id)initWithStories:(id)arg1 spectaclesExportFormat:(long long)arg2;
- (id)initWithStories:(id)arg1;

@end

