//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class BenchmarkRequest, NSMutableArray, NSString;

@interface SCCofConfigTargetingResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int abResultChecksum; // @dynamic abResultChecksum;
@property(retain, nonatomic) BenchmarkRequest *benchmarkRequest; // @dynamic benchmarkRequest;
@property(retain, nonatomic) NSMutableArray *configResultsArray; // @dynamic configResultsArray;
@property(readonly, nonatomic) unsigned long long configResultsArray_Count; // @dynamic configResultsArray_Count;
@property(copy, nonatomic) NSString *configResultsEtag; // @dynamic configResultsEtag;
@property(nonatomic) _Bool fullResults; // @dynamic fullResults;
@property(nonatomic) _Bool hasBenchmarkRequest; // @dynamic hasBenchmarkRequest;

@end

