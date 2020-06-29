//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCDisposableObserver, SCStartupCompleteScope, SCUserSessionScope, SCUserUpdatesServices;

@interface SCAdTreatmentUserSessionEntryPoint : SCEntryPoint
{
    SCDisposableObserver *_allUpdatesObserver;
    SCStartupCompleteScope *_startupCompleteScope;
    SCUserSessionScope *_userSessionScope;
    SCUserUpdatesServices *_userUpdatesServices;
}

@property(nonatomic) __weak SCUserUpdatesServices *userUpdatesServices; // @synthesize userUpdatesServices=_userUpdatesServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (void)_onApplicationDidBackground;
- (void)_onAppIdle;
- (void)_onAllUpdatesResponse:(id)arg1;
- (id)end;
- (void)begin;

@end

