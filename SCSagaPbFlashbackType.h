//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSagaPbFlashbackType_Custom, SCSagaPbFlashbackType_MonthEnd, SCSagaPbFlashbackType_SameDate, SCSagaPbFlashbackType_YearEnd;

@interface SCSagaPbFlashbackType : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSagaPbFlashbackType_Custom *custom; // @dynamic custom;
@property(retain, nonatomic) SCSagaPbFlashbackType_MonthEnd *monthEnd; // @dynamic monthEnd;
@property(retain, nonatomic) SCSagaPbFlashbackType_SameDate *sameDate; // @dynamic sameDate;
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;
@property(retain, nonatomic) SCSagaPbFlashbackType_YearEnd *yearEnd; // @dynamic yearEnd;

@end

