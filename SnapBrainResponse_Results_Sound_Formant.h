//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SnapBrainResponse_Results_Sound_Note;

@interface SnapBrainResponse_Results_Sound_Formant : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float centroid; // @dynamic centroid;
@property(nonatomic) float f1; // @dynamic f1;
@property(nonatomic) float f1DivF2; // @dynamic f1DivF2;
@property(nonatomic) float f1DivF3; // @dynamic f1DivF3;
@property(nonatomic) float f1F0DbDiff; // @dynamic f1F0DbDiff;
@property(nonatomic) float f2; // @dynamic f2;
@property(nonatomic) float f2F0DbDiff; // @dynamic f2F0DbDiff;
@property(nonatomic) float f2SubF1; // @dynamic f2SubF1;
@property(nonatomic) float f3; // @dynamic f3;
@property(nonatomic) float f3F0DbDiff; // @dynamic f3F0DbDiff;
@property(nonatomic) float flatness; // @dynamic flatness;
@property(nonatomic) float fundamentalDb; // @dynamic fundamentalDb;
@property(retain, nonatomic) SnapBrainResponse_Results_Sound_Note *fundamentalNote; // @dynamic fundamentalNote;
@property(nonatomic) _Bool hasFundamentalNote; // @dynamic hasFundamentalNote;
@property(retain, nonatomic) NSMutableArray *maxPeaksArray; // @dynamic maxPeaksArray;
@property(readonly, nonatomic) unsigned long long maxPeaksArray_Count; // @dynamic maxPeaksArray_Count;
@property(nonatomic) float onsetDuration; // @dynamic onsetDuration;
@property(nonatomic) float onsetEnd; // @dynamic onsetEnd;
@property(nonatomic) float onsetStart; // @dynamic onsetStart;
@property(retain, nonatomic) NSMutableArray *peaksArray; // @dynamic peaksArray;
@property(readonly, nonatomic) unsigned long long peaksArray_Count; // @dynamic peaksArray_Count;

@end

