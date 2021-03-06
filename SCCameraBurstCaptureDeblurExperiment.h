//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCCameraBurstCaptureDeblurExperiment : SCExperimentContext
{
    _Bool _enabled;
    _Bool _burstEnabled;
    _Bool _bufferEnabled;
    unsigned long long _burstCount;
    unsigned long long _bufferCount;
    unsigned long long _bufferGoBackPosition;
    unsigned long long _referenceTiming;
    double _weightOfBurst1;
    double _weightOfBurst2;
    double _weightOfBuffer1;
    double _weightOfBuffer2;
}

@property(readonly, nonatomic) double weightOfBuffer2; // @synthesize weightOfBuffer2=_weightOfBuffer2;
@property(readonly, nonatomic) double weightOfBuffer1; // @synthesize weightOfBuffer1=_weightOfBuffer1;
@property(readonly, nonatomic) double weightOfBurst2; // @synthesize weightOfBurst2=_weightOfBurst2;
@property(readonly, nonatomic) double weightOfBurst1; // @synthesize weightOfBurst1=_weightOfBurst1;
@property(readonly, nonatomic) unsigned long long referenceTiming; // @synthesize referenceTiming=_referenceTiming;
@property(readonly, nonatomic) unsigned long long bufferGoBackPosition; // @synthesize bufferGoBackPosition=_bufferGoBackPosition;
@property(readonly, nonatomic) unsigned long long bufferCount; // @synthesize bufferCount=_bufferCount;
@property(readonly, nonatomic) unsigned long long burstCount; // @synthesize burstCount=_burstCount;
@property(readonly, nonatomic) _Bool bufferEnabled; // @synthesize bufferEnabled=_bufferEnabled;
@property(readonly, nonatomic) _Bool burstEnabled; // @synthesize burstEnabled=_burstEnabled;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setupParameters;
- (id)experimentName;

@end

