//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCSystemJobSchedulerServices, SCUnauthenticatedScope;

@interface SCUnauthenticatedJobSchedulerEntryPoint : SCEntryPoint
{
    SCUnauthenticatedScope *_unauthenticatedScope;
    SCSystemJobSchedulerServices *_systemJobSchedulerServices;
}

@property(nonatomic) __weak SCSystemJobSchedulerServices *systemJobSchedulerServices; // @synthesize systemJobSchedulerServices=_systemJobSchedulerServices;
@property(nonatomic) __weak SCUnauthenticatedScope *unauthenticatedScope; // @synthesize unauthenticatedScope=_unauthenticatedScope;
- (void).cxx_destruct;
- (void)_registerEmptyUserProviders;
- (void)begin;

@end
