//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCServerConfigListenerAnnouncer;
@protocol SCServerConfigResponse;

@interface SCServerConfig : NSObject <SCTraceEnabled>
{
    _Bool _shouldReloadApp;
    _Bool _isFetchInProgress;
    id <SCServerConfigResponse> _configs;
    SCServerConfigListenerAnnouncer *_announcer;
}

+ (id)path;
+ (void)setFetchServerConfigProvider:(id)arg1;
+ (id)fetchServerConfigProvider;
+ (id)shared;
@property(retain) SCServerConfigListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property _Bool isFetchInProgress; // @synthesize isFetchInProgress=_isFetchInProgress;
@property(retain) id <SCServerConfigResponse> configs; // @synthesize configs=_configs;
@property _Bool shouldReloadApp; // @synthesize shouldReloadApp=_shouldReloadApp;
- (void).cxx_destruct;
- (id)getFullNameFromNamespace:(id)arg1 configName:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clear;
- (_Bool)saveState;
- (id)floatValueForConfig:(id)arg1 withNamespace:(id)arg2;
- (id)booleanValueForConfig:(id)arg1 withNamespace:(id)arg2;
- (id)integerValueForConfig:(id)arg1 withNamespace:(id)arg2;
- (id)stringValueForConfig:(id)arg1 withNamespace:(id)arg2;
- (double)floatValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(double)arg3;
- (_Bool)booleanValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(_Bool)arg3;
- (long long)integerValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(long long)arg3;
- (id)stringListValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(id)arg3;
- (id)stringValueForConfig:(id)arg1 withNamespace:(id)arg2 default:(id)arg3;
- (_Bool)shouldUpdateReloadMarkerWithOldConfigs:(id)arg1 newConfigs:(id)arg2;
- (void)_updateWithConfigResponse:(id)arg1;
- (_Bool)_shouldThrottle;
- (void)fetchAndUpdateConfigs:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

