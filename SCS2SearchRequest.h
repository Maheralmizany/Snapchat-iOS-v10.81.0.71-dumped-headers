//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCS2CognacClientInfo, SCS2GeoLocation, SCS2RequestOptions, SCS2UserInfo;

@interface SCS2SearchRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCS2CognacClientInfo *cognacClientInfo; // @dynamic cognacClientInfo;
@property(nonatomic) _Bool hasCognacClientInfo; // @dynamic hasCognacClientInfo;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasRequestOptions; // @dynamic hasRequestOptions;
@property(nonatomic) _Bool hasUserInfo; // @dynamic hasUserInfo;
@property(retain, nonatomic) SCS2GeoLocation *location; // @dynamic location;
@property(nonatomic) int origin; // @dynamic origin;
@property(copy, nonatomic) NSString *queryString; // @dynamic queryString;
@property(retain, nonatomic) SCS2RequestOptions *requestOptions; // @dynamic requestOptions;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *sessionQueryId; // @dynamic sessionQueryId;
@property(retain, nonatomic) NSMutableArray *studyInfoArray; // @dynamic studyInfoArray;
@property(readonly, nonatomic) unsigned long long studyInfoArray_Count; // @dynamic studyInfoArray_Count;
@property(retain, nonatomic) SCS2UserInfo *userInfo; // @dynamic userInfo;

@end

