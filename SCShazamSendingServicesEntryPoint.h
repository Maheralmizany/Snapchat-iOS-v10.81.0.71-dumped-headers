//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCExternalMediaPreparingServices, SCServicesExposer, SCTextSendingServices;

@interface SCShazamSendingServicesEntryPoint : SCEntryPoint
{
    SCTextSendingServices *_textSendingServices;
    SCExternalMediaPreparingServices *_externalMediaPreparingServices;
    SCServicesExposer *_shazamSendingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *shazamSendingServicesExposer; // @synthesize shazamSendingServicesExposer=_shazamSendingServicesExposer;
@property(nonatomic) __weak SCExternalMediaPreparingServices *externalMediaPreparingServices; // @synthesize externalMediaPreparingServices=_externalMediaPreparingServices;
@property(nonatomic) __weak SCTextSendingServices *textSendingServices; // @synthesize textSendingServices=_textSendingServices;
- (void).cxx_destruct;
- (void)begin;
- (id)_initializeShazamShareSender;

@end

