//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsActionHandlerCreating-Protocol.h"

@class NSString, SCAddFriendsSnapAndChatDelegate, SCLazy, SCUserSession;
@protocol NavigationDelegate;

@interface SCAddFriendsActionHandlerCreator : NSObject <SCAddFriendsActionHandlerCreating>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_mySnapcodeImageProvider;
    SCLazy *_mySnapcodeURLProvider;
    SCAddFriendsSnapAndChatDelegate *_addFriendsSnapAndChatHandler;
}

- (void).cxx_destruct;
- (id)createActionHandlersWithPresentingViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 snapchattersDataProvider:(id)arg3 mySnapcodeImageProvider:(id)arg4 mySnapcodeURLProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

