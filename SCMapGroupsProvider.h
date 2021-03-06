//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCMapPeopleGroupsProvider-Protocol.h"

@class NSString, SCExperimentManager, SCLazy, SCMapPeopleGroupsListenerAnnouncer;

@interface SCMapGroupsProvider : NSObject <SCGroupsDataRequestListener, SCMapPeopleGroupsProvider>
{
    NSString *_userId;
    NSString *_username;
    SCLazy *_groupsDataFetcher;
    SCLazy *_groupsDataTracker;
    SCMapPeopleGroupsListenerAnnouncer *_announcer;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (id)_mostRecentGroupContainingAllPeople:(id)arg1;
- (id)orderedPeopleForGroupId:(id)arg1;
- (_Bool)canCreateGroupChatForPeople:(id)arg1;
- (id)groupIdForGroupChatContainingPeople:(id)arg1 ignoreLocal:(_Bool)arg2;
- (id)displayNameForExistingGroupChatContainingPeople:(id)arg1;
- (id)groupsListenerAnnouncer;
- (id)initWithCurrentUserId:(id)arg1 currentUsername:(id)arg2 groupsDataFetcher:(id)arg3 groupsDataTracker:(id)arg4 experimentManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

