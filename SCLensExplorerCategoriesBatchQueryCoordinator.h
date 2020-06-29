//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensExplorerBaseQueryCoordinator.h"

#import "SCLensExplorerCategoriesBatch-Protocol.h"

@class NSString, SCLensExplorerCategories, SCQueuePerformer;
@protocol SCLensExplorerQueryFactoryProtocol, SCLensExplorerStudySettingsProviderProtocol;

@interface SCLensExplorerCategoriesBatchQueryCoordinator : SCLensExplorerBaseQueryCoordinator <SCLensExplorerCategoriesBatch>
{
    SCLensExplorerBaseQueryCoordinator *_rankingLensesQueryCoordinator;
    SCLensExplorerBaseQueryCoordinator *_challengesQueryCoordinator;
    id <SCLensExplorerQueryFactoryProtocol> _queryFactory;
    id <SCLensExplorerStudySettingsProviderProtocol> _studySettingsProvider;
    SCQueuePerformer *_performer;
    SCLensExplorerCategories *_lensExplorerCategories;
}

- (void).cxx_destruct;
- (void)_checkInvariants;
- (void)_retrieveLensExplorerItemsFromStoriesResponse:(id)arg1;
- (void)_retrieveLensExplorerCategoriesFromStoriesResponse:(id)arg1;
- (void)handleResponseData:(id)arg1 forQuery:(id)arg2;
- (id)requestForQuery:(id)arg1;
- (_Bool)needToPrepareAdditionalCategories;
- (void)_defaultCategoriesBasedOnStudySettingsForPromise:(id)arg1;
- (void)_requestCategoriesForPromise:(id)arg1;
- (id)requestCategories;
- (void)_createPerformer;
- (id)initWithRequestManager:(id)arg1 rankingLensesQueryCoordinator:(id)arg2 queryFactory:(id)arg3 studySettingsProvider:(id)arg4 requestProvider:(id)arg5 queryStatusChecker:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
