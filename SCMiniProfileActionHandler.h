//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"

@class NSArray, NSDictionary, NSString, SCEventListenerAnnouncer, SCMiniProfileViewController, SCSUPActionableStoryKey, SCStoryMiniProfileViewController, SCUserSession;
@protocol SCPerforming;

@interface SCMiniProfileActionHandler : NSObject <SCEventAnnouncing>
{
    SCUserSession *_userSession;
    id <SCPerforming> _performer;
    NSArray *_storyOptions;
    SCSUPActionableStoryKey *_storyKey;
    unsigned long long _controllerType;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSDictionary *_additionalInfo;
    SCStoryMiniProfileViewController *_storyMiniProfileViewController;
    SCMiniProfileViewController *_miniProfileViewController;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) __weak SCMiniProfileViewController *miniProfileViewController; // @synthesize miniProfileViewController=_miniProfileViewController;
@property(readonly, nonatomic) __weak SCStoryMiniProfileViewController *storyMiniProfileViewController; // @synthesize storyMiniProfileViewController=_storyMiniProfileViewController;
@property(readonly, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
- (void).cxx_destruct;
- (id)sendPromotedStory:(id)arg1 coverImage:(id)arg2 fromViewController:(id)arg3;
- (id)sendDynamicStory:(id)arg1 coverImage:(id)arg2 delegate:(id)arg3 fromViewController:(id)arg4;
- (id)_activePresentingViewController;
- (void)_updateMiniProfileToIsExternallySharing:(_Bool)arg1;
- (void)_updateStoryProfileToIsExternallySharing:(_Bool)arg1;
- (void)_updateActiveProfileToIsExternallySharing:(_Bool)arg1;
- (void)_handleShareStoryWithUrl:(id)arg1 storiesEverywhereService:(id)arg2 presentingViewController:(id)arg3 shareCompletion:(CDUnknownBlockType)arg4 presentCompletion:(CDUnknownBlockType)arg5;
- (void)shareStoryURLWithStoriesEverywhereService:(id)arg1 storyId:(id)arg2 storyType:(int)arg3 shareCompletion:(CDUnknownBlockType)arg4 presentCompletion:(CDUnknownBlockType)arg5;
- (void)_handleSubscribeResponseDidSubscribe:(_Bool)arg1 success:(_Bool)arg2 successCompletion:(CDUnknownBlockType)arg3 failureCompletion:(CDUnknownBlockType)arg4;
- (void)_sendSubscribeRequestShouldSubscribe:(_Bool)arg1 successCompletion:(CDUnknownBlockType)arg2 failureCompletion:(CDUnknownBlockType)arg3;
- (void)_updateStoryProfileToSubscribeState:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateStoryProfileToNextSubscribeState:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateUser:(id)arg1 nextState:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updatePublisher:(long long)arg1 nextState:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)_updateStory:(id)arg1 nextState:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (long long)_getNextMiniProfileStoryOptionFromOptInState:(unsigned long long)arg1;
- (void)updateNotificationViewModelForUser:(unsigned long long)arg1;
- (void)_updateNotificationViewModel:(unsigned long long)arg1;
- (void)updateStory:(id)arg1 nextState:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1 miniProfileViewController:(id)arg2 storyOptions:(id)arg3 storyKey:(id)arg4 additionalInfo:(id)arg5;
- (id)initWithUserSession:(id)arg1 storyMiniProfileViewController:(id)arg2 storyOptions:(id)arg3 storyKey:(id)arg4 additionalInfo:(id)arg5;
- (id)initWithUserSession:(id)arg1 storyMiniProfileViewController:(id)arg2 additionalInfo:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

