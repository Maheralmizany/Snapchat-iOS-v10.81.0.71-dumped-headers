//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCGrapheneServices, SCLazy, SCSendMessageLoggerServices, SCServicesExposer, SCUploadMediaDataManagerServices, SCUserSessionScope;

@interface SCMediaOrchestrationServicesEntryPoint : SCEntryPoint
{
    SCLazy *_lazyMediaOrchestrator;
    SCGrapheneServices *_grapheneServices;
    SCSendMessageLoggerServices *_sendMessageLoggerServices;
    SCUploadMediaDataManagerServices *_uploadMediaDataManagerServices;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_mediaOrchestrationServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *mediaOrchestrationServicesExposer; // @synthesize mediaOrchestrationServicesExposer=_mediaOrchestrationServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUploadMediaDataManagerServices *uploadMediaDataManagerServices; // @synthesize uploadMediaDataManagerServices=_uploadMediaDataManagerServices;
@property(nonatomic) __weak SCSendMessageLoggerServices *sendMessageLoggerServices; // @synthesize sendMessageLoggerServices=_sendMessageLoggerServices;
@property(nonatomic) __weak SCGrapheneServices *grapheneServices; // @synthesize grapheneServices=_grapheneServices;
- (void).cxx_destruct;
- (void)begin;

@end

