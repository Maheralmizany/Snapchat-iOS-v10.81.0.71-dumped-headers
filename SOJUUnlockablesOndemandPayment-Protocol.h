//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSString, SOJUUnlockablesOndemandBillingCenter, SOJUUnlockablesOndemandMonetaryAmount;

@protocol SOJUUnlockablesOndemandPayment <SCSojuMessage>
@property(readonly, nonatomic) SOJUUnlockablesOndemandBillingCenter *billingCenter;
@property(readonly, nonatomic) NSArray *statusHistory;
@property(readonly, nonatomic) NSString *status;
@property(readonly, nonatomic) NSString *paymentMethodId;
@property(readonly, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *amount;
@end
