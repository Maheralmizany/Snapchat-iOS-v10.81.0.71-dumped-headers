//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface GetItemsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *adId; // @dynamic adId;
@property(nonatomic) int limit; // @dynamic limit;
@property(copy, nonatomic) NSString *paginationCursor; // @dynamic paginationCursor;
@property(copy, nonatomic) NSData *productSetId; // @dynamic productSetId;

@end
