//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, PremiumContentId;

@interface PremiumContentWatchHistory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PremiumContentId *contentId; // @dynamic contentId;
@property(nonatomic) _Bool hasContentId; // @dynamic hasContentId;
@property(retain, nonatomic) NSMutableArray *lastWatchedStoriesArray; // @dynamic lastWatchedStoriesArray;
@property(readonly, nonatomic) unsigned long long lastWatchedStoriesArray_Count; // @dynamic lastWatchedStoriesArray_Count;

@end
