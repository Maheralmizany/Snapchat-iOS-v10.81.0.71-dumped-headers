//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, SCFeatureSettingsService;
@protocol SCObserving;

@interface SCMapboxEvents : NSObject
{
    SCFeatureSettingsService *_featureSettingsService;
    NSHashTable *_onscreenMapboxViews;
    id <SCObserving> _featureSettingsObserver;
}

- (void).cxx_destruct;
- (void)mapboxViewVisibilityDidChange:(id)arg1;
- (void)_updateMetricsEnabled;
- (void)dealloc;
- (id)initWithFeatureSettingsService:(id)arg1;

@end

