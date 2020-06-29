//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOurStoriesAttributionManaging-Protocol.h"

@class NSString, SCFeatureSettingsService, SCLazy, SCOurStoriesAttributionListenerAnnouncer, SCQueuePerformer;
@protocol SCObserving, SCStoriesGrapheneMetricsEmitting;

@interface SCOurStoriesAttributionManager : NSObject <SCOurStoriesAttributionManaging>
{
    SCFeatureSettingsService *_featureSettingsService;
    SCLazy *_userPreferences;
    SCLazy *_birthdayProvider;
    SCLazy *_storyPrivacySettingManager;
    SCLazy *_snapProUserProfileIdProvider;
    SCLazy *_userPropertiesProvider;
    id <SCStoriesGrapheneMetricsEmitting> _storiesGrapheneMetricsEmitter;
    SCOurStoriesAttributionListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_announcePerformer;
    id <SCObserving> _featureSettingsObserver;
}

- (void).cxx_destruct;
- (void)_announceOurStoriesAttributionEnabled:(_Bool)arg1;
- (void)_performAnnounceOurStoriesAttributionChanged;
- (void)_performSetSeenCommunitySnapsAttributionWarning:(_Bool)arg1;
- (void)_performSetSeenOurStoriesAttributionWarning:(_Bool)arg1;
- (void)_logSetOurStoriesAttributionEnabled:(_Bool)arg1;
- (void)_performSetOurStoriesAttributionEnabled:(_Bool)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)incrementTeachingTooltipImpression;
- (_Bool)shouldShowTeachingTooltip;
- (_Bool)hasSeenCommunitySnapsAttributionWarning;
- (void)setSeenCommunitySnapsAttributionWarning:(_Bool)arg1;
- (_Bool)hasSeenOurStoriesAttributionWarning;
- (void)setSeenOurStoriesAttributionWarning:(_Bool)arg1;
- (_Bool)isOurStoriesAttributionEnabled;
- (void)setOurStoriesAttributionEnabled:(_Bool)arg1;
- (_Bool)isFeatureEnabled;
- (id)initWithFeatureSettingsService:(id)arg1 userPreferences:(id)arg2 birthdayProvider:(id)arg3 storyPrivacySettingManager:(id)arg4 snapProUserProfileIdProvider:(id)arg5 userPropertiesProvider:(id)arg6 storiesGrapheneMetricsEmitter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
