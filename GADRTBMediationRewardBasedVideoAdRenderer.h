//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdPresenting-Protocol.h"
#import "GADAdRendering-Protocol.h"
#import "GADMediationRewardedAdEventDelegate-Protocol.h"

@class GADInterstitialAd, GADMediatedIntermission, GADMediationRewardedAdConfiguration, NSDictionary, NSString;
@protocol GADMediationAdapter, GADMediationRewardedAd;

@interface GADRTBMediationRewardBasedVideoAdRenderer : NSObject <GADAdPresenting, GADMediationRewardedAdEventDelegate, GADAdRendering>
{
    id <GADMediationAdapter> _loadingAdapter;
    GADInterstitialAd *_rewardedAd;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _clickEventReceived
    id <GADMediationRewardedAd> _mediatedAd;
    GADMediationRewardedAdConfiguration *_mediatedConfiguration;
    NSDictionary *_rewardGrantedUserInfo;
    GADMediatedIntermission *_intermission;
}

- (void).cxx_destruct;
- (void)didFailToPresentWithError:(id)arg1;
- (void)didRewardUserWithReward:(id)arg1;
- (void)didEndVideo;
- (void)didStartVideo;
- (void)didDismissFullScreenView;
- (void)willDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)reportClick;
- (void)reportImpression;
- (void)presentFromViewController:(id)arg1;
- (_Bool)canPresentFromViewController:(id)arg1 error:(id *)arg2;
- (id)adEventDelegateForAdapter:(id)arg1 mediatedAd:(id)arg2 adConfiguration:(struct NSDictionary *)arg3 transaction:(id)arg4 renderCompletionHandler:(CDUnknownBlockType)arg5;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

