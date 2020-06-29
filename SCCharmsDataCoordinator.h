//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationStoreListener-Protocol.h"
#import "SCDataCoordinating-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCCharmsBlizzardLogger, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCExperimentManager, SCLazy, SCQueuePerformer, SCSessionRequestManager;
@protocol SCChatMessageActionHandling, SCFriendmojiRegistry, SCGroupsDataTracking, SCSnapchattersDataFetching, SCSnapchattersDataTracking, SCUsernameToSnapchatterFetching;

@interface SCCharmsDataCoordinator : NSObject <SCSnapchattersDataRequestListener, SCChatConversationStoreListener, SCGroupsDataRequestListener, SCDataCoordinating>
{
    SCSessionRequestManager *_sessionRequestManager;
    SCExperimentManager *_experimentManager;
    SCLazy *_snapTokenProvider;
    SCDocObjectContext *_docObjectContext;
    NSString *_userID;
    NSString *_username;
    id <SCFriendmojiRegistry> _friendmojiRegistry;
    id <SCSnapchattersDataFetching> _snapchattersDataFetcher;
    id <SCSnapchattersDataTracking> _snapchattersDataTracker;
    id <SCGroupsDataTracking> _groupsDataTracker;
    id <SCUsernameToSnapchatterFetching> _usernameToSnapchatterFetcher;
    id <SCChatMessageActionHandling> _chatMessageActionHandler;
    SCLazy *_conversationIdResolver;
    SCCharmsBlizzardLogger *_charmsBlizzardLogger;
    SCQueuePerformer *_docObjectPerformer;
    SCQueuePerformer *_utilityPerformer;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (CDUnknownBlockType)_processingCompletionForDataRequest:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (void)conversationDidUpdate:(id)arg1;
- (void)diskLoadFinishedWithConversations:(id)arg1;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)fetchHiddenCharmsForOwner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_populateClientLocalCharms:(id)arg1 ownerIdentifier:(id)arg2 shouldDisplayStreakCounter:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchCharmsForOwner:(id)arg1 shouldDisplayStreakCounter:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSessionRequestManager:(id)arg1 experimentManager:(id)arg2 snapTokenProvider:(id)arg3 docObjectContext:(id)arg4 userID:(id)arg5 username:(id)arg6 friendmojiRegistry:(id)arg7 snapchattersDataFetcher:(id)arg8 snapchattersDataTracker:(id)arg9 groupsDataTracker:(id)arg10 usernameToSnapchatterFetcher:(id)arg11 chatMessageActionHandler:(id)arg12 conversationIdResolver:(id)arg13 charmsBlizzardLogger:(id)arg14;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
