//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCMainCameraScope, SCServicesExposer, SCUserSessionScope;

@interface SCMemoriesRecentThumbnailProvidingEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCMainCameraScope *_cameraScope;
    SCServicesExposer *_memoriesThumbnailProvidingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *memoriesThumbnailProvidingServicesExposer; // @synthesize memoriesThumbnailProvidingServicesExposer=_memoriesThumbnailProvidingServicesExposer;
@property(nonatomic) __weak SCMainCameraScope *cameraScope; // @synthesize cameraScope=_cameraScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

