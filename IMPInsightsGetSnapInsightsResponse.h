//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface IMPInsightsGetSnapInsightsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool isFinishedProcessing; // @dynamic isFinishedProcessing;
@property(retain, nonatomic) NSMutableArray *readReceiptSectionsArray; // @dynamic readReceiptSectionsArray;
@property(readonly, nonatomic) unsigned long long readReceiptSectionsArray_Count; // @dynamic readReceiptSectionsArray_Count;
@property(retain, nonatomic) NSMutableArray *snapLifetimeMetricsArray; // @dynamic snapLifetimeMetricsArray;
@property(readonly, nonatomic) unsigned long long snapLifetimeMetricsArray_Count; // @dynamic snapLifetimeMetricsArray_Count;

@end

