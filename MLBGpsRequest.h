//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBRange, NSData;

@interface MLBGpsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *fileData; // @dynamic fileData;
@property(retain, nonatomic) MLBRange *fileRange; // @dynamic fileRange;
@property(nonatomic) _Bool hasFileData; // @dynamic hasFileData;
@property(nonatomic) _Bool hasFileRange; // @dynamic hasFileRange;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int type; // @dynamic type;

@end

