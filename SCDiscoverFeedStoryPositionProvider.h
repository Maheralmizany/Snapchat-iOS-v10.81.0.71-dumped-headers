//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedStoryPositionProviding-Protocol.h"

@class NSString, SCDiscoverFeedDataStore, SCExperimentManager, SCFeatureSettingsService;

@interface SCDiscoverFeedStoryPositionProvider : NSObject <SCDiscoverFeedStoryPositionProviding>
{
    SCDiscoverFeedDataStore *_dataStore;
    SCExperimentManager *_experimentManager;
    SCFeatureSettingsService *_featureSettingsService;
}

- (void).cxx_destruct;
- (unsigned long long)itemIndexForStory:(id)arg1 inFeedType:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForFeedType:(unsigned long long)arg1;
- (id)initWithDataStore:(id)arg1 experimentManager:(id)arg2 featureSettingsService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

