//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray;

@interface SCCofGetAbConfigValuesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *configNamesArray; // @dynamic configNamesArray;
@property(readonly, nonatomic) unsigned long long configNamesArray_Count; // @dynamic configNamesArray_Count;
@property(nonatomic) _Bool enableDebug; // @dynamic enableDebug;
@property(retain, nonatomic) GPBEnumArray *namespacesArray; // @dynamic namespacesArray;
@property(readonly, nonatomic) unsigned long long namespacesArray_Count; // @dynamic namespacesArray_Count;

@end
