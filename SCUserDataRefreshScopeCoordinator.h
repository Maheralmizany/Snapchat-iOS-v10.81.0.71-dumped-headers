//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationLifecycleUserDataRefresher, SCConversationServices, SCStartupCompleteScope, SCSystemScope, SCUserSessionScope;

@interface SCUserDataRefreshScopeCoordinator : SCEntryPoint
{
    SCApplicationLifecycleUserDataRefresher *_applicationLifecycleUserDataRefresher;
    SCStartupCompleteScope *_startupCompleteScope;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCConversationServices *_conversationServices;
}

@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (void)begin;

@end

