//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SPCacheConfiguration;
@protocol SPAnalytics, SPDataLoaderService, SPExternalSettingsProvider, SPGenderClassifier, SPLensImageProcessingService, SPLogger, SPRecentImagesService, SPRemoteSettingsProvider, SPStringsProvider, SPTechAnalytics, SPZipArchiver;

@interface SPConfiguration : NSObject
{
    _Bool _preferSegmentationResultForCachedPersonTarget;
    _Bool _enableReenactmentPreviewsCacheWithoutText;
    id <SPDataLoaderService> _dataLoaderService;
    id <SPRemoteSettingsProvider> _remoteSettingsProvider;
    id <SPZipArchiver> _zipArchiver;
    id <SPStringsProvider> _stringsProvider;
    id <SPExternalSettingsProvider> _externalSettingsProvider;
    SPCacheConfiguration *_cacheConfiguration;
    id <SPAnalytics> _analytics;
    id <SPRecentImagesService> _recentImagesService;
    id <SPTechAnalytics> _techAnalytics;
    id <SPLogger> _logger;
    id <SPGenderClassifier> _genderClassifier;
    NSNumber *_processingThreads;
    double _ramMemoryCleanerDelay;
    double _volumeLevel;
    id <SPLensImageProcessingService> _lensImageProcessor;
}

@property(nonatomic) _Bool enableReenactmentPreviewsCacheWithoutText; // @synthesize enableReenactmentPreviewsCacheWithoutText=_enableReenactmentPreviewsCacheWithoutText;
@property(retain, nonatomic) id <SPLensImageProcessingService> lensImageProcessor; // @synthesize lensImageProcessor=_lensImageProcessor;
@property(nonatomic) double volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(nonatomic) _Bool preferSegmentationResultForCachedPersonTarget; // @synthesize preferSegmentationResultForCachedPersonTarget=_preferSegmentationResultForCachedPersonTarget;
@property(nonatomic) double ramMemoryCleanerDelay; // @synthesize ramMemoryCleanerDelay=_ramMemoryCleanerDelay;
@property(retain, nonatomic) NSNumber *processingThreads; // @synthesize processingThreads=_processingThreads;
@property(retain, nonatomic) id <SPGenderClassifier> genderClassifier; // @synthesize genderClassifier=_genderClassifier;
@property(retain, nonatomic) id <SPLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTechAnalytics> techAnalytics; // @synthesize techAnalytics=_techAnalytics;
@property(retain, nonatomic) id <SPRecentImagesService> recentImagesService; // @synthesize recentImagesService=_recentImagesService;
@property(retain, nonatomic) id <SPAnalytics> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) SPCacheConfiguration *cacheConfiguration; // @synthesize cacheConfiguration=_cacheConfiguration;
@property(readonly, nonatomic) id <SPExternalSettingsProvider> externalSettingsProvider; // @synthesize externalSettingsProvider=_externalSettingsProvider;
@property(readonly, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(readonly, nonatomic) id <SPZipArchiver> zipArchiver; // @synthesize zipArchiver=_zipArchiver;
@property(readonly, nonatomic) id <SPRemoteSettingsProvider> remoteSettingsProvider; // @synthesize remoteSettingsProvider=_remoteSettingsProvider;
@property(readonly, nonatomic) id <SPDataLoaderService> dataLoaderService; // @synthesize dataLoaderService=_dataLoaderService;
- (void).cxx_destruct;
- (id)initWithDataLoaderService:(id)arg1 remoteSettingsProvider:(id)arg2 zipArchiver:(id)arg3 stringsProvider:(id)arg4 externalSettingsProvider:(id)arg5;

@end

