//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCInviteFriendStateTracker, SCQueuePerformer, SCSessionRequestManager;

@interface SCInviteFriendDeeplinkCoordinator : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
    SCInviteFriendStateTracker *_stateTracker;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_endDeeplinkRequestForPhoneNumber:(id)arg1 deeplink:(id)arg2 success:(_Bool)arg3;
- (void)fetchFriendDeeplinkForFriendWithDisplayName:(id)arg1 phoneNumber:(id)arg2;
- (id)initWithSessionRequestManager:(id)arg1 stateTracker:(id)arg2;

@end
