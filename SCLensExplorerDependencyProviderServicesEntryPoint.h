//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLensExplorerInfoCardPresenterServices, SCMainCameraScope, SCServicesExposer;

@interface SCLensExplorerDependencyProviderServicesEntryPoint : SCEntryPoint
{
    SCMainCameraScope *_mainCameraScope;
    SCLensExplorerInfoCardPresenterServices *_lensExplorerInfoCardPresenterServices;
    SCServicesExposer *_lensExplorerDependencyProviderServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *lensExplorerDependencyProviderServicesExposer; // @synthesize lensExplorerDependencyProviderServicesExposer=_lensExplorerDependencyProviderServicesExposer;
@property(nonatomic) __weak SCLensExplorerInfoCardPresenterServices *lensExplorerInfoCardPresenterServices; // @synthesize lensExplorerInfoCardPresenterServices=_lensExplorerInfoCardPresenterServices;
@property(nonatomic) __weak SCMainCameraScope *mainCameraScope; // @synthesize mainCameraScope=_mainCameraScope;
- (void).cxx_destruct;
- (void)begin;

@end

