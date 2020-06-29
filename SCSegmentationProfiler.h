//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCSegmentationProfiler : NSObject
{
    NSMutableDictionary *_ongoingSegmentationStartTimeDict;
    NSMutableDictionary *_endedSegmentationDurationDict;
    SCQueuePerformer *_performer;
}

+ (id)ghostToSnappableProfiler;
- (void).cxx_destruct;
- (void)getSegmentationDictWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setSegmentation:(id)arg1 duration:(long long)arg2;
- (void)endSegmentation:(id)arg1;
- (void)startSegmentation:(id)arg1;
- (id)initWithPerformer:(id)arg1;

@end

