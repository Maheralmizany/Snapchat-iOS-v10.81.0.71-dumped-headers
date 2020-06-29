//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCVerifyOnLogoutWithCooldownExperimentContext : SCExperimentContext
{
    _Bool _shouldResetMax;
    _Bool _enabled;
    long long _maxPrompts;
}

+ (id)experimentContextWithExperimentManager:(id)arg1;
@property(readonly, nonatomic) long long maxPrompts; // @synthesize maxPrompts=_maxPrompts;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) _Bool shouldResetMax; // @synthesize shouldResetMax=_shouldResetMax;
- (void)setupParameters;
- (id)experimentName;

@end
