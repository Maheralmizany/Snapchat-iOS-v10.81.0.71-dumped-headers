//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNativeAdAssetsDataSource-Protocol.h"

@class GADNativeAdAttribution, GADNativeAdImage, NSArray, NSDecimalNumber, NSDictionary, NSString, NSURL, UIView;
@protocol GADMediaContentDisplaying;

@interface GADNativeAdAssets : NSObject <GADNativeAdAssetsDataSource>
{
    NSDictionary *_assets;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *muteThisAdReasons;
@property(readonly, copy, nonatomic) NSURL *muteThisAdDefaultMuteURL;
@property(readonly, copy, nonatomic) NSDictionary *customAssets;
@property(readonly, copy, nonatomic) NSDictionary *extraAssets;
@property(readonly, nonatomic) id <GADMediaContentDisplaying> instreamMediaContent;
@property(readonly, nonatomic) id <GADMediaContentDisplaying> mediaContent;
@property(readonly, nonatomic) GADNativeAdAttribution *attribution;
@property(readonly, nonatomic) UIView *adChoicesView;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating;
@property(readonly, copy, nonatomic) NSArray *images;
@property(readonly, nonatomic) GADNativeAdImage *logo;
@property(readonly, nonatomic) GADNativeAdImage *icon;
@property(readonly, copy, nonatomic) NSString *advertiser;
@property(readonly, copy, nonatomic) NSString *price;
@property(readonly, copy, nonatomic) NSString *store;
@property(readonly, copy, nonatomic) NSString *body;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *headline;
- (id)init;
- (id)initWithAssets:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

