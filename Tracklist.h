//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface Tracklist : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *tracksArray; // @dynamic tracksArray;
@property(readonly, nonatomic) unsigned long long tracksArray_Count; // @dynamic tracksArray_Count;

@end
