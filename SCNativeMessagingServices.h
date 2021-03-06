//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCNativeMessagingServices : NSObject
{
    SCLazy *_nativeSessionManager;
    SCLazy *_arroyoConversationIdsManager;
    SCLazy *_feedClearDataManager;
    SCLazy *_arroyoNotificationProcessor;
    SCLazy *_feedEntriesCoordinator;
    SCLazy *_profileSavedMediaFetcher;
    SCLazy *_profileSavedAttachmentsFetcher;
    SCLazy *_profileChatMessagesUpdateTracker;
    SCLazy *_profileChatMessagesByServerIdFetcher;
}

@property(readonly, nonatomic) SCLazy *profileChatMessagesByServerIdFetcher; // @synthesize profileChatMessagesByServerIdFetcher=_profileChatMessagesByServerIdFetcher;
@property(readonly, nonatomic) SCLazy *profileChatMessagesUpdateTracker; // @synthesize profileChatMessagesUpdateTracker=_profileChatMessagesUpdateTracker;
@property(readonly, nonatomic) SCLazy *profileSavedAttachmentsFetcher; // @synthesize profileSavedAttachmentsFetcher=_profileSavedAttachmentsFetcher;
@property(readonly, nonatomic) SCLazy *profileSavedMediaFetcher; // @synthesize profileSavedMediaFetcher=_profileSavedMediaFetcher;
@property(readonly, nonatomic) SCLazy *feedEntriesCoordinator; // @synthesize feedEntriesCoordinator=_feedEntriesCoordinator;
@property(readonly, nonatomic) SCLazy *arroyoNotificationProcessor; // @synthesize arroyoNotificationProcessor=_arroyoNotificationProcessor;
@property(readonly, nonatomic) SCLazy *feedClearDataManager; // @synthesize feedClearDataManager=_feedClearDataManager;
@property(readonly, nonatomic) SCLazy *arroyoConversationIdsManager; // @synthesize arroyoConversationIdsManager=_arroyoConversationIdsManager;
@property(readonly, nonatomic) SCLazy *nativeSessionManager; // @synthesize nativeSessionManager=_nativeSessionManager;
- (void).cxx_destruct;
- (id)initWithNativeSessionManager:(id)arg1 arroyoConversationIdsManager:(id)arg2 feedEntriesCoordinator:(id)arg3 feedClearDataManager:(id)arg4 notificationProcessor:(id)arg5 profileSavedMediaFetcher:(id)arg6 profileSavedAttachmentsFetcher:(id)arg7 profileChatMessagesUpdateTracker:(id)arg8 profileChatMessagesByServerIdFetcher:(id)arg9;

@end

