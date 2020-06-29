//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileSectionCreating-Protocol.h"

@class NSString, SCCharmsBlizzardLogger, SCCharmsDataCoordinator, SCCharmsViewingDataCoordinator, SCEventListenerAnnouncer, SCFriendProfilePageActionHandler, SCFriendUnifiedProfileDataSource, SCFriendUnifiedProfilePromptSectionDataCoordinator, SCLazy, SCObservable, SCProfileChatAttachmentDataStore, SCProfileChatMediaDataSource, SCUnifiedProfileViewLayoutConfiguration, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCArroyoConversationIdsManaging, SCGroupManager, SCImageDownloading, SCLegacyItemDownloading;

@interface SCFriendUnifiedProfileSectionCreator : NSObject <SCTraceEnabled, SCUnifiedProfileSectionCreating>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCFriendProfilePageActionHandler *_actionHandler;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoFetcher;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchatterPublicInfoFetcher;
    SCLazy *_userInfoProvider;
    SCObservable *_addFriendsDisplayDateObservable;
    UIViewController *_presentingViewController;
    SCProfileChatMediaDataSource *_profileChatMediaDataSource;
    SCProfileChatAttachmentDataStore *_chatAttachmentDataStore;
    SCCharmsDataCoordinator *_charmsDataCoordinator;
    SCCharmsViewingDataCoordinator *_charmsViewingDataCoordinator;
    SCFriendUnifiedProfilePromptSectionDataCoordinator *_promptSectionDataCoordinator;
    id <SCGroupManager> _groupManager;
    SCLazy *_profileSavedAttachmentsFetcher;
    SCLazy *_profileChatMessagesUpdateTracker;
    id <SCArroyoConversationIdsManaging> _arroyoConversationIdsManager;
    SCCharmsBlizzardLogger *_charmsBlizzardLogger;
    SCLazy *_sagaDataCoordinator;
    SCUnifiedProfileViewLayoutConfiguration *_layoutConfiguration;
    SCEventListenerAnnouncer *_lifecycleAnnouncer;
}

@property(nonatomic) __weak SCEventListenerAnnouncer *lifecycleAnnouncer; // @synthesize lifecycleAnnouncer=_lifecycleAnnouncer;
@property(nonatomic) __weak SCUnifiedProfileViewLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
- (void).cxx_destruct;
- (id)_snapProSection;
- (id)_privacyAffirmationSection;
- (id)_charmsSection;
- (id)_sharedGroupsSection;
- (id)_chatAttachmentSection;
- (id)_savedInChatSection;
- (id)_mapSection;
- (id)_friendshipFlashbacksSection;
- (id)_promptSection;
- (id)_suggestedForYouSection;
- (id)_addFriendSection;
- (id)_identitySection;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithDataSource:(id)arg1 imageDownloader:(id)arg2 userSession:(id)arg3 navigationDelegate:(id)arg4 snapchattersDataFetcher:(id)arg5 snapchattersDataTracker:(id)arg6 snapchatterPublicInfoFetcher:(id)arg7 userInfoProvider:(id)arg8 labelInfoFetcher:(id)arg9 addFriendsDisplayDateObservable:(id)arg10 presentingViewController:(id)arg11 actionHandler:(id)arg12 profileChatMediaDataSource:(id)arg13 chatAttachmentDataStore:(id)arg14 charmsDataCoordinator:(id)arg15 charmsViewingDataCoordinator:(id)arg16 promptSectionDataCoordinator:(id)arg17 groupManager:(id)arg18 profileSavedAttachmentsFetcher:(id)arg19 profileChatMessagesUpdateTracker:(id)arg20 arroyoConversationIdsManager:(id)arg21 charmsBlizzardLogger:(id)arg22 sagaDataCoordinator:(id)arg23;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

