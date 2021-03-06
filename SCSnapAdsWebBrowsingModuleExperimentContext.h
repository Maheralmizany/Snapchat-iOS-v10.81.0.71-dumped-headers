//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSnapAdsWebBrowsingModuleExperimentContext : SCExperimentContext
{
    _Bool _webModuleEnabledForCollectionAds;
    _Bool _webModuleEnabledForAutoFillAds;
    _Bool _webModuleAdsPrefetchingEnabled;
}

@property(nonatomic) _Bool webModuleAdsPrefetchingEnabled; // @synthesize webModuleAdsPrefetchingEnabled=_webModuleAdsPrefetchingEnabled;
@property(nonatomic) _Bool webModuleEnabledForAutoFillAds; // @synthesize webModuleEnabledForAutoFillAds=_webModuleEnabledForAutoFillAds;
@property(nonatomic) _Bool webModuleEnabledForCollectionAds; // @synthesize webModuleEnabledForCollectionAds=_webModuleEnabledForCollectionAds;
- (void)setupParameters;
- (id)experimentName;

@end

