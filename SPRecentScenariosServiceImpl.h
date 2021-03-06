//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPRecentScenariosService-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, SPKeyValueStorage, SPSettings;

@interface SPRecentScenariosServiceImpl : NSObject <SPRecentScenariosService>
{
    NSMutableArray *_scenarios;
    NSMutableDictionary *_previewViews;
    NSObject<OS_dispatch_queue> *_queue;
    id <SPKeyValueStorage> _storage;
    id <SPSettings> _settings;
}

@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) id <SPKeyValueStorage> storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)_cleanPreviewViewsIfLimitReached;
- (void)clearAll;
- (id)previewViews;
- (void)trackPreviewViewForScenarioId:(id)arg1;
- (id)scenarioIds;
- (id)scenarios;
- (void)addScenario:(id)arg1;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

