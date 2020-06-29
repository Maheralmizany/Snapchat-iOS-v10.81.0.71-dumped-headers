//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdReward, GADAdSource, GADInterstitialAd, GADObserverCollection, GADResponseInfo, GADServerSideVerificationOptions, NSDictionary, NSString;
@protocol GADRewardedAdDelegate, GADRewardedAdMetadataDelegate, OS_dispatch_queue;

@interface GADRewardedAd : NSObject
{
    GADInterstitialAd *_rewardedAd;
    GADAdSource *_adSource;
    _Bool _requestInProgress;
    GADObserverCollection *_intermissionObservers;
    GADObserverCollection *_rewardedObservers;
    _Bool _isAdPresenting;
    id <GADRewardedAdDelegate> _delegate;
    _Bool _hasBeenUsed;
    _Bool _rewardedAdDidPresentCalled;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSDictionary *_adMetadata;
    NSString *_adUnitID;
    GADAdReward *_reward;
    GADServerSideVerificationOptions *_serverSideVerificationOptions;
    id <GADRewardedAdMetadataDelegate> _adMetadataDelegate;
    CDUnknownBlockType _paidEventHandler;
}

@property(copy, nonatomic) CDUnknownBlockType paidEventHandler; // @synthesize paidEventHandler=_paidEventHandler;
@property(nonatomic) __weak id <GADRewardedAdMetadataDelegate> adMetadataDelegate; // @synthesize adMetadataDelegate=_adMetadataDelegate;
@property(copy, nonatomic) GADServerSideVerificationOptions *serverSideVerificationOptions; // @synthesize serverSideVerificationOptions=_serverSideVerificationOptions;
@property(readonly, nonatomic) GADAdReward *reward; // @synthesize reward=_reward;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;
- (_Bool)adSourceShouldLoadRequest:(id)arg1 error:(id *)arg2;
- (void)attachLifecycleEventObservers;
- (void)attachRewardedCallbackObservers;
- (void)setAdMetadata:(id)arg1;
@property(readonly, nonatomic) NSDictionary *adMetadata;
- (id)adSource;
- (void)setRewardedAd:(id)arg1;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (void)adPresentationDidFailWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSString *adNetworkClassName;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
- (void)presentFromRootViewController:(id)arg1 delegate:(id)arg2;
- (_Bool)canPresentFromRootViewController:(id)arg1 error:(id *)arg2;
- (void)presentFromRootViewController:(id)arg1 openHandler:(CDUnknownBlockType)arg2 closeHandler:(CDUnknownBlockType)arg3 rewardHandler:(CDUnknownBlockType)arg4;
- (void)loadWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAdUnitID:(id)arg1;

@end

