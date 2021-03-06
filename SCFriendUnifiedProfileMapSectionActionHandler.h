//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCMapScopeDelegate-Protocol.h"
#import "SCProfileLocationSharingControllerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCFriendUnifiedProfileMapSectionDataProvider, SCUserFeatureMultiLauncher, SCUserSession, UIViewController;
@protocol SCUnifiedProfileDisplayContentOverProfileDelegate;

@interface SCFriendUnifiedProfileMapSectionActionHandler : NSObject <SCMapScopeDelegate, SCProfileLocationSharingControllerDelegate, SCTraceEnabled, SCActionHandling>
{
    NSString *_userId;
    SCUserSession *_userSession;
    SCFriendUnifiedProfileMapSectionDataProvider *_dataProvider;
    UIViewController *_presentingViewController;
    id <SCUnifiedProfileDisplayContentOverProfileDelegate> _displayContentDelegate;
    SCUserFeatureMultiLauncher *_mapScopeLauncher;
}

- (void).cxx_destruct;
- (id)_topMostPresentedViewController;
- (void)profileLocationSharingController:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)mapScope:(id)arg1 didEndWithDestination:(long long)arg2;
- (void)_handleRequestLocation;
- (void)_handleShareLocation;
- (void)_openMapWithDestination:(id)arg1 isExplore:(_Bool)arg2;
- (void)_handleExplore:(id)arg1;
- (void)_handleMapTap;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 userId:(id)arg2 dataProvider:(id)arg3 presentingViewController:(id)arg4 displayContentDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

