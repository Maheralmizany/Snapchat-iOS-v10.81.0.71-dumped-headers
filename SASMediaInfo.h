//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SASMediaInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bucket; // @dynamic bucket;
@property(copy, nonatomic) NSString *mediaPath; // @dynamic mediaPath;
@property(nonatomic) long long mediaSize; // @dynamic mediaSize;
@property(copy, nonatomic) NSString *thumbnailPath; // @dynamic thumbnailPath;

@end
