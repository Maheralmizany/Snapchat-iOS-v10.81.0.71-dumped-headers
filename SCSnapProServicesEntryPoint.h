//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCNativeMessagingServices, SCServicesExposer, SCTextSendingServices, SCUserSessionScope;

@interface SCSnapProServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCTextSendingServices *_textSendingServices;
    SCNativeMessagingServices *_nativeMessagingServices;
    SCServicesExposer *_snapProServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *snapProServicesExposer; // @synthesize snapProServicesExposer=_snapProServicesExposer;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
@property(nonatomic) __weak SCTextSendingServices *textSendingServices; // @synthesize textSendingServices=_textSendingServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

