//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCBoltv2NewContentRequest;

@interface SCBoltv2CreateContentFromExternalReferencesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *externalContentReferencesArray; // @dynamic externalContentReferencesArray;
@property(readonly, nonatomic) unsigned long long externalContentReferencesArray_Count; // @dynamic externalContentReferencesArray_Count;
@property(nonatomic) _Bool hasRequest; // @dynamic hasRequest;
@property(retain, nonatomic) SCBoltv2NewContentRequest *request; // @dynamic request;

@end

