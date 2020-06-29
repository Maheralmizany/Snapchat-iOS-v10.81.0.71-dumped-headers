//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCCustomStoryMembersDelegate-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"
#import "SCUnifiedProfileViewControllerLifecycleListener-Protocol.h"

@class NSArray, NSString, SCLazy, SCScopedAccess, SCUnifiedProfilePresenter, SCUnifiedProfileTransitionCoordinator, UIViewController;
@protocol NavigationDelegate, SCStartChatDelegate;

@interface SCInteractiveStickersNotificationActionHandler : NSObject <SCCustomStoryMembersDelegate, SCUnifiedProfileViewControllerLifecycleListener, SCStoriesModelUpdateListener, SCActionHandling>
{
    UIViewController *_presentingViewController;
    SCLazy *_customStoriesDataSyncer;
    SCUnifiedProfileTransitionCoordinator *_profileTransitionCoordinator;
    SCScopedAccess *_customStoryMembersScopeLauncher;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCUnifiedProfilePresenter *_unifiedProfilePresenter;
    _Bool _isHandlingSnapRequestStorySubmissionNotification;
    _Bool _isSnapRequestReplySnapsLoaded;
    NSArray *_storiesSections;
    NSString *_snapRequestCreatorStoryId;
    NSString *_snapRequestCreatorStorySnapId;
    NSString *_snapRequestCustomStoryId;
}

- (void).cxx_destruct;
- (void)_clearState;
- (void)_launchStorySnapFromMyProfileIfPossible;
- (void)_fetchSnapRequestReplySnapsLoaded;
- (void)_setSnapSubmissionStoryId:(id)arg1 storySnapId:(id)arg2;
- (void)_fetchSnapSubmissionStoryAndSnapIds;
- (void)_handleSnapRequestSnapSubmissionWithActionModel:(id)arg1;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (void)unifiedProfileDidTeardownSections:(id)arg1;
- (void)unifiedProfileDidSetupSections:(id)arg1;
- (void)unifiedProfileDidUpdateSectionsWithAnimationFinished:(_Bool)arg1;
- (void)unifiedProfileDidDisappear;
- (void)unifiedProfileWillAppear;
- (void)didDismissCustomStoryMembers;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1 customStoriesDataSyncer:(id)arg2 profileTransitionCoordinator:(id)arg3 customStoryMembersScopeLauncher:(id)arg4 unifiedProfilePresenter:(id)arg5 startChatDelegate:(id)arg6 navigationDelegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

