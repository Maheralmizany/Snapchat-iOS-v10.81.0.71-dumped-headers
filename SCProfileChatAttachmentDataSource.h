//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpdateAnnouncing-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCProfileArroyoChatAttachmentDataCoordinator, SCProfileChatAttachmentDataCoordinator, SCUpdateListenerAnnouncer;

@interface SCProfileChatAttachmentDataSource : NSObject <SCUpdateListener, SCUpdateAnnouncing>
{
    SCProfileChatAttachmentDataCoordinator *_legacyDataCoordinator;
    SCProfileArroyoChatAttachmentDataCoordinator *_arroyoDataCoordinator;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_dispatchSavedInChatCardsUpdate;
- (void)fetchMoreSavedInChatAttachmentDataModels;
- (_Bool)hasUnloadedContent;
- (id)chatAttachmentDataModels;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (id)initWithUserSession:(id)arg1 ownerID:(id)arg2 conversationId:(id)arg3 conversationType:(long long)arg4 chatAttachmentDataStore:(id)arg5 arroyoConversationIdsManager:(id)arg6 savedAttachmentMessagesFetcher:(id)arg7 chatMessagesUpdateTracker:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
