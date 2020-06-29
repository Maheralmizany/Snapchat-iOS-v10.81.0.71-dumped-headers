//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMediaContentDisplaying-Protocol.h"

@class GADAdVideoController, GADNativeAdImage, NSString, UIImageView, UIView;
@protocol GADMediatedUnifiedNativeAd, GADVideoControlling;

@interface GADMediatedMediaContent : NSObject <GADMediaContentDisplaying>
{
    id <GADMediatedUnifiedNativeAd> _mediatedNativeAd;
    GADAdVideoController *_videoController;
    GADNativeAdImage *_mainImage;
    // Error parsing type: Ad, name: _mainImageAspectRatio
    UIImageView *_mainImageView;
}

@property(retain, nonatomic) GADNativeAdImage *mainImage; // @synthesize mainImage=_mainImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
- (_Bool)isValidTimeInterval:(double)arg1;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) id <GADVideoControlling> videoController;
@property(readonly, nonatomic) UIView *mediaView;
- (id)initWithMediatedNativeAd:(id)arg1 mainImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

