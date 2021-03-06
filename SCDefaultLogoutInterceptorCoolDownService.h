//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLogoutInterceptorCoolDownService-Protocol.h"

@class NSString, SCFeatureSettingsService;

@interface SCDefaultLogoutInterceptorCoolDownService : NSObject <SCLogoutInterceptorCoolDownService>
{
    SCFeatureSettingsService *_featureSettingsService;
    unsigned long long _maxPrompts;
    unsigned long long _firstCoolDownCount;
    unsigned long long _subsequentCoolDownCount;
    unsigned long long _maxPromptsCoolDownCount;
}

- (void).cxx_destruct;
- (_Bool)_isCoolingDown;
- (void)reset:(unsigned long long)arg1;
- (_Bool)coolDown;
- (id)initWithFeatureSettingsService:(id)arg1 maxPrompts:(unsigned long long)arg2 firstCoolDownCount:(unsigned long long)arg3 subsequentCoolDownCount:(unsigned long long)arg4 maxPromptsCoolDownCount:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

