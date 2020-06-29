//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCSpectaclesHomeWifiAP;
@protocol SCSpectaclesHomeWifiManagerEventListener;

@protocol SCSpectaclesHomeWifiManaging <NSObject>
- (void)removeListener:(id <SCSpectaclesHomeWifiManagerEventListener>)arg1;
- (void)addListener:(id <SCSpectaclesHomeWifiManagerEventListener>)arg1;
- (_Bool)currentFlowIsResharingCredentials;
- (_Bool)wifiAPNeedsCredentialsUpdate:(SCSpectaclesHomeWifiAP *)arg1;
- (_Bool)hasWifiNetworkRequiringCredentialsUpdate;
- (void)removeWifiNetwork:(NSString *)arg1;
- (void)cancelShareWifiCredentials;
- (void)startShareWifiCredentialsWithSSID:(NSString *)arg1 password:(NSString *)arg2;
- (void)startShareWifiCredentials;
- (NSArray *)wifiAPList;
- (NSString *)currentWifiSsid;
- (unsigned long long)state;
@end

