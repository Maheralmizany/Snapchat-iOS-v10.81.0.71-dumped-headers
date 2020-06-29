//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, SCWeatherViewMetrics;

@interface SCFilterViewMetrics : NSObject <NSCoding>
{
    SCWeatherViewMetrics *_weatherMetrics;
    NSNumber *_filterInfoValue;
    long long _filterStreakValue;
    long long _filterStreakType;
}

@property(nonatomic) long long filterStreakType; // @synthesize filterStreakType=_filterStreakType;
@property(nonatomic) long long filterStreakValue; // @synthesize filterStreakValue=_filterStreakValue;
@property(retain, nonatomic) NSNumber *filterInfoValue; // @synthesize filterInfoValue=_filterInfoValue;
@property(readonly, nonatomic) SCWeatherViewMetrics *weatherMetrics; // @synthesize weatherMetrics=_weatherMetrics;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWeatherMetrics:(id)arg1;

@end

