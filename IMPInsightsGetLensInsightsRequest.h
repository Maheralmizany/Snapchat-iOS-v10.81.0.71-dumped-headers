//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IMPInsightsGetLensInsightsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(nonatomic) int limit; // @dynamic limit;
@property(nonatomic) int orderBy; // @dynamic orderBy;
@property(nonatomic) int startIndex; // @dynamic startIndex;

@end

