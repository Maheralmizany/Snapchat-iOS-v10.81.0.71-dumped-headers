//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandCalculationPricingRuleReference-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandMonetaryAmount;

@interface SOJUUnlockablesOndemandCalculationPricingRuleReference : SCSojuMessage <SOJUUnlockablesOndemandCalculationPricingRuleReference>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 priceContribution:(id)arg2 areaContribution:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSNumber *areaContribution; // @dynamic areaContribution;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *priceContribution; // @dynamic priceContribution;
@property(readonly) Class superclass;

@end

