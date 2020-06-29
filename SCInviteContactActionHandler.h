//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "SCAddFriendsActionHandling-Protocol.h"
#import "SCAddFriendsPageEventObservableRepository-Protocol.h"
#import "SCInviteFriendStateListener-Protocol.h"

@class NSString, SCInviteFriendDeeplinkCoordinator, SCInviteFriendStateTracker, SCObservable, UIViewController;

@interface SCInviteContactActionHandler : NSObject <SCInviteFriendStateListener, MFMessageComposeViewControllerDelegate, SCAddFriendsPageEventObservableRepository, SCAddFriendsActionHandling>
{
    SCInviteFriendDeeplinkCoordinator *_deeplinkCoordinator;
    SCInviteFriendStateTracker *_stateTracker;
    NSString *_userName;
    UIViewController *_presentingViewController;
    SCObservable *_pageEventObservable;
}

@property(retain, nonatomic) SCObservable *pageEventObservable; // @synthesize pageEventObservable=_pageEventObservable;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_presentSMSForPhoneNumber:(id)arg1 deeplink:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)didEndInvitingFriendWithPhoneNumber:(id)arg1 success:(_Bool)arg2;
- (void)didEndFetchingFriendDeeplinkForPhoneNumber:(id)arg1 deeplink:(id)arg2 success:(_Bool)arg3;
- (void)didStartFetchingFriendDeeplinkForPhoneNumber:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1 deeplinkCoordinator:(id)arg2 stateTracker:(id)arg3 userName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
