//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCARBarCompatibleFeature-Protocol.h"

@protocol SCFeatureLensCarouselActivatorDelegate;

@protocol SCFeatureLensCarouselActivator <SCARBarCompatibleFeature>
@property(readonly, nonatomic) long long lensCarouselType;
@property(readonly, nonatomic) long long cameraViewType;
@property(nonatomic) __weak id <SCFeatureLensCarouselActivatorDelegate> delegate;
@end

