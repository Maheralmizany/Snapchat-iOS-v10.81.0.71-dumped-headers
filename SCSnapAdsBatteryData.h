//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSnapAdsBatteryData : NSObject <NSCopying>
{
    _Bool _isBatteryCharging;
    double _batteryLevel;
}

@property(readonly, nonatomic) double batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic) _Bool isBatteryCharging; // @synthesize isBatteryCharging=_isBatteryCharging;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsBatteryCharging:(_Bool)arg1 batteryLevel:(double)arg2;

@end

