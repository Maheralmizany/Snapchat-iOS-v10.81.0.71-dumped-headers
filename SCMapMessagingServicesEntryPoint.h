//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCoreMessagingServices, SCServicesExposer, SCTextSendingServices;

@interface SCMapMessagingServicesEntryPoint : SCEntryPoint
{
    SCCoreMessagingServices *_coreMessagingServices;
    SCTextSendingServices *_textSendingServices;
    SCServicesExposer *_mapMessagingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *mapMessagingServicesExposer; // @synthesize mapMessagingServicesExposer=_mapMessagingServicesExposer;
@property(nonatomic) __weak SCTextSendingServices *textSendingServices; // @synthesize textSendingServices=_textSendingServices;
@property(nonatomic) __weak SCCoreMessagingServices *coreMessagingServices; // @synthesize coreMessagingServices=_coreMessagingServices;
- (void).cxx_destruct;
- (void)begin;

@end

