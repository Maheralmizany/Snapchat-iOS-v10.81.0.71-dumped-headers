//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworkConnectivityListener-Protocol.h"

@class NSString, SCNetworkConnectivityAnnouncer, SCSpectaclesSsidEventListenerAnnouncer, SCWeakTimer;
@protocol SCPerforming;

@interface SCSpectaclesSsidScanner : NSObject <SCNetworkConnectivityListener>
{
    NSString *_currentSsid;
    unsigned long long _pollingInterval;
    id <SCPerforming> _performer;
    SCWeakTimer *_updateTimer;
    SCSpectaclesSsidEventListenerAnnouncer *_announcer;
    SCNetworkConnectivityAnnouncer *_connectivityAnnouncer;
}

+ (id)shared;
@property(retain, nonatomic) SCNetworkConnectivityAnnouncer *connectivityAnnouncer; // @synthesize connectivityAnnouncer=_connectivityAnnouncer;
@property(retain, nonatomic) SCSpectaclesSsidEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) SCWeakTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(nonatomic) unsigned long long pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(copy) NSString *currentSsid; // @synthesize currentSsid=_currentSsid;
- (void).cxx_destruct;
- (void)_updateWifiSsid;
- (unsigned long long)wifiConnectionStatusForDisplayName:(id)arg1;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)forceUpdate;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

