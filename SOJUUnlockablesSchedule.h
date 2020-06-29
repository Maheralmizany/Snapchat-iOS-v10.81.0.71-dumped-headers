//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesSchedule-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesSchedule : SCSojuMessage <SOJUUnlockablesSchedule>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSchedulingType:(id)arg1 startDateTime:(id)arg2 endDateTime:(id)arg3 timezone:(id)arg4 useLocalTimezone:(id)arg5 repetitionFrequency:(id)arg6 repetitionEndDateTime:(id)arg7 weeklyFrequency:(id)arg8 repeatIntervals:(id)arg9;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *endDateTime; // @dynamic endDateTime;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *repeatIntervals; // @dynamic repeatIntervals;
@property(readonly, nonatomic) NSString *repetitionEndDateTime; // @dynamic repetitionEndDateTime;
@property(readonly, nonatomic) NSString *repetitionFrequency; // @dynamic repetitionFrequency;
@property(readonly, nonatomic) NSString *schedulingType; // @dynamic schedulingType;
@property(readonly, nonatomic) NSString *startDateTime; // @dynamic startDateTime;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *timezone; // @dynamic timezone;
@property(readonly, nonatomic) NSNumber *useLocalTimezone; // @dynamic useLocalTimezone;
@property(readonly, nonatomic) NSString *weeklyFrequency; // @dynamic weeklyFrequency;

@end

