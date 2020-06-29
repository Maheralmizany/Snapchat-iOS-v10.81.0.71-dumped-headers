//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCChatLocationSharingControllerDelegate-Protocol.h"
#import "SCMapScopeDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCGroupProfileMapSectionV2DataProvider, SCGroupUnifiedProfileDataSource, SCUserFeatureMultiLauncher, SCUserSession, UIViewController;
@protocol SCUnifiedProfileDisplayContentOverProfileDelegate;

@interface SCGroupProfileMapSectionV2ActionHandler : NSObject <SCMapScopeDelegate, SCChatLocationSharingControllerDelegate, SCTraceEnabled, SCActionHandling>
{
    SCGroupUnifiedProfileDataSource *_dataSource;
    SCUserSession *_userSession;
    SCGroupProfileMapSectionV2DataProvider *_dataProvider;
    UIViewController *_presentingViewController;
    id <SCUnifiedProfileDisplayContentOverProfileDelegate> _displayContentDelegate;
    SCUserFeatureMultiLauncher *_mapScopeLauncher;
}

- (void).cxx_destruct;
- (id)_topMostPresentedViewController;
- (void)chatLocationSharingController:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)mapScope:(id)arg1 didEndWithDestination:(long long)arg2;
- (void)_handleGroupSendLocation;
- (void)_handleGroupShareLocation;
- (void)_openMapWithDestination:(id)arg1;
- (void)_handleFriendMapTap:(id)arg1;
- (void)_handleGroupMapTap;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithDataSource:(id)arg1 userSession:(id)arg2 dataProvider:(id)arg3 presentingViewController:(id)arg4 displayContentDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

