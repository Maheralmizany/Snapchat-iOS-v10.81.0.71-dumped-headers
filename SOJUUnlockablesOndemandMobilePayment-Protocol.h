//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount;

@protocol SOJUUnlockablesOndemandMobilePayment <SCSojuMessage>
@property(readonly, nonatomic) SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount *localizedMonetaryAmount;
@property(readonly, nonatomic) NSString *signature;
@property(readonly, nonatomic) NSString *receipt;
@property(readonly, nonatomic) NSNumber *isEligibleToRefund;
@property(readonly, nonatomic) NSNumber *isEligibleToPay;
@property(readonly, nonatomic) NSString *paymentUserAgent;
@property(readonly, nonatomic) NSString *productId;
@property(readonly, nonatomic) NSString *platform;
@end

