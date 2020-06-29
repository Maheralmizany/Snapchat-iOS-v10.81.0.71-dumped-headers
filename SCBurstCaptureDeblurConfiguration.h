//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCBurstCaptureDeblurConfiguration : NSObject
{
    _Bool _enabled;
    _Bool _respectABConfig;
    _Bool _burstEnabled;
    _Bool _bufferEnabled;
    long long _burstCount;
    long long _bufferCount;
    long long _goBackPosition;
    long long _referenceTiming;
    double _weightOfBurst1;
    double _weightOfBurst2;
    double _weightOfBuffer1;
    double _weightOfBuffer2;
}

@property(readonly, nonatomic) double weightOfBuffer2; // @synthesize weightOfBuffer2=_weightOfBuffer2;
@property(readonly, nonatomic) double weightOfBuffer1; // @synthesize weightOfBuffer1=_weightOfBuffer1;
@property(readonly, nonatomic) double weightOfBurst2; // @synthesize weightOfBurst2=_weightOfBurst2;
@property(readonly, nonatomic) double weightOfBurst1; // @synthesize weightOfBurst1=_weightOfBurst1;
@property(readonly, nonatomic) long long referenceTiming; // @synthesize referenceTiming=_referenceTiming;
@property(readonly, nonatomic) long long goBackPosition; // @synthesize goBackPosition=_goBackPosition;
@property(readonly, nonatomic) long long bufferCount; // @synthesize bufferCount=_bufferCount;
@property(readonly, nonatomic) long long burstCount; // @synthesize burstCount=_burstCount;
@property(readonly, nonatomic) _Bool bufferEnabled; // @synthesize bufferEnabled=_bufferEnabled;
@property(readonly, nonatomic) _Bool burstEnabled; // @synthesize burstEnabled=_burstEnabled;
@property(readonly, nonatomic) _Bool respectABConfig; // @synthesize respectABConfig=_respectABConfig;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithEnabled:(_Bool)arg1 respectABConfig:(_Bool)arg2 burstEnabled:(_Bool)arg3 bufferEnabled:(_Bool)arg4 burstCount:(long long)arg5 bufferCount:(long long)arg6 goBackPosition:(long long)arg7 referenceTiming:(long long)arg8 weightOfBurst1:(double)arg9 weightOfBurst2:(double)arg10 weightOfBuffer1:(double)arg11 weightOfBuffer2:(double)arg12;
- (id)initWithConfigString:(id)arg1;

@end

