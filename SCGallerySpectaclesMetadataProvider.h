//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, SCPreferences, SCUserInfoServices;
@protocol SCPreviewFilterDataProvider, SCPreviewFilterDataProviderFactory, SCSpectaclesAppStatusProviding;

@interface SCGallerySpectaclesMetadataProvider : NSObject <SCTraceEnabled>
{
    id <SCPreviewFilterDataProvider> _filterDataProvider;
    _Bool _running;
    SCPreferences *_preferences;
    SCUserInfoServices *_userInfoServices;
    id <SCSpectaclesAppStatusProviding> _appStatusProvider;
    id <SCPreviewFilterDataProviderFactory> _filterDataProviderFactory;
    _Bool _isBackgrounded;
    NSArray *_metadataLocations;
}

@property(copy) NSArray *metadataLocations; // @synthesize metadataLocations=_metadataLocations;
- (void).cxx_destruct;
- (void)_readLocationsAndFiltersFromFile;
- (void)_writeLocationsAndFiltersToFile;
- (_Bool)_shouldCacheLocation;
- (void)_clearExpiredDataFromCache;
- (void)cacheCurrentLocationIfNeeded;
- (void)clearCache;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (id)_locationDataForTimeOfCapture:(id)arg1 fromLocations:(id)arg2;
- (id)overlayForContent:(id)arg1;
- (id)locationForContent:(id)arg1;
- (void)endUpdatingMetadata;
- (void)startUpdatingMetadata;
- (id)initWithPreferences:(id)arg1 userInfoServices:(id)arg2 appStatusProvider:(id)arg3 filterDataProviderFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

