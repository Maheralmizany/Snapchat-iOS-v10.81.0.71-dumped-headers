//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensPushNotification-Protocol.h"

@class SCFeatureReference, SCLazy;

@interface SCFeatureLensPushNotificationImpl : SCFeature <SCFeatureLensPushNotification>
{
    SCFeatureReference *_lensCarouselFeatureRef;
    SCLazy *_lensUnlockActivation;
}

- (void).cxx_destruct;
- (void)_processNotificationWithLocalStorageForLensId:(id)arg1 deeplinkUrl:(id)arg2;
- (void)handleTryLensesPushNotification:(id)arg1;
- (id)initWithLensCarouselFeatureRef:(id)arg1 lensUnlockActivation:(id)arg2;

@end

