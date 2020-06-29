//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPRemoteSettingsProvider-Protocol.h"

@class NSString, SCPreferences, SCQueuePerformer;
@protocol SCBloopsRemoteSettingsProviderChangesDelegate;

@interface SCBloopsRemoteSettingsProvider : NSObject <SPRemoteSettingsProvider>
{
    NSString *_bloopsApiVersion;
    SCQueuePerformer *_performer;
    SCPreferences *_userPreferences;
    id <SCBloopsRemoteSettingsProviderChangesDelegate> _changesDelegate;
}

@property(nonatomic) __weak id <SCBloopsRemoteSettingsProviderChangesDelegate> changesDelegate; // @synthesize changesDelegate=_changesDelegate;
- (void).cxx_destruct;
- (id)_currentRemoteSettingsModel;
- (void)obtainConfigPaths:(CDUnknownBlockType)arg1;
- (void)obtainAIModelsPath:(CDUnknownBlockType)arg1;
- (void)getSettingsFromCache:(CDUnknownBlockType)arg1;
- (void)updateSettings:(id)arg1;
- (void)updateConfigUrl:(id)arg1 searchResources:(id)arg2;
- (id)initWithBloopsApiVersion:(id)arg1 userPreferences:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
