//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnifiedProfileChatAttachmentSectionDataProvider.h"

#import "SCUpdateListener-Protocol.h"

@class NSString, SCFriendUnifiedProfileDataSource;

@interface SCFriendUnifiedProfileChatAttachmentSectionDataProvider : SCUnifiedProfileChatAttachmentSectionDataProvider <SCUpdateListener>
{
    SCFriendUnifiedProfileDataSource *_friendUnifiedProfileDataSource;
    _Bool _shouldShowSectionWhenNoChatAttachments;
}

- (void).cxx_destruct;
- (void)_updateShouldShowSectionWhenNoChatAttachments:(_Bool)arg1;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)senderSubtitleForSavedInfoAttachmentDataModel:(id)arg1;
- (_Bool)shouldShowSectionWhenNoChatAttachments;
- (id)initWithFriendUnifiedProfileDataSource:(id)arg1 userSession:(id)arg2 imageDownloader:(id)arg3 labelInfoFetcher:(id)arg4 snapchatterProvider:(id)arg5 chatAttachmentDataStore:(id)arg6 profileSavedAttachmentsFetcher:(id)arg7 profileChatMessagesUpdateTracker:(id)arg8 arroyoConversationIdsManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

