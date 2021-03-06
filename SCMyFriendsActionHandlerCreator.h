//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMyFriendsActionHandlerCreating-Protocol.h"

@class NSString, SCLazy, SCUserSession;
@protocol SCStartChatDelegate;

@interface SCMyFriendsActionHandlerCreator : NSObject <SCMyFriendsActionHandlerCreating>
{
    SCLazy *_snapchatterDataFetcher;
    SCUserSession *_userSession;
    id <SCStartChatDelegate> _addFriendsSnapAndChatHandler;
}

- (void).cxx_destruct;
- (id)createMyFriendsActionHandlerWithPresentingViewController:(id)arg1 navigationDelegate:(id)arg2;
- (id)initWithSnapchattersDataFetcher:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

