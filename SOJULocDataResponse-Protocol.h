//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, SOJULocationResponse, SOJUServerInfoResponse, SOJUSkipUseCases;

@protocol SOJULocDataResponse <SCSojuMessage>
@property(readonly, nonatomic) SOJUSkipUseCases *skipUseCases;
@property(readonly, nonatomic) NSNumber *hasNewStories;
@property(readonly, nonatomic) NSArray *createdFriendStories;
@property(readonly, nonatomic) NSArray *createdFriend;
@property(readonly, nonatomic) SOJULocationResponse *location;
@property(readonly, nonatomic) SOJUServerInfoResponse *serverInfo;
@end
