//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapchattersDataTracking-Protocol.h"

@class NSSet;
@protocol SCPostRegAddFriendsTrackingDelegate;

@protocol SCPostRegAddFriendsTracking <SCSnapchattersDataTracking>
@property(readonly, nonatomic) NSSet *addedSnapchatters;
@property(readonly, nonatomic) NSSet *addedSnapchatterIds;
@property(nonatomic) __weak id <SCPostRegAddFriendsTrackingDelegate> postRegAddFriendsTrackingDelegate;
@end

