//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCConversationServices, SCMediaOrchestrationServices, SCServicesExposer;

@interface SCExternalMediaPreparingEntryPoint : SCEntryPoint
{
    SCMediaOrchestrationServices *_mediaOrchestrationServices;
    SCConversationServices *_conversationServices;
    SCServicesExposer *_externalMediaPreparingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *externalMediaPreparingServicesExposer; // @synthesize externalMediaPreparingServicesExposer=_externalMediaPreparingServicesExposer;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(nonatomic) __weak SCMediaOrchestrationServices *mediaOrchestrationServices; // @synthesize mediaOrchestrationServices=_mediaOrchestrationServices;
- (void).cxx_destruct;
- (void)begin;
- (id)_initializeExternalMediaPreparer;

@end

