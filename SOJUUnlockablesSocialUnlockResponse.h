//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesSocialUnlockResponse-Protocol.h"

@class NSString, SOJUGeofilterResponse;

@interface SOJUUnlockablesSocialUnlockResponse : SCSojuMessage <SOJUUnlockablesSocialUnlockResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithStatus:(id)arg1 message:(id)arg2 unlockable:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) NSString *status; // @dynamic status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUGeofilterResponse *unlockable; // @dynamic unlockable;

@end

