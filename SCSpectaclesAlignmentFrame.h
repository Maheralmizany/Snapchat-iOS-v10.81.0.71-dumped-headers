//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray;

@interface SCSpectaclesAlignmentFrame : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBFloatArray *alignmentCompArray; // @dynamic alignmentCompArray;
@property(readonly, nonatomic) unsigned long long alignmentCompArray_Count; // @dynamic alignmentCompArray_Count;
@property(retain, nonatomic) GPBFloatArray *leftAlignmentCompArray; // @dynamic leftAlignmentCompArray;
@property(readonly, nonatomic) unsigned long long leftAlignmentCompArray_Count; // @dynamic leftAlignmentCompArray_Count;
@property(retain, nonatomic) GPBFloatArray *rightAlignmentCompArray; // @dynamic rightAlignmentCompArray;
@property(readonly, nonatomic) unsigned long long rightAlignmentCompArray_Count; // @dynamic rightAlignmentCompArray_Count;
@property(nonatomic) double timestamp; // @dynamic timestamp;

@end
