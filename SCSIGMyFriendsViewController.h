//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCPageNameLogging-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SIGScrollViewKeyValueObserverDelegate-Protocol.h"

@class NSOrderedSet, NSString, SCAddFriendsQueryResultControllerHandler, SCMyFriendsIndexViewDelegate, SIGIndexView, SIGRecipientCollectionViewCellIndexer, SIGScrollViewKeyValueObserver, UICollectionView;
@protocol SCMyFriendsWorkflowDelegate, SCSearchQueryCoordinating, SCSearchSectionCreating;

@interface SCSIGMyFriendsViewController : SIGSubscreenViewController <SCShakeToReportDelegate, SIGScrollViewKeyValueObserverDelegate, SCPageNameLogging>
{
    SCAddFriendsQueryResultControllerHandler *_queryResultControllerHandler;
    long long _previousStatusBarStyle;
    SIGRecipientCollectionViewCellIndexer *_cellIndexer;
    SIGIndexView *_indexView;
    UICollectionView *_collectionView;
    SIGScrollViewKeyValueObserver *_scrollViewObserver;
    NSOrderedSet *_indexScript;
    SCMyFriendsIndexViewDelegate *_indexViewDelegate;
    id <SCSearchQueryCoordinating> _searchQueryCoordinator;
    id <SCMyFriendsWorkflowDelegate> _delegate;
    id <SCSearchSectionCreating> _sectionCreator;
}

@property(retain, nonatomic) id <SCSearchSectionCreating> sectionCreator; // @synthesize sectionCreator=_sectionCreator;
- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (id)pageViewName;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (id)loadScrollView;
- (id)initWithSearchQueryCoordinator:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

