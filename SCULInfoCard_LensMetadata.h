//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSString;

@interface SCULInfoCard_LensMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *availableLensActionsArray; // @dynamic availableLensActionsArray;
@property(readonly, nonatomic) unsigned long long availableLensActionsArray_Count; // @dynamic availableLensActionsArray_Count;
@property(copy, nonatomic) NSString *deepLink; // @dynamic deepLink;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(nonatomic) _Bool isFavorite; // @dynamic isFavorite;
@property(copy, nonatomic) NSString *publicName; // @dynamic publicName;

@end
