//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesBaseAnnouncer.h"

#import "SCSpectaclesPairingUserEventListener-Protocol.h"

@interface SCSpectaclesPairingUserEventListenerAnnouncer : SCSpectaclesBaseAnnouncer <SCSpectaclesPairingUserEventListener>
{
}

- (void)userCancelledPairing:(unsigned long long)arg1;
- (void)userTappedSupportFromInactiveAlert;
- (void)userTappedKeepPairingFromInactiveAlert;
- (void)userViewedInactiveAlert;
- (void)userTappedNeedHelp;
- (void)userClosedTOS;
- (void)userOpenedTOS;
- (void)userRequestsPairingRetry;
- (void)userSetLocationPermissions:(_Bool)arg1;
- (void)userNamedDevice:(id)arg1 changedFromDefault:(_Bool)arg2;

@end

