//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMemoriesCMStreamingV2ExperimentContext : SCExperimentContext
{
    _Bool _shouldFullMediaCallback;
    unsigned long long _mediaExpirationInHours;
}

@property(readonly, nonatomic) unsigned long long mediaExpirationInHours; // @synthesize mediaExpirationInHours=_mediaExpirationInHours;
@property(readonly, nonatomic) _Bool shouldFullMediaCallback; // @synthesize shouldFullMediaCallback=_shouldFullMediaCallback;
- (void)setupParameters;
- (id)experimentName;

@end
