//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SIGScrollViewKeyValueObserverDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCSearchQueryResultController, SCSelectionTracker, SCSnapchatterSelectionConfiguration, SIGIndexViewProvider, SIGScrollViewKeyValueObserver, SIGSearchQueryTextFieldHandler, SIGSectionFastIndexer, SIGSectionIndexViewSynchronizer, UICollectionView;
@protocol SCSearchSectionCreating, SCSnapchatterSelectionDelegate;

@interface SCSnapchatterSelectionViewController : SIGSubscreenViewController <UICollectionViewDelegate, SIGScrollViewKeyValueObserverDelegate>
{
    id <SCSearchSectionCreating> _sectionCreator;
    SCSelectionTracker *_selectionTracker;
    SCSnapchatterSelectionConfiguration *_configuration;
    SIGIndexViewProvider *_indexViewProvider;
    SIGSectionFastIndexer *_fastIndexer;
    id <SCSnapchatterSelectionDelegate> _delegate;
    SCSearchQueryResultController *_queryResultController;
    SIGSearchQueryTextFieldHandler *_textFieldHandler;
    SIGSectionIndexViewSynchronizer *_indexViewSynchronizer;
    long long _previousStatusBarStyle;
    UICollectionView *_collectionView;
    SIGScrollViewKeyValueObserver *_scrollViewObserver;
}

- (void).cxx_destruct;
- (void)_actionButtonPressed;
- (void)_dismissKeyboard;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (id)loadScrollView;
- (id)initWithSectionCreator:(id)arg1 selectionTracker:(id)arg2 configuration:(id)arg3 indexViewProvider:(id)arg4 fastIndexer:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

