//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityTrophyCase-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUIdentityTrophyCase : SCSojuMessage <SOJUIdentityTrophyCase>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithResponse:(id)arg1 score:(id)arg2 sentSnaps:(id)arg3 receivedSnaps:(id)arg4 metricCounters:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *metricCounters; // @dynamic metricCounters;
@property(readonly, nonatomic) NSNumber *receivedSnaps; // @dynamic receivedSnaps;
@property(readonly, nonatomic) NSArray *response; // @dynamic response;
@property(readonly, nonatomic) NSNumber *score; // @dynamic score;
@property(readonly, nonatomic) NSNumber *sentSnaps; // @dynamic sentSnaps;
@property(readonly) Class superclass;

@end
