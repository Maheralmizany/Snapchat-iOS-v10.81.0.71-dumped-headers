//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJULoginResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCofResponse, SOJUConversationsResponseInfo, SOJUDiscoverResponse, SOJUFeatureSettingsResponse, SOJUFeedDeltaSyncToken, SOJUFeedResponseInfo, SOJUFriendsResponse, SOJUIdentityIdentityCheckResponse, SOJUIdentityVerificationNeeded, SOJUMessagingGatewayInfo, SOJUSecurityInAppWarningResponse, SOJUSecuritySecurityInfoResponse, SOJUServerInfoResponse, SOJUSponsoredSlug, SOJUStoriesResponse, SOJUStudySettings, SOJUSupportToolsSupportToolsResponse, SOJUUpdatesResponse, SOJUUserSessionInit;

@interface SOJULoginResponse : SCSojuMessage <SOJULoginResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithServerInfo:(id)arg1 messagingGatewayInfo:(id)arg2 updatesResponse:(id)arg3 friendsResponse:(id)arg4 storiesResponse:(id)arg5 feedResponseInfo:(id)arg6 mischiefResponse:(id)arg7 conversationsResponse:(id)arg8 conversationsResponseInfo:(id)arg9 discover:(id)arg10 identityCheckResponse:(id)arg11 sponsored:(id)arg12 supportToolsResponseDeprecated:(id)arg13 secInfo:(id)arg14 backgroundFetchSecretKey:(id)arg15 feedDeltaSyncToken:(id)arg16 studySettings:(id)arg17 featureSettings:(id)arg18 forceFullSyncFeedItems:(id)arg19 errorField:(id)arg20 message:(id)arg21 status:(id)arg22 dtoken1i:(id)arg23 dtoken1v:(id)arg24 twoFaNeeded:(id)arg25 username:(id)arg26 messageFormat:(id)arg27 phoneNumber:(id)arg28 preAuthToken:(id)arg29 recoveryCodeUsed:(id)arg30 isSmsTwoFaEnabled:(id)arg31 isOtpTwoFaEnabled:(id)arg32 verificationNeeded:(id)arg33 latestOutAlpha:(id)arg34 latestBackupOutBeta:(id)arg35 reactivationStatus:(id)arg36 powNumofzeros:(id)arg37 quickLoginResponse:(id)arg38 iwek:(id)arg39 forcePhoneVerify:(id)arg40 preferredVerificationMethod:(id)arg41 hashedOutBeta:(id)arg42 odlvRequired:(id)arg43 odlvPreAuthToken:(id)arg44 obfuscatedPhone:(id)arg45 obfuscatedEmail:(id)arg46 cofResponse:(id)arg47 safetynetNonce:(id)arg48 snapSessionRefreshToken:(id)arg49 snapAccessTokens:(id)arg50 inAppWarning:(id)arg51 userSessionInit:(id)arg52;

