//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPInsightsGetStoriesInsightsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *nextPageId; // @dynamic nextPageId;
@property(retain, nonatomic) NSMutableArray *storyInsightsArray; // @dynamic storyInsightsArray;
@property(readonly, nonatomic) unsigned long long storyInsightsArray_Count; // @dynamic storyInsightsArray_Count;

@end
