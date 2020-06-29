//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging-Protocol.h"
#import "SCSettingsSwitchTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCLazy, SCSettingsSwitchTableViewCell, SCUserQuickAddPrivacy, SCUserSession, UIButton, UITableView;

@interface QuickAddPrivacySettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCSettingsSwitchTableViewCellDelegate, SCPageNameLogging>
{
    SCUserSession *_userSession;
    SCUserQuickAddPrivacy *_quickAddSetting;
    UITableView *_table;
    UIButton *_learnMoreButton;
    _Bool _userClickedLearnMore;
    SCLazy *_quickAddPrivacyProvider;
    SCLazy *_quickAddPrivacyMutator;
    SCSettingsSwitchTableViewCell *_quickAddCell;
}

- (void).cxx_destruct;
- (void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(_Bool)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)quickAddCell;
- (void)_learnMoreClicked;
- (void)leftSwipePrepare;
- (void)viewWillResignActive;
- (void)_handleUpdateQuickAddPrivacyResult:(id)arg1;
- (void)_updateQuickAddPrivacySetting:(id)arg1;
- (void)saveSetting;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_readQuickAddPrivacy;
- (id)getTitle;
- (void)viewDidLoad;
- (void)loadView;
- (id)pageViewName;
- (id)initWithUserSession:(id)arg1 quickAddPrivacyProvider:(id)arg2 quickAddPrivacyMutator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
