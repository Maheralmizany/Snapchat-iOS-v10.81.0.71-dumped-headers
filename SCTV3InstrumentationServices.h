//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTInstrumentationServices-Protocol.h"

@class NSString;
@protocol SCTCKMetricServices;

@interface SCTV3InstrumentationServices : NSObject <SCTInstrumentationServices>
{
    id <SCTCKMetricServices> _callkitMetrics;
}

- (void).cxx_destruct;
- (void)reportEvent:(id)arg1 convoId:(id)arg2;
- (void)reportEvent:(id)arg1;
- (id)initWithCallKitMetricsService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

