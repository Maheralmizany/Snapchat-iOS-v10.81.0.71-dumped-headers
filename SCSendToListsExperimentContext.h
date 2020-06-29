//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToListsExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _showListsByDefault;
    _Bool _showHowToViewTooltip;
    _Bool _disableCreate;
    _Bool _dataStoreEnabled;
    _Bool _statusOverlayEnabled;
    long long _prepopulationThreshold;
    double _prepopulationRatioThreshold;
    long long _dataStoreSyncExpirationMinutes;
}

@property(readonly, nonatomic) _Bool statusOverlayEnabled; // @synthesize statusOverlayEnabled=_statusOverlayEnabled;
@property(readonly, nonatomic) long long dataStoreSyncExpirationMinutes; // @synthesize dataStoreSyncExpirationMinutes=_dataStoreSyncExpirationMinutes;
@property(readonly, nonatomic) _Bool dataStoreEnabled; // @synthesize dataStoreEnabled=_dataStoreEnabled;
@property(readonly, nonatomic) _Bool disableCreate; // @synthesize disableCreate=_disableCreate;
@property(readonly, nonatomic) _Bool showHowToViewTooltip; // @synthesize showHowToViewTooltip=_showHowToViewTooltip;
@property(readonly, nonatomic) double prepopulationRatioThreshold; // @synthesize prepopulationRatioThreshold=_prepopulationRatioThreshold;
@property(readonly, nonatomic) long long prepopulationThreshold; // @synthesize prepopulationThreshold=_prepopulationThreshold;
@property(readonly, nonatomic) _Bool showListsByDefault; // @synthesize showListsByDefault=_showListsByDefault;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setupParameters;
- (id)experimentName;

@end
