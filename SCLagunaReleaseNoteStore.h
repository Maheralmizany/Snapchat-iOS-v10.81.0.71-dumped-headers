//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesReleaseNoteStoring-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SCPreferences, SCSessionRequestManager;
@protocol SCDownloadableContentManaging;

@interface SCLagunaReleaseNoteStore : NSObject <SCSpectaclesReleaseNoteStoring>
{
    SCPreferences *_preferences;
    SCSessionRequestManager *_requestManager;
    id <SCDownloadableContentManaging> _resourceManager;
    NSArray *_allNotes;
    NSMutableArray *_activeNotesInternal;
    NSString *_lastClientVersion;
    NSMutableDictionary *_lastFirmwareVersions;
    NSMutableDictionary *_expiryDates;
}

@property(retain, nonatomic) NSMutableDictionary *expiryDates; // @synthesize expiryDates=_expiryDates;
@property(retain, nonatomic) NSMutableDictionary *lastFirmwareVersions; // @synthesize lastFirmwareVersions=_lastFirmwareVersions;
@property(copy, nonatomic) NSString *lastClientVersion; // @synthesize lastClientVersion=_lastClientVersion;
@property(retain, nonatomic) NSMutableArray *activeNotesInternal; // @synthesize activeNotesInternal=_activeNotesInternal;
@property(retain, nonatomic) NSArray *allNotes; // @synthesize allNotes=_allNotes;
@property(retain, nonatomic) id <SCDownloadableContentManaging> resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) SCPreferences *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (_Bool)releaseNoteHasExpirationDate:(id)arg1;
- (void)expireReleaseNote:(id)arg1 afterDate:(id)arg2;
- (void)expireReleaseNotesImmediately:(id)arg1;
- (id)latestReleaseNoteForDevice:(id)arg1 updatingToFirmware:(id)arg2;
- (_Bool)_updateWithDevice:(id)arg1;
- (_Bool)_updateWithClientVersion:(id)arg1 hardwareVersions:(id)arg2 hasUsedSpectacles:(_Bool)arg3;
- (_Bool)_expireNotes;
- (void)refreshActiveReleaseNotesWithDevices:(id)arg1 hasUsedSpectacles:(_Bool)arg2;
- (id)thumbnailForReleaseNote:(id)arg1;
- (_Bool)_releaseNoteIsPending:(id)arg1;
- (void)_handleFetchResponse:(id)arg1;
- (void)fetchLatestReleaseNotes;
- (void)reset;
- (id)activeNotes;
- (void)_encodePreferences;
- (id)initWithRequestManager:(id)arg1 resourceManager:(id)arg2 userPreferences:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

