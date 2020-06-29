//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMemoriesInlineSearchDataSourceListener-Protocol.h"
#import "SCMemoriesMergedDataSourceListener-Protocol.h"

@class NSArray, NSString, SCGalleryMomentClusterer, SCMemoriesFeaturedStoriesSectionViewModel, SCMemoriesInlineSearchDataSource, SCQueuePerformer, SCUserSession;
@protocol SCGallerySnapsTabDataSourceDelegate, SCMemoriesMergedDataSource;

@interface SCGallerySnapsTabDataSource : NSObject <SCMemoriesMergedDataSourceListener, SCMemoriesInlineSearchDataSourceListener>
{
    id <SCMemoriesMergedDataSource> _mergedDataSource;
    SCGalleryMomentClusterer *_momentClusterer;
    NSArray *_entries;
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    _Bool _isLoading;
    SCMemoriesFeaturedStoriesSectionViewModel *_featuredStoriesViewModel;
    NSArray *_momentViewModels;
    NSArray *_failedEntries;
    SCMemoriesInlineSearchDataSource *_inlineSearchDataSource;
    _Bool _selectMode;
    NSObject<SCGallerySnapsTabDataSourceDelegate> *_delegate;
}

@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
@property(nonatomic) __weak NSObject<SCGallerySnapsTabDataSourceDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)memoriesInlineSearchDataSource:(id)arg1 didChangeSearchResults:(id)arg2;
- (id)_generateGroupViewModelsWithRecentlyAdded:(id)arg1 clusters:(id)arg2;
- (void)_setIsLoading:(_Bool)arg1;
- (void)_setMomentViewModels:(id)arg1;
- (void)_setFeaturedStoriesViewModel:(id)arg1;
- (id)_mergeGroupViewModel:(id)arg1 withAnotherGroupViewModel:(id)arg2;
- (id)_createCellViewModelWithSnapGroup:(id)arg1 entry:(id)arg2;
- (id)_viewModel:(id)arg1 title:(id)arg2;
- (void)_didCompleteClusterSnaps;
- (void)_updateGroups;
- (void)_updateEntries:(id)arg1;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (id)_operaGroupWithGroudId:(id)arg1 entry:(id)arg2 snaps:(id)arg3;
- (void)buildOperaGroupsWithGroupViewModel:(id)arg1 currentCellViewModel:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchSnapsForEntry:(id)arg1;
- (id)fetchEntryForSnapId:(id)arg1;
- (id)initWithUserSession:(id)arg1 snapClustererOption:(id)arg2 dataObjectContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

