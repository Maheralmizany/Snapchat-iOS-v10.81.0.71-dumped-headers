//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SnapBrainResponse_Results_SpokenKeywords_Result : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool final; // @dynamic final;
@property(nonatomic) _Bool flag; // @dynamic flag;
@property(retain, nonatomic) NSMutableArray *keywordsArray; // @dynamic keywordsArray;
@property(readonly, nonatomic) unsigned long long keywordsArray_Count; // @dynamic keywordsArray_Count;
@property(nonatomic) double segmentStart; // @dynamic segmentStart;
@property(copy, nonatomic) NSString *transcript; // @dynamic transcript;

@end

