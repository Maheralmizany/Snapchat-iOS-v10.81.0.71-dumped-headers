//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUGalleryWeatherInfoFilter <SCSojuMessage>
@property(readonly, nonatomic) NSString *viewType;
@property(readonly, nonatomic) NSArray *dailyForecasts;
@property(readonly, nonatomic) NSArray *hourlyForecasts;
@property(readonly, nonatomic) NSString *locationName;
@property(readonly, nonatomic) NSNumber *fahrenheit;
@property(readonly, nonatomic) NSNumber *celsius;
@end

