//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface SCR2LabelPersonalizedStoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *debugInfo; // @dynamic debugInfo;
@property(readonly, nonatomic) unsigned long long debugInfo_Count; // @dynamic debugInfo_Count;
@property(nonatomic) _Bool isCaptionInteresting; // @dynamic isCaptionInteresting;
@property(nonatomic) _Bool isStoryInteresting; // @dynamic isStoryInteresting;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

