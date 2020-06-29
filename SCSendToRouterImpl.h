//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppStoryAuthorizationDelegate-Protocol.h"
#import "SCCustomStoryMembersDelegate-Protocol.h"
#import "SCCustomStoryMenuDelegate-Protocol.h"
#import "SCLegacySendToMiniProfileWorkflowDelegate-Protocol.h"
#import "SCNewGroupCreationWorkFlowDelegate-Protocol.h"
#import "SCSendToRouter-Protocol.h"

@class NSString, SCExperimentManager, SCLazy, SCOptionalScopeExposer, SCScopeExposer, SCSelectionTracker;
@protocol SCUIContainer;

@interface SCSendToRouterImpl : NSObject <SCLegacySendToMiniProfileWorkflowDelegate, SCAppStoryAuthorizationDelegate, SCCustomStoryMembersDelegate, SCCustomStoryMenuDelegate, SCNewGroupCreationWorkFlowDelegate, SCSendToRouter>
{
    SCScopeExposer *_customStoryCreationScopeExposer;
    SCScopeExposer *_customStoryMembersScopeExposer;
    SCScopeExposer *_customStoryMenuScopeExposer;
    SCOptionalScopeExposer *_legacyMiniProfileScopeExposer;
    SCScopeExposer *_appStoryAuthorizationScopeExposer;
    SCScopeExposer *_newGroupScopeExposer;
    SCLazy *_snapKitAppStateController;
    SCSelectionTracker *_selectionTracker;
    id <SCUIContainer> _uiContainer;
    SCLazy *_selectionGroupFetcher;
    SCLazy *_snapchattersDataFetcher;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)didCompleteCustomStoryMenuScope;
- (void)didDismissCustomStoryMembers;
- (void)_setGroupSelectionStateForGroupId:(id)arg1;
- (void)didDismissNewGroupCreation:(id)arg1;
- (void)didCreateGroupWithGroupId:(id)arg1 selectionItems:(id)arg2;
- (void)didCompleteAppStoryAuthorizationWithDidAuthorize:(_Bool)arg1 appState:(id)arg2;
- (void)legacySendToMiniProfileScopeDidDismiss:(id)arg1;
- (void)showBusinessStoryFirstTimePostForDisplayName:(id)arg1 onAccept:(CDUnknownBlockType)arg2 presentingViewController:(id)arg3;
- (void)showBestOfSpectaclesIntroWithOnAccept:(CDUnknownBlockType)arg1 presentingViewController:(id)arg2;
- (void)showOurStoryAttributionIntroForDisplayName:(id)arg1 onAccept:(CDUnknownBlockType)arg2 presentingViewController:(id)arg3;
- (void)showOurStoryFirstTimePostWithOnAccept:(CDUnknownBlockType)arg1 presentingViewController:(id)arg2;
- (void)_showCustomStoryFirstTimePostWithCustomStoryId:(id)arg1 creatorDisplayName:(id)arg2 onAccept:(CDUnknownBlockType)arg3 hasBlockedUsers:(_Bool)arg4 presentingViewController:(id)arg5;
- (void)showCustomStoryFirstTimePostForCustomStory:(id)arg1 onAccept:(CDUnknownBlockType)arg2 hasBlockedUsers:(_Bool)arg3 presentingViewController:(id)arg4;
- (void)showPrivateStoryFirstTimePostForPublicationId:(id)arg1 onAccept:(CDUnknownBlockType)arg2 presentingViewController:(id)arg3;
- (void)showAppStoryAuthorizationForApplicationId:(id)arg1 uiContainer:(id)arg2;
- (void)showCustomStoryActionMenuForPublicationId:(id)arg1 presentingViewController:(id)arg2;
- (void)showSnapchatterMiniProfileForUserId:(id)arg1 uiContainer:(id)arg2;
- (void)showGroupMiniProfileForGroupId:(id)arg1 uiContainer:(id)arg2;
- (void)showNewGroupPageWithSelectedItems:(id)arg1 uiContainer:(id)arg2;
- (void)completeCustomStoryCreation;
- (void)showCustomStoryCreationWithPresentingViewController:(id)arg1 delegate:(id)arg2;
- (id)initWithCustomStoryCreationScopeExposer:(id)arg1 customStoryMembersScopeExposer:(id)arg2 customStoryMenuScopeExposer:(id)arg3 legacyMiniProfileScopeExposer:(id)arg4 appStoryAuthorizationScopeExposer:(id)arg5 newGroupScopeExposer:(id)arg6 snapKitAppStateController:(id)arg7 selectionTracker:(id)arg8 selectionGroupFetcher:(id)arg9 snapchattersDataFetcher:(id)arg10 experimentManager:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
