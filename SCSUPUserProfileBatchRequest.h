//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSString;

@interface SCSUPUserProfileBatchRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *fieldRequestsArray; // @dynamic fieldRequestsArray;
@property(readonly, nonatomic) unsigned long long fieldRequestsArray_Count; // @dynamic fieldRequestsArray_Count;
@property(nonatomic) _Bool isClientSettingRequest; // @dynamic isClientSettingRequest;
@property(copy, nonatomic) NSString *locale; // @dynamic locale;
@property(retain, nonatomic) GPBEnumArray *localizeFieldsArray; // @dynamic localizeFieldsArray;
@property(readonly, nonatomic) unsigned long long localizeFieldsArray_Count; // @dynamic localizeFieldsArray_Count;
@property(nonatomic) long long subscribedCap; // @dynamic subscribedCap;
@property(retain, nonatomic) NSMutableArray *userIdsArray; // @dynamic userIdsArray;
@property(readonly, nonatomic) unsigned long long userIdsArray_Count; // @dynamic userIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *userProfileFieldOverridesArray; // @dynamic userProfileFieldOverridesArray;
@property(readonly, nonatomic) unsigned long long userProfileFieldOverridesArray_Count; // @dynamic userProfileFieldOverridesArray_Count;
@property(retain, nonatomic) GPBEnumArray *userProfileFieldsArray; // @dynamic userProfileFieldsArray;
@property(readonly, nonatomic) unsigned long long userProfileFieldsArray_Count; // @dynamic userProfileFieldsArray_Count;

@end

