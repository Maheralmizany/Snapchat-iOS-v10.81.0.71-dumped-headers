//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUDiscoverModerationAudience-Protocol.h"

@class NSNumber, NSString;

@interface SOJUDiscoverModerationAudience : SCSojuMessage <SOJUDiscoverModerationAudience>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithAnyoneCanView:(id)arg1 nobodyUnder18CanView:(id)arg2 nobodyCanView:(id)arg3 nobodyInSensitiveCountryCanView:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSNumber *anyoneCanView; // @dynamic anyoneCanView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *nobodyCanView; // @dynamic nobodyCanView;
@property(readonly, nonatomic) NSNumber *nobodyInSensitiveCountryCanView; // @dynamic nobodyInSensitiveCountryCanView;
@property(readonly, nonatomic) NSNumber *nobodyUnder18CanView; // @dynamic nobodyUnder18CanView;
@property(readonly) Class superclass;

@end
