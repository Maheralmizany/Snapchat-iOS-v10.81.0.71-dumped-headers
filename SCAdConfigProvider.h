//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCircumstanceEngine;

@interface SCAdConfigProvider : NSObject
{
    SCCircumstanceEngine *_circumstanceEngine;
}

- (void).cxx_destruct;
- (_Bool)_getBoolConfigWithKey:(id)arg1 tweakSetting:(unsigned long long)arg2 defaultValue:(_Bool)arg3;
- (_Bool)enableAdsForProductTypeInKillswitch:(unsigned long long)arg1;
@property(readonly, nonatomic) float maxDisposableWebviewProgress;
@property(readonly, nonatomic) _Bool enableCommercialsExtendedPlay;
@property(readonly, nonatomic) NSString *supportedDpaAdTypesList;
@property(readonly, nonatomic) NSString *supportedAdTypesList;
@property(readonly, nonatomic) double userStoryAdResponseTTLInMs;
- (id)initWithCircumstanceEngine:(id)arg1;

@end
