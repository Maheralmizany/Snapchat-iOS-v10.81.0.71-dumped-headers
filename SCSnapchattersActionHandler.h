//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCAddFriendsActionEventObservableRepository-Protocol.h"

@class NSString, SCAddSnapchatterActionHandler, SCBlockSnapchatterActionHandler, SCDeleteSnapchatterActionHandler, SCEditSnapchatterDisplayNameActionHandler, SCHideSuggestedSnapchatterActionHandler, SCIgnoreSnapchatterActionHandler, SCMuteSnapchatterStoryActionHandler, SCObservable, SCUnblockSnapchatterActionHandler, SCUnmuteSnapchatterStoryActionHandler;

@interface SCSnapchattersActionHandler : NSObject <SCAddFriendsActionEventObservableRepository, SCActionHandling>
{
    SCAddSnapchatterActionHandler *_addSnapchatterActionHandler;
    SCHideSuggestedSnapchatterActionHandler *_hideSuggestedSnapchatterActionHandler;
    SCDeleteSnapchatterActionHandler *_deleteSnapchatterActionHandler;
    SCBlockSnapchatterActionHandler *_blockSnapchatterActionHandler;
    SCUnblockSnapchatterActionHandler *_unblockSnapchatterActionHandler;
    SCIgnoreSnapchatterActionHandler *_ignoreSnapchatterActionHandler;
    SCMuteSnapchatterStoryActionHandler *_muteSnapchatterStoryActionHandler;
    SCUnmuteSnapchatterStoryActionHandler *_unmuteSnapchatterStoryActionHandler;
    SCEditSnapchatterDisplayNameActionHandler *_editSnapchatterDisplayNameActionHandler;
    SCObservable *_addFriendsActionEventObservable;
}

- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
@property(retain, nonatomic) SCObservable *addFriendsActionEventObservable;
- (id)initWithSnapchattersDataMutator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

