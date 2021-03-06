//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUWeatherResponse-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUWeatherResponse : SCSojuMessage <SOJUWeatherResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 timestamp:(id)arg3 fahrenheit:(id)arg4 celsius:(id)arg5 severeCondition:(id)arg6 locationName:(id)arg7 hourlyForecasts:(id)arg8 hourlyBoundary:(id)arg9 dailyForecasts:(id)arg10 dailyBoundary:(id)arg11;

// Remaining properties
@property(readonly, nonatomic) NSNumber *celsius; // @dynamic celsius;
@property(readonly, nonatomic) NSNumber *dailyBoundary; // @dynamic dailyBoundary;
@property(readonly, nonatomic) NSArray *dailyForecasts; // @dynamic dailyForecasts;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *fahrenheit; // @dynamic fahrenheit;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *hourlyBoundary; // @dynamic hourlyBoundary;
@property(readonly, nonatomic) NSArray *hourlyForecasts; // @dynamic hourlyForecasts;
@property(readonly, nonatomic) NSNumber *latitude; // @dynamic latitude;
@property(readonly, nonatomic) NSString *locationName; // @dynamic locationName;
@property(readonly, nonatomic) NSNumber *longitude; // @dynamic longitude;
@property(readonly, nonatomic) NSString *severeCondition; // @dynamic severeCondition;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *timestamp; // @dynamic timestamp;

@end

