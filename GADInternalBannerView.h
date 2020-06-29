//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADEventContextSource-Protocol.h"

@class GADAdSource, GADBannerAd, GADEventContext, GADObserverCollection, GADRefreshTimer, GADResponseInfo, GADTargeting, GADVideoController, NSArray, NSObject, NSString, UIViewController;
@protocol GADAdSizeDelegate><GADAdSizeDelegatePreview, GADAppEventDelegate, GADBannerViewDelegate, GADInAppPurchaseDelegate, OS_dispatch_queue;

@interface GADInternalBannerView : UIView <GADEventContextSource>
{
    GADBannerAd *_bannerAd;
    GADVideoController *_videoController;
    GADAdSource *_adSource;
    _Bool _requestInProgress;
    struct GADAdSize _lastRequestedAdSize;
    GADObserverCollection *_adObservers;
    GADRefreshTimer *_refreshTimer;
    GADTargeting *_refreshTargeting;
    struct GADAdSize _adSize;
    _Bool _hasAdSize;
    NSArray *_adOptions;
    _Bool _intermissionInProgress;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADResponseInfo *_responseInfo;
    _Bool _autoloadEnabled;
    _Bool _hasAutoRefreshed;
    _Bool _enableManualImpressions;
    GADEventContext *_context;
    NSString *_adUnitID;
    UIViewController *_rootViewController;
    id <GADBannerViewDelegate> _delegate;
    id <GADAdSizeDelegate><GADAdSizeDelegatePreview> _adSizeDelegate;
    CDUnknownBlockType _paidEventHandler;
    id <GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
    UIView *_mediatedAdView;
    id <GADAppEventDelegate> _appEventDelegate;
    NSArray *_validAdSizes;
}

@property(copy, nonatomic) NSArray *validAdSizes; // @synthesize validAdSizes=_validAdSizes;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
@property(nonatomic) _Bool enableManualImpressions; // @synthesize enableManualImpressions=_enableManualImpressions;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
@property(readonly, nonatomic) GADBannerAd *bannerAd; // @synthesize bannerAd=_bannerAd;
@property(readonly, nonatomic) __weak UIView *mediatedAdView; // @synthesize mediatedAdView=_mediatedAdView;
@property(nonatomic) __weak id <GADInAppPurchaseDelegate> inAppPurchaseDelegate; // @synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate;
@property(readonly, nonatomic) _Bool hasAutoRefreshed; // @synthesize hasAutoRefreshed=_hasAutoRefreshed;
@property(nonatomic, getter=isAutoloadEnabled) _Bool autoloadEnabled; // @synthesize autoloadEnabled=_autoloadEnabled;
@property(copy, nonatomic) CDUnknownBlockType paidEventHandler; // @synthesize paidEventHandler=_paidEventHandler;
@property(nonatomic) __weak id <GADAdSizeDelegate><GADAdSizeDelegatePreview> adSizeDelegate; // @synthesize adSizeDelegate=_adSizeDelegate;
@property(nonatomic) __weak id <GADBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(readonly, nonatomic) GADEventContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)adSourceShouldLoadRequest:(id)arg1 error:(id *)arg2;
- (void)attachLifecycleEventObservers;
- (void)resize:(struct GADAdSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)intrinsicContentSizeDidChange:(struct CGSize)arg1;
- (void)attachContentSizeObservers;
- (void)refresh;
- (id)adSource;
- (void)setAdOptions:(id)arg1;
- (void)setBannerAd:(id)arg1;
- (void)adLoadCompletedWithError:(id)arg1;
- (void)callBackAdViewDidReceiveAd;
- (void)loadWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldOverrideInProgressRequest;
- (void)loadAd:(id)arg1 error:(id)arg2 responseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadAd:(id)arg1 responseInfo:(id)arg2;
- (void)loadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadRequest:(id)arg1;
- (void)updateTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct GADAdSize)adSizeForTargeting;
- (void)updateRefreshTimerWithResponseInfo:(id)arg1 ad:(id)arg2;
- (void)setResponseInfo:(id)arg1;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) struct GADAdSize adSize;
- (void)setValidAdSizesWithSizes:(struct GADAdSize *)arg1;
- (void)initializeAdSource;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdSize:(struct GADAdSize)arg1 origin:(struct CGPoint)arg2;
- (id)initWithAdSize:(struct GADAdSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adSize:(struct GADAdSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

