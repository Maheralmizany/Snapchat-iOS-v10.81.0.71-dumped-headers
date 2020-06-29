//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCServicesExposer.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCServicesContainerDelegate;

@interface SCServicesContainer : SCServicesExposer <SCTraceEnabled>
{
    id _services;
    id <SCServicesContainerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id services;
@property(readonly, nonatomic) _Bool hasExposedServices;
- (void)exposeServices:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

