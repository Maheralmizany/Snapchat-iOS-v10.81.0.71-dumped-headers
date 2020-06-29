//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCConnectionClassManagerV2ListenerAnnouncer;

@interface SCConnectionClassManagerV2 : NSObject
{
    double _hysteresisTopMultiplier;
    double _hysteresisBottomMultiplier;
    long long _nextDownloadBandwidthConnectionClass;
    unsigned long long _downloadSampleCounter;
    _Bool _hasNewDownloadBandwithClassRecorded;
    long long _nextUploadBandwidthConnectionClass;
    unsigned long long _uploadSampleCounter;
    _Bool _hasNewUploadBandwithClassRecorded;
    SCConnectionClassManagerV2ListenerAnnouncer *_announcer;
    long long _currentDownloadBandwidthClass;
    long long _previousDownloadBandwidthClass;
    long long _currentUploadBandwidthClass;
    long long _previousUploadBandwidthClass;
}

+ (id)stringForConnectionClass:(long long)arg1;
+ (id)shared;
@property long long previousUploadBandwidthClass; // @synthesize previousUploadBandwidthClass=_previousUploadBandwidthClass;
@property long long currentUploadBandwidthClass; // @synthesize currentUploadBandwidthClass=_currentUploadBandwidthClass;
@property long long previousDownloadBandwidthClass; // @synthesize previousDownloadBandwidthClass=_previousDownloadBandwidthClass;
@property long long currentDownloadBandwidthClass; // @synthesize currentDownloadBandwidthClass=_currentDownloadBandwidthClass;
- (void).cxx_destruct;
- (id)currentUploadBandwidthClassAsString;
- (id)currentDownloadBandwidthClassAsString;
- (_Bool)_significantlyOutsideCurrentClass:(long long)arg1;
- (long long)_getBandwidthClass:(long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)didResetBandwidthEstimationFilter;
- (void)didUpdateUploadBandwidth:(long long)arg1;
- (void)didUpdateDownloadBandwidth:(long long)arg1;
- (id)init;

@end

