//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCBetaShakeReportViewControllerDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;

@interface SCLagunaSettingsReportIssueViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, TTTAttributedLabelDelegate, SCBetaShakeReportViewControllerDelegate>
{
    UITableView *_tableView;
}

- (void).cxx_destruct;
- (void)_presentWebviewWithURL:(id)arg1;
- (void)_presentReportViewControllerWithMode:(long long)arg1 featureNames:(id)arg2;
- (void)reportSubmitted:(id)arg1 projectName:(id)arg2 subProjectName:(id)arg3;
- (void)headerleftButtonPressed:(_Bool)arg1 viewController:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (id)titleForHeader:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

