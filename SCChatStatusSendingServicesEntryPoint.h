//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCoreMessagingServices, SCServicesExposer, SCUserSessionScope;

@interface SCChatStatusSendingServicesEntryPoint : SCEntryPoint
{
    SCCoreMessagingServices *_coreMessagingServices;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_chatStatusSendingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *chatStatusSendingServicesExposer; // @synthesize chatStatusSendingServicesExposer=_chatStatusSendingServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCCoreMessagingServices *coreMessagingServices; // @synthesize coreMessagingServices=_coreMessagingServices;
- (void).cxx_destruct;
- (void)begin;

@end
