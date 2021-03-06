//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPostRegAddFriendsTracking-Protocol.h"
#import "SCPostRegMultiAddFriendsMutatingDelegate-Protocol.h"

@class NSMutableSet, NSSet, SCSnapchattersDataRequestListenerAnnouncer;
@protocol SCPostRegAddFriendsTrackingDelegate, SCSnapchattersDataTracking;

@interface SCPostRegMultiAddFriendsTracker : NSObject <SCPostRegMultiAddFriendsMutatingDelegate, SCPostRegAddFriendsTracking>
{
    id <SCSnapchattersDataTracking> _snapchattersDataTracker;
    SCSnapchattersDataRequestListenerAnnouncer *_announcer;
    NSMutableSet *_addedSnapchatterIds;
    NSMutableSet *_addedSnapchatters;
    id <SCPostRegAddFriendsTrackingDelegate> _postRegAddFriendsTrackingDelegate;
}

@property(readonly, nonatomic) NSSet *addedSnapchatters; // @synthesize addedSnapchatters=_addedSnapchatters;
@property(readonly, nonatomic) NSSet *addedSnapchatterIds; // @synthesize addedSnapchatterIds=_addedSnapchatterIds;
@property(nonatomic) __weak id <SCPostRegAddFriendsTrackingDelegate> postRegAddFriendsTrackingDelegate; // @synthesize postRegAddFriendsTrackingDelegate=_postRegAddFriendsTrackingDelegate;
- (void).cxx_destruct;
- (void)postRegMultiAddFriendsMutator:(id)arg1 didDeleteSnapchatterWithUpdateRequest:(id)arg2;
- (void)postRegMultiAddFriendsMutator:(id)arg1 didAddSnapchatterWithUpdateRequest:(id)arg2;
- (id)inProcessingSnapchatterIds;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSnapchattersDataTracker:(id)arg1;

@end

