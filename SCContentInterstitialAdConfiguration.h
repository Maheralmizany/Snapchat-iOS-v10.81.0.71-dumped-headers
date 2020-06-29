//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCContentInterstitialAdConfiguration : NSObject
{
    _Bool _enableContentInterstitialAd;
    long long _minStoriesFromSessionStart;
    long long _minStoriesBetweenAds;
    long long _minStoriesBeforeSessionEnd;
    long long _minSnapsBetweenAds;
    long long _minTimeFromSessionStartSeconds;
    long long _minTimeBetweenAdsSeconds;
}

@property(readonly, nonatomic) long long minTimeBetweenAdsSeconds; // @synthesize minTimeBetweenAdsSeconds=_minTimeBetweenAdsSeconds;
@property(readonly, nonatomic) long long minTimeFromSessionStartSeconds; // @synthesize minTimeFromSessionStartSeconds=_minTimeFromSessionStartSeconds;
@property(readonly, nonatomic) long long minSnapsBetweenAds; // @synthesize minSnapsBetweenAds=_minSnapsBetweenAds;
@property(readonly, nonatomic) long long minStoriesBeforeSessionEnd; // @synthesize minStoriesBeforeSessionEnd=_minStoriesBeforeSessionEnd;
@property(readonly, nonatomic) long long minStoriesBetweenAds; // @synthesize minStoriesBetweenAds=_minStoriesBetweenAds;
@property(readonly, nonatomic) long long minStoriesFromSessionStart; // @synthesize minStoriesFromSessionStart=_minStoriesFromSessionStart;
@property(readonly, nonatomic) _Bool enableContentInterstitialAd; // @synthesize enableContentInterstitialAd=_enableContentInterstitialAd;
- (id)initWithEnableContentInterstitialAd:(_Bool)arg1 minStoriesFromSessionStart:(long long)arg2 minStoriesBetweenAds:(long long)arg3 minStoriesBeforeSessionEnd:(long long)arg4 minSnapsBetweenAds:(long long)arg5 minTimeFromSessionStartSeconds:(long long)arg6 minTimeBetweenAdsSeconds:(long long)arg7;
- (id)initWithUserSession:(id)arg1;

@end