// Remaining properties
@property(readonly, nonatomic) NSString *backgroundFetchSecretKey; // @dynamic backgroundFetchSecretKey;
@property(readonly, nonatomic) SOJUCofResponse *cofResponse; // @dynamic cofResponse;
@property(readonly, nonatomic) NSArray *conversationsResponse; // @dynamic conversationsResponse;
@property(readonly, nonatomic) SOJUConversationsResponseInfo *conversationsResponseInfo; // @dynamic conversationsResponseInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUDiscoverResponse *discover; // @dynamic discover;
@property(readonly, nonatomic) NSString *dtoken1i; // @dynamic dtoken1i;
@property(readonly, nonatomic) NSString *dtoken1v; // @dynamic dtoken1v;
@property(readonly, nonatomic) NSString *errorField; // @dynamic errorField;
@property(readonly, nonatomic) SOJUFeatureSettingsResponse *featureSettings; // @dynamic featureSettings;
@property(readonly, nonatomic) SOJUFeedDeltaSyncToken *feedDeltaSyncToken; // @dynamic feedDeltaSyncToken;
@property(readonly, nonatomic) SOJUFeedResponseInfo *feedResponseInfo; // @dynamic feedResponseInfo;
@property(readonly, nonatomic) NSNumber *forceFullSyncFeedItems; // @dynamic forceFullSyncFeedItems;
@property(readonly, nonatomic) NSNumber *forcePhoneVerify; // @dynamic forcePhoneVerify;
@property(readonly, nonatomic) SOJUFriendsResponse *friendsResponse; // @dynamic friendsResponse;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *hashedOutBeta; // @dynamic hashedOutBeta;
@property(readonly, nonatomic) SOJUIdentityIdentityCheckResponse *identityCheckResponse; // @dynamic identityCheckResponse;
@property(readonly, nonatomic) SOJUSecurityInAppWarningResponse *inAppWarning; // @dynamic inAppWarning;
@property(readonly, nonatomic) NSNumber *isOtpTwoFaEnabled; // @dynamic isOtpTwoFaEnabled;
@property(readonly, nonatomic) NSNumber *isSmsTwoFaEnabled; // @dynamic isSmsTwoFaEnabled;
@property(readonly, nonatomic) NSString *iwek; // @dynamic iwek;
@property(readonly, nonatomic) NSString *latestBackupOutBeta; // @dynamic latestBackupOutBeta;
@property(readonly, nonatomic) NSString *latestOutAlpha; // @dynamic latestOutAlpha;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) NSString *messageFormat; // @dynamic messageFormat;
@property(readonly, nonatomic) SOJUMessagingGatewayInfo *messagingGatewayInfo; // @dynamic messagingGatewayInfo;
@property(readonly, nonatomic) NSArray *mischiefResponse; // @dynamic mischiefResponse;
@property(readonly, nonatomic) NSString *obfuscatedEmail; // @dynamic obfuscatedEmail;
@property(readonly, nonatomic) NSString *obfuscatedPhone; // @dynamic obfuscatedPhone;
@property(readonly, nonatomic) NSString *odlvPreAuthToken; // @dynamic odlvPreAuthToken;
@property(readonly, nonatomic) NSNumber *odlvRequired; // @dynamic odlvRequired;
@property(readonly, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(readonly, nonatomic) NSNumber *powNumofzeros; // @dynamic powNumofzeros;
@property(readonly, nonatomic) NSString *preAuthToken; // @dynamic preAuthToken;
@property(readonly, nonatomic) NSString *preferredVerificationMethod; // @dynamic preferredVerificationMethod;
@property(readonly, nonatomic) NSNumber *quickLoginResponse; // @dynamic quickLoginResponse;
@property(readonly, nonatomic) NSString *reactivationStatus; // @dynamic reactivationStatus;
@property(readonly, nonatomic) NSNumber *recoveryCodeUsed; // @dynamic recoveryCodeUsed;
@property(readonly, nonatomic) NSString *safetynetNonce; // @dynamic safetynetNonce;
@property(readonly, nonatomic) SOJUSecuritySecurityInfoResponse *secInfo; // @dynamic secInfo;
@property(readonly, nonatomic) SOJUServerInfoResponse *serverInfo; // @dynamic serverInfo;
@property(readonly, nonatomic) NSArray *snapAccessTokens; // @dynamic snapAccessTokens;
@property(readonly, nonatomic) NSString *snapSessionRefreshToken; // @dynamic snapSessionRefreshToken;
@property(readonly, nonatomic) SOJUSponsoredSlug *sponsored; // @dynamic sponsored;
@property(readonly, nonatomic) NSNumber *status; // @dynamic status;
@property(readonly, nonatomic) SOJUStoriesResponse *storiesResponse; // @dynamic storiesResponse;
@property(readonly, nonatomic) SOJUStudySettings *studySettings; // @dynamic studySettings;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUSupportToolsSupportToolsResponse *supportToolsResponseDeprecated; // @dynamic supportToolsResponseDeprecated;
@property(readonly, nonatomic) NSNumber *twoFaNeeded; // @dynamic twoFaNeeded;
@property(readonly, nonatomic) SOJUUpdatesResponse *updatesResponse; // @dynamic updatesResponse;
@property(readonly, nonatomic) SOJUUserSessionInit *userSessionInit; // @dynamic userSessionInit;
@property(readonly, nonatomic) NSString *username; // @dynamic username;
@property(readonly, nonatomic) SOJUIdentityVerificationNeeded *verificationNeeded; // @dynamic verificationNeeded;

@end
