//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class SCLensExplorerSearchServiceConfig;
@protocol SCCBlizzardLogging, SCCExperimentProviding, SCCLensActionHandling, SCComposerNetworkingClientProtocol, SCLensExplorerSearchActionHandler, SCLensExplorerSearchActiveUserInfoProviding;

@interface SCLensExplorerSearchContext : SCComposerMarshallableObject
{
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCCBlizzardLogging> _blizzardLoggger;
    id <SCLensExplorerSearchActiveUserInfoProviding> _activeUserInfoProvider;
    id <SCCExperimentProviding> _experimentProvider;
    id <SCCLensActionHandling> _lensActionHandler;
    id <SCLensExplorerSearchActionHandler> _actionHandler;
    SCLensExplorerSearchServiceConfig *_serviceConfig;
}

@property(retain, nonatomic) SCLensExplorerSearchServiceConfig *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(retain, nonatomic) id <SCLensExplorerSearchActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <SCCLensActionHandling> lensActionHandler; // @synthesize lensActionHandler=_lensActionHandler;
@property(retain, nonatomic) id <SCCExperimentProviding> experimentProvider; // @synthesize experimentProvider=_experimentProvider;
@property(retain, nonatomic) id <SCLensExplorerSearchActiveUserInfoProviding> activeUserInfoProvider; // @synthesize activeUserInfoProvider=_activeUserInfoProvider;
@property(retain, nonatomic) id <SCCBlizzardLogging> blizzardLoggger; // @synthesize blizzardLoggger=_blizzardLoggger;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient; // @synthesize networkingClient=_networkingClient;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithNetworkingClient:(id)arg1 blizzardLoggger:(id)arg2 activeUserInfoProvider:(id)arg3 experimentProvider:(id)arg4 lensActionHandler:(id)arg5 actionHandler:(id)arg6;
- (id)initWithNetworkingClient:(id)arg1 blizzardLoggger:(id)arg2 activeUserInfoProvider:(id)arg3 experimentProvider:(id)arg4 lensActionHandler:(id)arg5 actionHandler:(id)arg6 serviceConfig:(id)arg7;

@end

