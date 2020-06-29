//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUCommerceProductInfo-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCommerceCustomBitmojiInfo, SOJUCommerceSnapCodeInfo, SOJUCommerceStoreInfo, SOJUCommerceUnlockableInfo, SOJUCommerceVariantImages;

@interface SOJUCommerceProductInfo : SCSojuMessage <SOJUCommerceProductInfo>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 descriptionHtml:(id)arg2 images:(id)arg3 variants:(id)arg4 vendor:(id)arg5 commercePartner:(id)arg6 storeId:(id)arg7 title:(id)arg8 productVariantCategories:(id)arg9 storeInfo:(id)arg10 imageList:(id)arg11 shouldUseWebviewDeprecated:(id)arg12 snapcodeUrl:(id)arg13 checkoutItemLimit:(id)arg14 unlockableInfo:(id)arg15 productScanCardInfo:(id)arg16 isPdpShareable:(id)arg17 type:(id)arg18 customBitmojiInfo:(id)arg19 imageDetailsList:(id)arg20 productUrl:(id)arg21;
- (_Bool)isAllSoldOut;
- (_Bool)isValidModel;

// Remaining properties
@property(readonly, nonatomic) NSNumber *checkoutItemLimit; // @dynamic checkoutItemLimit;
@property(readonly, nonatomic) NSString *commercePartner; // @dynamic commercePartner;
@property(readonly, nonatomic) SOJUCommerceCustomBitmojiInfo *customBitmojiInfo; // @dynamic customBitmojiInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *descriptionHtml; // @dynamic descriptionHtml;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSArray *imageDetailsList; // @dynamic imageDetailsList;
@property(readonly, nonatomic) SOJUCommerceVariantImages *imageList; // @dynamic imageList;
@property(readonly, nonatomic) NSArray *images; // @dynamic images;
@property(readonly, nonatomic) NSNumber *isPdpShareable; // @dynamic isPdpShareable;
@property(readonly, nonatomic) SOJUCommerceSnapCodeInfo *productScanCardInfo; // @dynamic productScanCardInfo;
@property(readonly, nonatomic) NSString *productUrl; // @dynamic productUrl;
@property(readonly, nonatomic) NSArray *productVariantCategories; // @dynamic productVariantCategories;
@property(readonly, nonatomic) NSNumber *shouldUseWebviewDeprecated; // @dynamic shouldUseWebviewDeprecated;
@property(readonly, nonatomic) NSString *snapcodeUrl; // @dynamic snapcodeUrl;
@property(readonly, nonatomic) NSString *storeId; // @dynamic storeId;
@property(readonly, nonatomic) SOJUCommerceStoreInfo *storeInfo; // @dynamic storeInfo;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) SOJUCommerceUnlockableInfo *unlockableInfo; // @dynamic unlockableInfo;
@property(readonly, nonatomic) NSArray *variants; // @dynamic variants;
@property(readonly, nonatomic) NSString *vendor; // @dynamic vendor;

@end
