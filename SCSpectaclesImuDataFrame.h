//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSpectaclesImuDataFrame : NSObject
{
    long long _timestamp;
    CDStruct_31142d93 _acceleration;
    CDStruct_31142d93 _rotationRate;
}

@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(nonatomic) CDStruct_31142d93 acceleration; // @synthesize acceleration=_acceleration;
- (id)description;
-     // Error parsing type: @120@0:8{?=[3]}16q112, name: encodedMLBFrameWithTransformOffset:timestampOffset:
- (id)initWithImuFrame:(id)arg1 timestampOffset:(long long)arg2;
-     // Error parsing type: @128@0:8@16{?=[3]}24q120, name: initWithMLBFrame:transformOffset:timestampOffset:
- (id)initWithVLKFrame:(id)arg1 timestamp:(long long)arg2;

@end
