//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCGeoFilterLoadingMetaData, SCGeoFilterView, SCLocationServicesDataStore, SCUnlockablesPreCacheApplicableResult;

@protocol SCGeoFilterLogger <NSObject>
+ (long long)mapFromSCPreCacheResultStatusEnum:(unsigned long long)arg1;
@property(nonatomic) _Bool abandonedGeofilterMissLoggingForSnapSession;
@property(nonatomic) unsigned long long sessionCounter;
@property(nonatomic) _Bool lastSessionOver;
@property(nonatomic) long long swipeDirection;
@property(nonatomic) _Bool validSession;
@property(nonatomic) _Bool unfilteredSwipedAway;
- (_Bool)geofilterMissLoggingValidSession;
- (void)logFinalGeofilterMissEvents;
- (void)logFilterMissIfAnyForFilterId:(NSString *)arg1 index:(long long)arg2 currentItemIndex:(unsigned long long)arg3;
- (void)logGeofilterReadyMissEventsForSessionNumber:(unsigned long long)arg1;
- (long long)precacheStatus;
- (SCUnlockablesPreCacheApplicableResult *)preCacheApplicableResult;
- (_Bool)isFilterFromPrecache:(NSString *)arg1;
- (void)upsertIfNecessary:(SCGeoFilterLoadingMetaData *)arg1 withNewStage:(long long)arg2;
- (void)upsertIfNecessary:(SCGeoFilterLoadingMetaData *)arg1;
- (void)swipeOverView:(SCGeoFilterView *)arg1;
- (void)setSnapIsCancelled:(_Bool)arg1;
- (long long)numSeen;
- (long long)numReady;
- (void)didSwipe;
- (void)viewingStarted;
- (id)initWithLocationServicesDataStore:(SCLocationServicesDataStore *)arg1;
@end

