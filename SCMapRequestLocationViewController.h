//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCMapRequestLocationViewDelegate-Protocol.h"

@class NSString, SCMapLoggerEventSender, SCMapRequestLocationView;
@protocol SCMapRequestLocationViewControllerDelegate;

@interface SCMapRequestLocationViewController : UIViewController <SCMapRequestLocationViewDelegate>
{
    NSString *_currentUserId;
    id <SCMapRequestLocationViewControllerDelegate> _delegate;
    SCMapLoggerEventSender *_mapLoggerEventSender;
    double _startViewTime;
    _Bool _exitButtonVisible;
}

+ (_Bool)shouldShowForCurrentUserId:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_needsLocationPermissionForUserId:(id)arg1;
- (void)_handleCurrentLocationPermissions;
- (void)giveAccessViewCloseButtonTapped:(id)arg1;
- (void)giveAccessViewNotNowButtonTapped:(id)arg1;
- (void)giveAccessViewGiveAccessButtonTapped:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCurrentUserId:(id)arg1 delegate:(id)arg2 mapLoggerEventSender:(id)arg3 exitButtonVisible:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SCMapRequestLocationView *view; // @dynamic view;

@end
