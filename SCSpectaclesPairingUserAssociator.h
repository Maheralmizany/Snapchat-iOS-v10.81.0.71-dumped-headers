//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesPairingResponseHandler-Protocol.h"

@class NSString, SCSpectaclesProfile;
@protocol SCSpectaclesPairingUserAssociatorDelegate;

@interface SCSpectaclesPairingUserAssociator : NSObject <SCSpectaclesPairingResponseHandler>
{
    SCSpectaclesProfile *_spectaclesProfile;
    id <SCSpectaclesPairingUserAssociatorDelegate> _delegate;
    _Bool _readyToAssociate;
    _Bool _startedAssociating;
    _Bool _requiresAuthToken;
}

- (void).cxx_destruct;
- (void)handleResponse:(id)arg1;
- (void)_sendAssociationMessageIfReady;
- (void)startAssociating;
- (id)initWithSpectaclesProfile:(id)arg1 requiresReadyMessage:(_Bool)arg2 requiresAuthToken:(_Bool)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
