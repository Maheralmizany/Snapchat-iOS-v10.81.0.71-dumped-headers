//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SDMPlaybackCharacteristics;

@interface SDMPlayback : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPlaybackCharacteristics; // @dynamic hasPlaybackCharacteristics;
@property(retain, nonatomic) SDMPlaybackCharacteristics *playbackCharacteristics; // @dynamic playbackCharacteristics;
@property(retain, nonatomic) NSMutableArray *playbackLayersArray; // @dynamic playbackLayersArray;
@property(readonly, nonatomic) unsigned long long playbackLayersArray_Count; // @dynamic playbackLayersArray_Count;

@end

