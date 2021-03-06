//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FSFaceSegmentationMetricsLogger-Protocol.h"

@class NSString;
@protocol SPAnalytics, SPImageFetcher;

@interface SPFaceSegmentationLogger : NSObject <FSFaceSegmentationMetricsLogger>
{
    id <SPAnalytics> _analytics;
    id <SPImageFetcher> _imageFetcher;
}

@property(retain, nonatomic) id <SPImageFetcher> imageFetcher; // @synthesize imageFetcher=_imageFetcher;
@property(retain, nonatomic) id <SPAnalytics> analytics; // @synthesize analytics=_analytics;
- (void).cxx_destruct;
- (void)reportMetric:(unsigned long long)arg1 time:(double)arg2;
- (void)reportAdditionalMetric:(unsigned long long)arg1 time:(double)arg2;
- (id)initWithImageFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

