//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsCustomTextTooltipStateProvider-Protocol.h"

@class NSString, SCFeatureSettingsService;
@protocol SCBloopsAPI;

@interface SCBloopsCustomTextTooltipStateProviderImpl : NSObject <SCBloopsCustomTextTooltipStateProvider>
{
    id <SCBloopsAPI> _bloopsAPI;
    SCFeatureSettingsService *_featureSettingsService;
    _Bool _wasShown;
}

- (void).cxx_destruct;
- (unsigned long long)_showCounter;
- (void)finishedShowCounter;
- (void)incrementShowCounter;
- (_Bool)needToDisplay;
- (id)initWithBloopsAPI:(id)arg1 featureSettingsService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

