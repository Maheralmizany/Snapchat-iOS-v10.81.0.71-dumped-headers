//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCDeltaSyncServices, SCLazy, SCServicesExposer;

@interface SCStickerLoadingServicesEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCDeltaSyncServices *_deltaSyncServices;
    SCServicesExposer *_stickerLoadingServices;
    SCLazy *_lazyMetadataLoadingDeltaForceService;
}

@property(readonly, nonatomic) SCLazy *lazyMetadataLoadingDeltaForceService; // @synthesize lazyMetadataLoadingDeltaForceService=_lazyMetadataLoadingDeltaForceService;
@property(retain, nonatomic) SCServicesExposer *stickerLoadingServices; // @synthesize stickerLoadingServices=_stickerLoadingServices;
@property(nonatomic) __weak SCDeltaSyncServices *deltaSyncServices; // @synthesize deltaSyncServices=_deltaSyncServices;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

