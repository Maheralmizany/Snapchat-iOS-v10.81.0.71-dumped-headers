//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOJUDeviceTokenAuthPayload-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUIdentityFindFriendsRequest <SOJUDeviceTokenAuthPayload>
@property(readonly, nonatomic) NSNumber *signUpTapTimeStamp;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) NSNumber *isFullSync;
@property(readonly, nonatomic) NSNumber *shouldRecommend;
@property(readonly, nonatomic) NSArray *contactsWithMetaData;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *numbers;
@end

