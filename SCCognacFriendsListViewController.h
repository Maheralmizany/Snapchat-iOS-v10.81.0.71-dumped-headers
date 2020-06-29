//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, SCCognacConfirmationButton, SCCognacFriendsListActionHandler, SCCognacFriendsListSectionHeaderViewModel, SCCognacListHeaderView, SCQueuePerformer, UICollectionView;
@protocol SCCognacFriendsListViewControllerDelegate, SCImageDownloading;

@interface SCCognacFriendsListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_viewModels;
    SCCognacFriendsListSectionHeaderViewModel *_sectionHeaderViewModel;
    SCCognacListHeaderView *_headerView;
    UICollectionView *_collectionView;
    SCCognacConfirmationButton *_inviteButton;
    SCCognacFriendsListActionHandler *_actionHandler;
    id <SCImageDownloading> _imageDownloader;
    SCQueuePerformer *_performer;
    NSArray *_invitedFriendIds;
    id <SCCognacFriendsListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCognacFriendsListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateInviteButtonEnabled:(_Bool)arg1;
- (void)_reloadCollectionViewAtIndex:(long long)arg1 updatedViewModels:(id)arg2;
- (void)_updateViewModels:(id)arg1 forUserId:(id)arg2 selected:(_Bool)arg3;
- (void)setCellSelected:(_Bool)arg1 forUserId:(id)arg2;
- (void)clearInvitedFriendsWithRevoke:(_Bool)arg1;
- (void)didInviteFriendIds:(id)arg1;
- (void)dismiss;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_didTapInviteButton;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModels:(id)arg1 imageDownloader:(id)arg2 headerText:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

