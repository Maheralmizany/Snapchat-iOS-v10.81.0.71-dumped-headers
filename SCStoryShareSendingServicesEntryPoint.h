//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCStartupCompleteScope, SCTextSendingServices;

@interface SCStoryShareSendingServicesEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCServicesExposer *_storyShareSendingServicesExposer;
    SCTextSendingServices *_textSendingServices;
}

@property(nonatomic) __weak SCTextSendingServices *textSendingServices; // @synthesize textSendingServices=_textSendingServices;
@property(retain, nonatomic) SCServicesExposer *storyShareSendingServicesExposer; // @synthesize storyShareSendingServicesExposer=_storyShareSendingServicesExposer;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (void)begin;

@end

