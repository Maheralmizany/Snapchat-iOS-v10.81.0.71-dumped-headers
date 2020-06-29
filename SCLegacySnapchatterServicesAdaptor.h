//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyIncomingFriendsRepositoryDependencies-Protocol.h"
#import "SCSnapchatterUserInfoProvider-Protocol.h"
#import "SCViewedIncomingFriendsTracker-Protocol.h"

@class NSDate, NSNumber, NSString, SCBehaviorSubject, SCLazy, SCObservable, SCSnapchatter, SCUserInfoServices, SCUserSession, User;

@interface SCLegacySnapchatterServicesAdaptor : NSObject <SCSnapchatterUserInfoProvider, SCLegacyIncomingFriendsRepositoryDependencies, SCViewedIncomingFriendsTracker>
{
    SCLazy *_bitmojiAvatarProvider;
    SCLazy *_bitmojiSelfieProvider;
    SCLazy *_lazySnapProProfileIdProvider;
    SCUserSession *_userSession;
    SCUserInfoServices *_userInfoServices;
    User *_user;
    SCBehaviorSubject *_addedFriendsLastViewedTimestampSubject;
}

- (void).cxx_destruct;
- (void)_nextFriendsLastViewedTimestamp;
@property(readonly, nonatomic) long long suggestedFriendSyncVersion;
@property(readonly, nonatomic) NSString *phoneNumberCountryCode;
@property(readonly, nonatomic) NSDate *birthday;
@property(readonly, nonatomic) NSDate *snapKitPrivacyPolicyLastSeenDate;
- (_Bool)shouldSyncSuggestedFriends:(id)arg1;
@property(readonly, nonatomic) SCSnapchatter *userSnapchatter;
@property(readonly, nonatomic) _Bool isAspiringInfluencer;
@property(readonly, nonatomic) NSString *userId;
@property(readonly, nonatomic) long long snapPrivacy;
@property(readonly, nonatomic) NSNumber *addedFriendsTimestamp;
@property(readonly, nonatomic) _Bool searchableByPhoneNumber;
@property(readonly, nonatomic) _Bool isContactSyncEnabled;
@property(readonly, nonatomic) _Bool isNewOrHighRiskUser;
@property(readonly, nonatomic) _Bool isNewUser;
@property(readonly, nonatomic) _Bool shouldShowQuickAddCarousel;
@property(readonly, nonatomic) _Bool hasGrantedContactAccessAndPhoneVerified;
@property(readonly, nonatomic) CDUnknownBlockType unviewedIncomingFriendsProvider;
@property(readonly, nonatomic) NSString *unviewedIncomingFriendsChangedNotificationName;
- (void)markIncomingFriendsViewedWithTimestamp:(id)arg1;
@property(readonly, nonatomic) NSNumber *incomingFriendsLastViewedTimestamp;
@property(readonly, nonatomic) SCObservable *incomingFriendsLastViewedTimestampObservable;
- (id)initWithBitmojiAvatarProvider:(id)arg1 bitmojiSelfieProvider:(id)arg2 snapProProfileIdProvider:(id)arg3 userSession:(id)arg4 userInfoServices:(id)arg5 user:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

