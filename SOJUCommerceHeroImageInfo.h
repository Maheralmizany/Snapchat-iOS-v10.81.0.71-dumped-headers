//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUCommerceHeroImageInfo-Protocol.h"

@class NSString;

@interface SOJUCommerceHeroImageInfo : SCSojuMessage <SOJUCommerceHeroImageInfo>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUrl:(id)arg1 type:(id)arg2 productDeeplink:(id)arg3 categoryId:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *productDeeplink; // @dynamic productDeeplink;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) NSString *url; // @dynamic url;

@end

