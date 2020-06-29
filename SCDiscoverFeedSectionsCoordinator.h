//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCQueuePerformer;

@interface SCDiscoverFeedSectionsCoordinator : NSObject
{
    SCLazy *_lazyDocObjectContext;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_fetchSectionsForFeedTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchSectionsForPageType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateSectionAfterPaginationForFeedType:(id)arg1 newStoryIdentifiers:(id)arg2 streamToken:(id)arg3 fetchedDate:(double)arg4 hasMoreStories:(_Bool)arg5;
- (void)_updateSections:(id)arg1;
- (void)_updatePages:(id)arg1;
- (void)fetchSectionsForFeedTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSectionsForPageType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSectionAfterPaginationForFeedType:(id)arg1 newStoryIdentifiers:(id)arg2 streamToken:(id)arg3 fetchedDate:(double)arg4 hasMoreStories:(_Bool)arg5;
- (void)updateSections:(id)arg1;
- (void)updatePages:(id)arg1;
- (id)initWithLazyDocObjectContext:(id)arg1;

@end

