//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInstreamAdView, GADInstreamNativeAd, GADMediaContent, GADMediaView, GADObserverCollection, GADResponseInfo;

@interface GADInstreamAd : NSObject
{
    GADInstreamNativeAd *_nativeAd;
    GADObserverCollection *_observers;
    _Bool _hasBeenShown;
    GADMediaContent *_mediaContent;
    CDUnknownBlockType _paidEventHandler;
    GADMediaView *_mediaView;
    GADInstreamAdView *_instreamAdView;
}

+ (void)loadAdWithAdTag:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadAdWithAdUnitID:(id)arg1 request:(id)arg2 mediaAspectRatio:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)loadAdWithAdUnitID:(id)arg1 request:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak GADInstreamAdView *instreamAdView; // @synthesize instreamAdView=_instreamAdView;
@property(readonly, nonatomic) _Bool hasBeenShown; // @synthesize hasBeenShown=_hasBeenShown;
@property(readonly, nonatomic) GADMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(copy, nonatomic) CDUnknownBlockType paidEventHandler; // @synthesize paidEventHandler=_paidEventHandler;
@property(readonly, nonatomic) GADMediaContent *mediaContent; // @synthesize mediaContent=_mediaContent;
- (void).cxx_destruct;
- (double)aspectRatio;
- (double)currentTime;
- (double)duration;
- (id)videoController;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
- (void)dealloc;
- (id)initWithInstreamNativeAd:(id)arg1;

@end

