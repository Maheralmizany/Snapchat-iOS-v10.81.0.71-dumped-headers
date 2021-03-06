//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCStartChatDelegate;

@interface SCOpenAddFriendsCardActionHandler : NSObject
{
    SCUserSession *_userSession;
    UIViewController *_presentingViewController;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCLazy *_presentAddFriendsIntentHandler;
}

- (void).cxx_destruct;
- (id)_makeCustomUIContainerWithPresentingViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openAddFriendsCardWithPlacement:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2 startChatDelegate:(id)arg3 navigationDelegate:(id)arg4;

@end

