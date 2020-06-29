//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUPaymentsPaymentMethod-Protocol.h"

@class NSNumber, NSString, SOJUPaymentsCreditCard, SOJUPaymentsVaultedCreditAccount;

@interface SOJUPaymentsPaymentMethod : SCSojuMessage <SOJUPaymentsPaymentMethod>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 type:(id)arg2 isDefault:(id)arg3 creditCard:(id)arg4 vaultedCreditAccount:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) SOJUPaymentsCreditCard *creditCard; // @dynamic creditCard;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSNumber *isDefault; // @dynamic isDefault;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) SOJUPaymentsVaultedCreditAccount *vaultedCreditAccount; // @dynamic vaultedCreditAccount;

@end

