//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SDMPoll_PollPage, SDMUpdateInfo;

@interface SDMPoll : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int durationInDays; // @dynamic durationInDays;
@property(copy, nonatomic) NSString *editorProperties; // @dynamic editorProperties;
@property(nonatomic) long long firstLiveTimestampMs; // @dynamic firstLiveTimestampMs;
@property(nonatomic) _Bool hasOutcomePage; // @dynamic hasOutcomePage;
@property(nonatomic) _Bool hasUpdateInfo; // @dynamic hasUpdateInfo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SDMPoll_PollPage *outcomePage; // @dynamic outcomePage;
@property(nonatomic) int pollState; // @dynamic pollState;
@property(nonatomic) int pollType; // @dynamic pollType;
@property(retain, nonatomic) NSMutableArray *questionPagesArray; // @dynamic questionPagesArray;
@property(readonly, nonatomic) unsigned long long questionPagesArray_Count; // @dynamic questionPagesArray_Count;
@property(retain, nonatomic) SDMUpdateInfo *updateInfo; // @dynamic updateInfo;

@end

