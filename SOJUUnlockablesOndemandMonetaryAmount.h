//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandMonetaryAmount-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandMonetaryAmount : SCSojuMessage <SOJUUnlockablesOndemandMonetaryAmount>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithValue:(id)arg1 currency:(id)arg2 conversionRate:(id)arg3 conversionRateTimestamp:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSString *conversionRate; // @dynamic conversionRate;
@property(readonly, nonatomic) NSNumber *conversionRateTimestamp; // @dynamic conversionRateTimestamp;
@property(readonly, nonatomic) NSString *currency; // @dynamic currency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *value; // @dynamic value;

@end

