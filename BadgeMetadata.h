//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface BadgeMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *badgeId; // @dynamic badgeId;
@property(nonatomic) int badgeType; // @dynamic badgeType;
@property(nonatomic) int destinationType; // @dynamic destinationType;
@property(nonatomic) int feedType; // @dynamic feedType;
@property(nonatomic) int schedulingType; // @dynamic schedulingType;
@property(retain, nonatomic) NSMutableArray *storyIdsArray; // @dynamic storyIdsArray;
@property(readonly, nonatomic) unsigned long long storyIdsArray_Count; // @dynamic storyIdsArray_Count;

@end

