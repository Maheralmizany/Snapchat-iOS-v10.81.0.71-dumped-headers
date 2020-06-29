//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdPresenting-Protocol.h"
#import "GADMRewardBasedVideoAdNetworkConnector-Protocol.h"
#import "GADRewardedConnector-Protocol.h"

@class GADInterstitialAd, GADMediatedIntermission, GADMediationRewardBasedVideoAdRenderer, NSDictionary, NSString;
@protocol GADMRewardBasedVideoAdNetworkAdapter;

@interface GADMRewardBasedVideoAdNetworkConnector : NSObject <GADMRewardBasedVideoAdNetworkConnector, GADAdPresenting, GADRewardedConnector>
{
    id <GADMRewardBasedVideoAdNetworkAdapter> _adapter;
    NSString *_adapterClassName;
    GADInterstitialAd *_rewardedAd;
    GADMediatedIntermission *_intermission;
    // Error parsing type: AB, name: _adapterSetUp
    GADMediationRewardBasedVideoAdRenderer *_renderer;
    NSDictionary *_adConfiguration;
}

@property(copy, nonatomic) NSDictionary *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(nonatomic) __weak GADMediationRewardBasedVideoAdRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (id)userBirthday;
- (long long)userGender;
- (_Bool)testMode;
- (id)userKeywords;
- (id)userLocationDescription;
- (double)userLocationAccuracyInMeters;
- (double)userLongitude;
- (double)userLatitude;
- (id)userLocation;
- (_Bool)userHasLocation;
- (id)underAgeOfConsent;
- (id)maxAdContentRating;
- (id)childDirectedTreatment;
- (id)networkExtras;
- (id)credentials;
- (id)publisherId;
- (void)presentFromViewController:(id)arg1;
- (_Bool)canPresentFromViewController:(id)arg1 error:(id *)arg2;
- (void)adapterDidGetAdClick:(id)arg1;
- (void)adapter:(id)arg1 didRewardUserWithReward:(id)arg2;
- (void)adapterWillLeaveApplication:(id)arg1;
- (void)adapterDidCloseRewardBasedVideoAd:(id)arg1;
- (void)adapterDidCompletePlayingRewardBasedVideoAd:(id)arg1;
- (void)adapterDidStartPlayingRewardBasedVideoAd:(id)arg1;
- (void)adapterDidOpenRewardBasedVideoAd:(id)arg1;
- (void)adapter:(id)arg1 didFailToLoadRewardBasedVideoAdwithError:(id)arg2;
- (void)adapterDidReceiveRewardBasedVideoAd:(id)arg1;
- (void)adapter:(id)arg1 didFailToSetUpRewardBasedVideoAdWithError:(id)arg2;
- (void)adapterDidSetUpRewardBasedVideoAd:(id)arg1;
- (void)stopBeingDelegate;
@property(readonly, copy, nonatomic) NSString *adapterName;
- (void)requestRewardBasedVideoAd;
- (void)setRewardBasedVideoAd:(id)arg1;
- (void)setUpAdapter;
- (id)initWithAdNetworkConfiguration:(id)arg1 adapterClassName:(id)arg2 renderer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
