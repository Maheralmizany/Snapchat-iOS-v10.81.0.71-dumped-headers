//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCMapSettingsTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCFeatureSettingsService, SCMapSettingsTableViewCell, SCMapSnapTokenService, UISwitch, UITableView;

@interface SCMapAdditionalServicesViewController : SCGenericSettingsViewController <SCMapSettingsTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SCFeatureSettingsService *_featureSettingsService;
    SCMapSnapTokenService *_mapSnapTokenService;
    UITableView *_tableView;
    UISwitch *_shareDataSwitch;
    SCMapSettingsTableViewCell *_usageDataCell;
}

@property(retain, nonatomic) SCMapSettingsTableViewCell *usageDataCell; // @synthesize usageDataCell=_usageDataCell;
@property(retain, nonatomic) UISwitch *shareDataSwitch; // @synthesize shareDataSwitch=_shareDataSwitch;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGRect)mapSettingsTableViewCell:(id)arg1 frameForAccessoryView:(id)arg2;
- (void)leftButtonPressed;
- (id)titleForHeader:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_shareDataSwitchValueDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFeatureSettingsService:(id)arg1 mapSnapTokenService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

