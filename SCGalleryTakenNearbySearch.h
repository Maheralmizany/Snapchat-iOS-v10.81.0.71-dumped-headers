//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationObserver-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableSet, NSString, SCDataObjectContext, SCUserSession;
@protocol SCPerforming;

@interface SCGalleryTakenNearbySearch : NSObject <SCLocationObserver, SCTraceEnabled>
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    NSMutableSet *_pendingRequestItems;
    SCDataObjectContext *_dataObjectContext;
}

- (void).cxx_destruct;
- (id)_gallerySnapsFromGallerySnapItems:(id)arg1;
- (id)_gallerySnapItemsSortedByDistance:(id)arg1;
- (id)_gallerySnapItemsTakenNearbyLocation:(id)arg1 withinDistance:(double)arg2 forOwner:(id)arg3;
- (id)_gallerySnapsTakenNearbyLocation:(id)arg1 forOwner:(id)arg2;
- (void)_completePendingRequestItemsWithResult:(id)arg1;
- (void)_completeRequestItem:(id)arg1 withResult:(id)arg2;
- (void)onLocationError:(id)arg1;
- (void)onLocationUpdate:(id)arg1;
- (id)locationObserverIdentifier;
- (double)locationObserverDesiredAccuracy;
- (id)locationObserverDispatchQueue;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (id)getSearchResultTakenNearbyToSnapIds:(id)arg1 withGeoTag:(id)arg2;
- (id)fetchTakenNearbySearchResultWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPerformer:(id)arg1 userSession:(id)arg2 dataObjectContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

