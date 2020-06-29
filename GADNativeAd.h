//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInternalNativeAd, GADObserverCollection, NSDictionary, NSString, UIView, UIViewController;
@protocol GADMediaContentDisplaying, GADNativeAdDelegate;

@interface GADNativeAd : NSObject
{
    GADInternalNativeAd *_internalNativeAd;
    GADObserverCollection *_adObservers;
    _Bool _mediaContentStatusReported;
    _Bool _mediaContentRendered;
    UIView *_adChoicesContentView;
    id <GADNativeAdDelegate> _delegate;
    UIViewController *_rootViewController;
    NSString *_adNetworkClassName;
}

@property(readonly, nonatomic) GADInternalNativeAd *internalNativeAd; // @synthesize internalNativeAd=_internalNativeAd;
@property(readonly, copy, nonatomic) NSString *adNetworkClassName; // @synthesize adNetworkClassName=_adNetworkClassName;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <GADNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)postDidMakeImpressionNotificationWithUserInfo:(id)arg1;
- (void)postDidReceiveUnapprovedClickNotificationWithUserInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *extraAssets;
@property(readonly, nonatomic) UIView *adChoicesContentView;
@property(readonly, nonatomic) id <GADMediaContentDisplaying> internalMediaContent;
@property(readonly, nonatomic) NSString *adType;
- (void)reportIsMediaContentRendered:(_Bool)arg1;
- (id)init;
- (id)initWithInternalNativeAd:(id)arg1;
- (void)dealloc;

@end
