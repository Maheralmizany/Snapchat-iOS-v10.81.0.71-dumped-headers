//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "FriendsTableIndexDelegate-Protocol.h"
#import "SCSearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCFriendsTableIndex, SCLagunaSettingsFriendsDataProvider, SCLagunaSettingsFriendsDataSource, SCSearchBar, SIGButton, UILabel, UITableView, UIView;
@protocol SCLagunaSettingsFriendsViewControllerDelegate;

@interface SCLagunaSettingsFriendsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, FriendsTableIndexDelegate, SCSearchBarDelegate>
{
    UITableView *_tableView;
    UIView *_tableHeaderViewContainer;
    UILabel *_headerInfoLabel;
    SCFriendsTableIndex *_tableIndex;
    SCSearchBar *_searchBar;
    SIGButton *_doneButton;
    NSArray *_initialSelectedFriends;
    SCLagunaSettingsFriendsDataSource *_friendsDataSource;
    SCLagunaSettingsFriendsDataProvider *_friendsDataProvider;
    id <SCLagunaSettingsFriendsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLagunaSettingsFriendsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_updateTableViewHeaderForSearchMode;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 didSearch:(id)arg2;
- (void)searchBarDidEndEditing:(id)arg1;
- (void)searchBarDidBeginEditing:(id)arg1;
- (void)scrollToIndex:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_scrollSearchBarToTop:(_Bool)arg1;
- (void)_didTapDoneButton;
- (void)saveSetting;
- (id)getSubtitle;
- (id)getTitle;
- (double)_doneButtonTopByOffset:(double)arg1;
- (double)_doneButtonDefaultBottomPadding;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 selectedFriends:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

