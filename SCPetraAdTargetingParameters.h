//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCPetraAdTargetingParameters : NSObject <NSCopying, NSCoding>
{
    _Bool _enablePetraAdRequest;
    _Bool _enablePetraAppInstallAd;
    _Bool _enablePetraImageTopSnap;
    _Bool _enablePetraVideoTopSnap;
    _Bool _enablePetraPublisherAdRequest;
    _Bool _enablePetraContentInterstitialAdRequest;
}

@property(readonly, nonatomic) _Bool enablePetraContentInterstitialAdRequest; // @synthesize enablePetraContentInterstitialAdRequest=_enablePetraContentInterstitialAdRequest;
@property(readonly, nonatomic) _Bool enablePetraPublisherAdRequest; // @synthesize enablePetraPublisherAdRequest=_enablePetraPublisherAdRequest;
@property(readonly, nonatomic) _Bool enablePetraVideoTopSnap; // @synthesize enablePetraVideoTopSnap=_enablePetraVideoTopSnap;
@property(readonly, nonatomic) _Bool enablePetraImageTopSnap; // @synthesize enablePetraImageTopSnap=_enablePetraImageTopSnap;
@property(readonly, nonatomic) _Bool enablePetraAppInstallAd; // @synthesize enablePetraAppInstallAd=_enablePetraAppInstallAd;
@property(readonly, nonatomic) _Bool enablePetraAdRequest; // @synthesize enablePetraAdRequest=_enablePetraAdRequest;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnablePetraAdRequest:(_Bool)arg1 enablePetraAppInstallAd:(_Bool)arg2 enablePetraImageTopSnap:(_Bool)arg3 enablePetraVideoTopSnap:(_Bool)arg4 enablePetraPublisherAdRequest:(_Bool)arg5 enablePetraContentInterstitialAdRequest:(_Bool)arg6;
- (id)initWithCoder:(id)arg1;

@end

