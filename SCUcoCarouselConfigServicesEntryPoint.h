//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCircumstanceEngineServices, SCServicesExposer;

@interface SCUcoCarouselConfigServicesEntryPoint : SCEntryPoint
{
    SCCircumstanceEngineServices *_circumstanceEngineServices;
    SCServicesExposer *_carouselConfigServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *carouselConfigServicesExposer; // @synthesize carouselConfigServicesExposer=_carouselConfigServicesExposer;
@property(nonatomic) __weak SCCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
- (void).cxx_destruct;
- (void)begin;

@end

