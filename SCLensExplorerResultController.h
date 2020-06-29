//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerBaseQueryCoordinatorDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, SCFuture, SCLensExplorerCategoryModel, SCSearchQueryResultController, UICollectionView;
@protocol SCLensExplorerFactoryProtocol, SCPerforming;

@interface SCLensExplorerResultController : NSObject <SCLensExplorerBaseQueryCoordinatorDelegate>
{
    SCLensExplorerCategoryModel *_categoryModel;
    id <SCLensExplorerFactoryProtocol> _lensExplorerFactory;
    UICollectionView *_collectionView;
    id <SCPerforming> _performer;
    NSArray *_queryCoordinators;
    NSArray *_sections;
    SCSearchQueryResultController *_queryResultController;
    NSDictionary *_lensItemQueryProviders;
    CDUnknownBlockType _onRequestCompleted;
}

@property(copy, nonatomic) CDUnknownBlockType onRequestCompleted; // @synthesize onRequestCompleted=_onRequestCompleted;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishLoadingItemsWithQueryCoordinator:(id)arg1 isEmpty:(_Bool)arg2 pageViewType:(long long)arg3;
- (void)requestTailItemsForSectionIdentifier:(id)arg1;
- (void)refreshItemsForSectionIdentifier:(id)arg1;
- (void)requestItemsForSectionIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *sections;
@property(readonly, nonatomic) SCFuture *isEmpty;
@property(readonly, nonatomic) _Bool initialRequestCompleted;
@property(readonly, nonatomic) SCSearchQueryResultController *queryResultController;
- (id)initWithCategoryModel:(id)arg1 lensExplorerFactory:(id)arg2 collectionView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
