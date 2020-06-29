//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServerConfigListener-Protocol.h"

@class NSString, SCABlizzardConfig, SCServerConfig;

@interface AMPServerConfigV2Repo : NSObject <SCServerConfigListener>
{
    SCServerConfig *_serverConfig;
    SCABlizzardConfig *_staticConfig;
    SCABlizzardConfig *_serverProvidedConfig;
    NSString *_serverProvidedConfigJSON;
}

@property(retain, nonatomic) NSString *serverProvidedConfigJSON; // @synthesize serverProvidedConfigJSON=_serverProvidedConfigJSON;
@property(retain, nonatomic) SCABlizzardConfig *serverProvidedConfig; // @synthesize serverProvidedConfig=_serverProvidedConfig;
@property(retain, nonatomic) SCABlizzardConfig *staticConfig; // @synthesize staticConfig=_staticConfig;
- (void).cxx_destruct;
- (void)_logConfigChangeEvent:(id)arg1 newVersion:(id)arg2;
- (void)_updateConfigAndLogConfigChangeEvent:(id)arg1;
- (void)serverConfigDidChange:(id)arg1;
- (void)updateClientConfig:(id)arg1;
- (id)getClientConfig;
- (void)_logServerConfigUpdateGrapheneMetric:(id)arg1;
- (id)initWithServerConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

