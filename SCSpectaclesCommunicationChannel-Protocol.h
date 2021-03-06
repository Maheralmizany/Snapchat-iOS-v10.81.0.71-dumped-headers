//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSNumber;
@protocol SCSpectaclesCommunicationChannelDelegate;

@protocol SCSpectaclesCommunicationChannel <NSObject>
@property(nonatomic) unsigned long long options;
@property(readonly, nonatomic) unsigned long long reachabilityStatus;
@property(readonly, nonatomic) _Bool isMonitoringReachability;
@property(readonly, nonatomic) _Bool isOpen;
@property(nonatomic) __weak id <SCSpectaclesCommunicationChannelDelegate> delegate;
- (void)stopMonitorReachability;
- (void)close;
- (void)writeData:(NSData *)arg1;
- (void)open;
- (void)monitorReachability;

@optional
@property(readonly, nonatomic) NSNumber *RSSI;
@end

