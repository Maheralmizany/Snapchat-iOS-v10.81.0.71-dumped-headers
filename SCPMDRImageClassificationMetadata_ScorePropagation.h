//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface SCPMDRImageClassificationMetadata_ScorePropagation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *dstClassIdsArray; // @dynamic dstClassIdsArray;
@property(readonly, nonatomic) unsigned long long dstClassIdsArray_Count; // @dynamic dstClassIdsArray_Count;
@property(nonatomic) int srcClassId; // @dynamic srcClassId;

@end

