//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSString, SCS2UserInfo;

@interface SCCTPSearchRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *acceptLanguagesArray; // @dynamic acceptLanguagesArray;
@property(readonly, nonatomic) unsigned long long acceptLanguagesArray_Count; // @dynamic acceptLanguagesArray_Count;
@property(nonatomic) _Bool hasUserInfo; // @dynamic hasUserInfo;
@property(nonatomic) int origin; // @dynamic origin;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(copy, nonatomic) NSString *searchSessionId; // @dynamic searchSessionId;
@property(retain, nonatomic) GPBEnumArray *sectionsToReturnArray; // @dynamic sectionsToReturnArray;
@property(readonly, nonatomic) unsigned long long sectionsToReturnArray_Count; // @dynamic sectionsToReturnArray_Count;
@property(nonatomic) long long sessionQueryId; // @dynamic sessionQueryId;
@property(retain, nonatomic) NSMutableArray *studyInfoArray; // @dynamic studyInfoArray;
@property(readonly, nonatomic) unsigned long long studyInfoArray_Count; // @dynamic studyInfoArray_Count;
@property(copy, nonatomic) NSString *superSessionId; // @dynamic superSessionId;
@property(retain, nonatomic) NSMutableArray *tweaksArray; // @dynamic tweaksArray;
@property(readonly, nonatomic) unsigned long long tweaksArray_Count; // @dynamic tweaksArray_Count;
@property(retain, nonatomic) SCS2UserInfo *userInfo; // @dynamic userInfo;

@end
