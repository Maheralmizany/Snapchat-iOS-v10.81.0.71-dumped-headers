//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationStorageServices, SCServicesExposer, SCSystemScope;

@interface SCUnauthenticatedDeviceInfoEntryPoint : SCEntryPoint
{
    SCSystemScope *_systemScope;
    SCApplicationStorageServices *_applicationStorageServices;
    SCServicesExposer *_registrationDeviceInfoServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *registrationDeviceInfoServicesExposer; // @synthesize registrationDeviceInfoServicesExposer=_registrationDeviceInfoServicesExposer;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

@end

