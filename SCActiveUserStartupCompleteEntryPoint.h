//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCOptionalScopeExposer, SCStartupCompletionServices;

@interface SCActiveUserStartupCompleteEntryPoint : SCEntryPoint
{
    SCStartupCompletionServices *_startupCompletionServices;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCOptionalScopeExposer *_startupCompleteScopeExposer;
}

@property(retain, nonatomic) SCOptionalScopeExposer *startupCompleteScopeExposer; // @synthesize startupCompleteScopeExposer=_startupCompleteScopeExposer;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
@property(nonatomic) __weak SCStartupCompletionServices *startupCompletionServices; // @synthesize startupCompletionServices=_startupCompletionServices;
- (void).cxx_destruct;
- (void)begin;

@end
