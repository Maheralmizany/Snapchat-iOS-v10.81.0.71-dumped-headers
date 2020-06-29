//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCService-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSString, SCDataObjectContext, SCGalleryFlashbackSearch, SCGalleryLogger, SCGallerySearchQueryResultsCollectorListenerAnnouncer, SCGalleryTagClusterSearch, SCGalleryTakenNearbySearch, SCQueuePerformer, SCSentinel;
@protocol SCObserving;

@interface SCGallerySearchQueryResultsCollector : NSObject <SCService, SCUserSessionScoped>
{
    struct mutex _mutex;
    SCQueuePerformer *_performer;
    SCGalleryFlashbackSearch *_flashbackSearch;
    SCGalleryTakenNearbySearch *_takenNearbySearch;
    SCGalleryTagClusterSearch *_tagClusteringSearch;
    SCGalleryLogger *_galleryLogger;
    NSArray *_searchQueryResults;
    id <SCObserving> _observeContext;
    SCGallerySearchQueryResultsCollectorListenerAnnouncer *_announcer;
    _Bool _outdated;
    SCSentinel *_invalidateSentinel;
    SCDataObjectContext *_dataObjectContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_observeProfileChanges:(id)arg1;
- (void)_unobserveProfileChanges;
- (void)_markSearchQueryResultsOutdated;
- (_Bool)_isInvalidated;
- (void)invalidate;
- (void)runWithServiceTerm:(id)arg1;
- (id)dedicatedQueue;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setAllSearchQueryResults:(id)arg1;
- (id)allSearchQueryResults;
- (void)markSearchQueryResultsOutdated;
- (id)initWithGallerySearch:(id)arg1 suggestedQueryUpdater:(id)arg2 userSession:(id)arg3 dataObjectContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

