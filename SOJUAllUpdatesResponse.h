//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAllUpdatesResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUConversationsResponseInfo, SOJUDiscoverResponse, SOJUFeatureSettingsResponse, SOJUFeedDeltaSyncToken, SOJUFeedResponseInfo, SOJUFriendsResponse, SOJUIdentityIdentityCheckResponse, SOJUMessagingGatewayInfo, SOJUSecuritySecurityInfoResponse, SOJUServerInfoResponse, SOJUSponsoredSlug, SOJUStoriesResponse, SOJUStudySettings, SOJUSupportToolsSupportToolsResponse, SOJUUpdatesResponse;

@interface SOJUAllUpdatesResponse : SCSojuMessage <SOJUAllUpdatesResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithServerInfo:(id)arg1 messagingGatewayInfo:(id)arg2 updatesResponse:(id)arg3 friendsResponse:(id)arg4 storiesResponse:(id)arg5 feedResponseInfo:(id)arg6 mischiefResponse:(id)arg7 conversationsResponse:(id)arg8 conversationsResponseInfo:(id)arg9 discover:(id)arg10 identityCheckResponse:(id)arg11 sponsored:(id)arg12 supportToolsResponseDeprecated:(id)arg13 secInfo:(id)arg14 backgroundFetchSecretKey:(id)arg15 feedDeltaSyncToken:(id)arg16 studySettings:(id)arg17 featureSettings:(id)arg18 forceFullSyncFeedItems:(id)arg19;

// Remaining properties
@property(readonly, nonatomic) NSString *backgroundFetchSecretKey; // @dynamic backgroundFetchSecretKey;
@property(readonly, nonatomic) NSArray *conversationsResponse; // @dynamic conversationsResponse;
@property(readonly, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo; // @dynamic conversationsResponseInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUDiscoverResponse *discover; // @dynamic discover;
@property(readonly, nonatomic) SOJUFeatureSettingsResponse *featureSettings; // @dynamic featureSettings;
@property(readonly, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken; // @dynamic feedDeltaSyncToken;
@property(readonly, nonatomic) SOJUFeedResponseInfo *feedResponseInfo; // @dynamic feedResponseInfo;
@property(readonly, nonatomic) NSNumber *forceFullSyncFeedItems; // @dynamic forceFullSyncFeedItems;
@property(readonly, nonatomic) SOJUFriendsResponse *friendsResponse; // @dynamic friendsResponse;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUIdentityIdentityCheckResponse *identityCheckResponse; // @dynamic identityCheckResponse;
@property(readonly, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo; // @dynamic messagingGatewayInfo;
@property(readonly, nonatomic) NSArray *mischiefResponse; // @dynamic mischiefResponse;
@property(readonly, nonatomic) SOJUSecuritySecurityInfoResponse *secInfo; // @dynamic secInfo;
@property(readonly, nonatomic) SOJUServerInfoResponse *serverInfo; // @dynamic serverInfo;
@property(readonly, nonatomic) SOJUSponsoredSlug *sponsored; // @dynamic sponsored;
@property(readonly, nonatomic) SOJUStoriesResponse *storiesResponse; // @dynamic storiesResponse;
@property(readonly, nonatomic) SOJUStudySettings *studySettings; // @dynamic studySettings;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUSupportToolsSupportToolsResponse *supportToolsResponseDeprecated; // @dynamic supportToolsResponseDeprecated;
@property(readonly, nonatomic) SOJUUpdatesResponse *updatesResponse; // @dynamic updatesResponse;

@end
