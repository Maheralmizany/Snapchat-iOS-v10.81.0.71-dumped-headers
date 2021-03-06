//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUScannableActionBarcodeOffer-Protocol.h"

@class NSNumber, NSString;

@interface SOJUScannableActionBarcodeOffer : SCSojuMessage <SOJUScannableActionBarcodeOffer>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithMerchantIcon:(id)arg1 productTitle:(id)arg2 productImageurl:(id)arg3 offerPriceLocalized:(id)arg4 viewOnUrl:(id)arg5 customerRating:(id)arg6 actionHint:(id)arg7;

// Remaining properties
@property(readonly, nonatomic) NSString *actionHint; // @dynamic actionHint;
@property(readonly, nonatomic) NSNumber *customerRating; // @dynamic customerRating;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *merchantIcon; // @dynamic merchantIcon;
@property(readonly, nonatomic) NSString *offerPriceLocalized; // @dynamic offerPriceLocalized;
@property(readonly, nonatomic) NSString *productImageurl; // @dynamic productImageurl;
@property(readonly, nonatomic) NSString *productTitle; // @dynamic productTitle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *viewOnUrl; // @dynamic viewOnUrl;

@end

