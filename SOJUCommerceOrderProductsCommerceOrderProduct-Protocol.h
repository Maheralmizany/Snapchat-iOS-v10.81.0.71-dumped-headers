//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOJUCommerceOrderProduct-Protocol.h"

@class NSString, SOJUCommercePrintingMetadata, SOJUCommerceVariantImages;

@protocol SOJUCommerceOrderProductsCommerceOrderProduct <SOJUCommerceOrderProduct>
@property(readonly, nonatomic) SOJUCommercePrintingMetadata *printingMetadata;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) SOJUCommerceVariantImages *imageList;
@property(readonly, nonatomic) NSString *productImageUrl;
@property(readonly, nonatomic) NSString *variantDescription;
@property(readonly, nonatomic) NSString *variantId;
@property(readonly, nonatomic) NSString *productId;
@property(readonly, nonatomic) NSString *storeId;
@property(readonly, nonatomic) NSString *platform;
@end
