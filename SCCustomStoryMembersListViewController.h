//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCSearchQueryResultController, SIGSearchQueryTextFieldHandler, UICollectionView;
@protocol SCCustomStoryMembersDelegate, SCSearchSectionCreating;

@interface SCCustomStoryMembersListViewController : SIGSubscreenViewController <UICollectionViewDelegate>
{
    id <SCSearchSectionCreating> _sectionCreator;
    id <SCCustomStoryMembersDelegate> _delegate;
    SCSearchQueryResultController *_queryResultController;
    SIGSearchQueryTextFieldHandler *_textFieldHandler;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didSelectDismissalActionWithHeaderItem:(id)arg1;
- (id)loadScrollView;
- (id)initWithSectionCreator:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
