//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUDailyForecast <SCSojuMessage>
@property(readonly, nonatomic) NSString *displayTime;
@property(readonly, nonatomic) NSString *weatherCondition;
@property(readonly, nonatomic) NSNumber *celsiusMax;
@property(readonly, nonatomic) NSNumber *celsiusMin;
@property(readonly, nonatomic) NSNumber *fahrenheitMax;
@property(readonly, nonatomic) NSNumber *fahrenheitMin;
@end
