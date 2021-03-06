//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPostRegAddFriendsRouter-Protocol.h"

@class NSString, SCLazy;
@protocol SCPostRegAddFriendsLogging, SCUIContainer;

@interface SCPostRegAddFriendsNavRouter : NSObject <SCPostRegAddFriendsRouter>
{
    id <SCUIContainer> _uiContainer;
    SCLazy *_searchSectionCreator;
    SCLazy *_outgoingFriendsObserver;
    SCLazy *_actionHandler;
    SCLazy *_snapchattersDataMutator;
    id <SCPostRegAddFriendsLogging> _postRegAddFriendsLogger;
}

- (void).cxx_destruct;
- (void)showPostRegAddFriendsPageWithDelegate:(id)arg1;
- (id)initWithUIContainer:(id)arg1 searchSectionCreator:(id)arg2 outgoingFriendsObserver:(id)arg3 actionHandler:(id)arg4 snapchattersDataMutator:(id)arg5 postRegAddFriendsLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

