//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCLensDataProviderServices, SCNavigationServices, SCServicesExposer;

@interface SCLensExplorerInfoCardPresenterServicesEntryPoint : SCEntryPoint
{
    SCNavigationServices *_navigationServices;
    SCLensDataProviderServices *_lensDataProviderServices;
    SCActiveUserSessionScope *_userSessionScope;
    SCServicesExposer *_lensExplorerInfoCardPresenterServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *lensExplorerInfoCardPresenterServicesExposer; // @synthesize lensExplorerInfoCardPresenterServicesExposer=_lensExplorerInfoCardPresenterServicesExposer;
@property(nonatomic) __weak SCActiveUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCLensDataProviderServices *lensDataProviderServices; // @synthesize lensDataProviderServices=_lensDataProviderServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
- (void).cxx_destruct;
- (id)_createLazyInfoCardPresenterFactory;
- (void)begin;

@end
