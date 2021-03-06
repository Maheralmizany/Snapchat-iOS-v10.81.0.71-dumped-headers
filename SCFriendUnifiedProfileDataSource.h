//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSNumber, NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCExperimentManager, SCFriendUnifiedProfileConfiguration, SCFriendsFeedItem, SCLazy, SCNetworkImage, SCQueuePerformer, SCSnapchatter, SCSnapchatterFriendStatusProvider, SCUpdateListenerAnnouncer, SCUserSession;
@protocol SCArroyoConversationIdsManaging, SCLegacyItemDownloading;

@interface SCFriendUnifiedProfileDataSource : NSObject <SCSnapchattersDataRequestListener, SCDataCoordinatorListener, SCUpdateListener, SCEventListener, SCUpdateAnnouncing>
{
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_dataModelUpdatePerformer;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchatterDataTracker;
    SCLazy *_snapchatterPublicInfoFetcher;
    id <SCLegacyItemDownloading> _scoreInfoFetcher;
    SCLazy *_userInfoProvider;
    SCUserSession *_userSession;
    SCLazy *_friendsFeedDataAccess;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCSnapchatterFriendStatusProvider *_addFriendStatusProvider;
    id <SCArroyoConversationIdsManaging> _arroyoConversationIdsManager;
    NSString *_userId;
    NSString *_username;
    NSString *_conversationId;
    SCSnapchatter *_snapchatter;
    NSString *_userScore;
    _Bool _messageNotificationStatus;
    _Bool _isUpdatingMuteStory;
    _Bool _storyNotificationsIsOptedIn;
    SCNetworkImage *_storyThumbnailNetworkImage;
    _Bool _hasUnviewedStories;
    long long _addFriendStatus;
    long long _cognacNotificationStatus;
    SCFriendsFeedItem *_friendsFeedItem;
    NSNumber *_messageRetentionInMinutes;
    long long _storyContentType;
    SCLazy *_storiesDataAccess;
    SCLazy *_storiesDataProvider;
    SCFriendUnifiedProfileConfiguration *_configuration;
    SCExperimentManager *_experimentManager;
    NSString *_sessionId;
}

+ (id)announcerIdentifier;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(readonly, nonatomic) SCFriendUnifiedProfileConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) SCLazy *storiesDataProvider; // @synthesize storiesDataProvider=_storiesDataProvider;
@property(readonly, nonatomic) SCLazy *storiesDataAccess; // @synthesize storiesDataAccess=_storiesDataAccess;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_dispatchStoryNotificationsOptInStatusUpdate;
- (void)_updateStoryNotificationsOptInStatus:(_Bool)arg1;
- (void)_updateStoryNotificationsOptInStatusAndShowPromptIfNecessary:(_Bool)arg1;
- (void)_fetchStoryNotificationsOptInStatus;
- (void)_performUpdateCognacNotificationStatus:(long long)arg1;
- (void)_updateCognacNotificationStatus:(long long)arg1;
- (void)_fetchCognacNotificationStatus;
- (void)updateCognacNotificationStatus:(_Bool)arg1 isPending:(_Bool)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)_dispatchMessageRetentionInMinutesUpdate;
- (void)_setMessageRetentionInMinutes:(unsigned long long)arg1;
- (void)_fetchMessageRetentionInMinutes;
- (void)_dispatchMuteStoryUpdate;
- (void)_updateMuteStoryAndNotificationsStatesWithUserId:(id)arg1;
- (void)_setIsUpdatingMuteStory:(_Bool)arg1;
- (void)_dispatchFriendsFeedItemUpdate;
- (void)_updateFriendsFeedItem:(id)arg1;
- (void)_updateFriendsFeedItemBasedOnFriendsFeedData;
- (void)_dispatchAddFriendStatusUpdate;
- (void)_dispatchIgnoreFriendSuggestion;
- (void)_dispatchIgnoreFriendRequest;
- (void)_dispatchBlockFriend;
- (void)_dispatchRemoveFriend;
- (void)_dispatchStoryThumbnailNetworkImageUpdate;
- (void)_updateStoryThumbnailNetworkImage:(id)arg1 hasUnviewedStories:(_Bool)arg2 storyContentType:(long long)arg3;
- (void)_udpateStoryThumbnailNetworkImage;
- (void)_dispatchMessageNotificationStatusUpdate;
- (void)_updateMessageNotificationStatus:(_Bool)arg1;
- (void)reloadMessageNotificationStatus;
- (void)_dispatchUserScoreUpdate;
- (void)_updateUserScore:(id)arg1;
- (void)_updateUserScore;
- (void)_dispatchSnapchatterUpdate;
- (void)_setSnapchatter:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateSnapchatterWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)updateMessageRetentionInMinutes:(unsigned long long)arg1;
- (void)updateMessageNotificationStatus:(_Bool)arg1;
- (long long)storyContentType;
- (id)snapchatterDataFetcher;
- (_Bool)isPinned;
- (long long)nonFriendAddSourceType;
- (id)messageRetentionInMinutes;
- (id)friendsFeedItem;
- (long long)addFriendStatus;
- (long long)storyNotificationsOptInStatus;
- (long long)cognacNotificationStatus;
- (long long)muteStoryStatus;
- (id)storyThumbnailNetworkImage;
- (_Bool)hasUnviewedStories;
- (_Bool)notificationStatus;
- (id)userScore;
- (id)userId;
- (_Bool)isArroyoConversation;
- (id)conversationId;
- (id)userSnapchatter;
- (id)tempSnapchatter;
- (id)snapchatter;
- (id)userSession;
- (void)dealloc;
- (id)initWithSnapchatter:(id)arg1 conversationId:(id)arg2 snapchattersDataFetcher:(id)arg3 snapchattersDataTracker:(id)arg4 snapchatterPublicInfoFetcher:(id)arg5 scoreInfoFetcher:(id)arg6 userInfoProvider:(id)arg7 userSession:(id)arg8 friendsFeedDataAccess:(id)arg9 storiesDataAccess:(id)arg10 storiesDataProvider:(id)arg11 arroyoConversationIdsManager:(id)arg12 experimentManager:(id)arg13 friendProfileConfiguration:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

