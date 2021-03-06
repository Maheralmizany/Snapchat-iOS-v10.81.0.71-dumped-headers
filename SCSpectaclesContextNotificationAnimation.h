//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCSpectaclesContextNotificationAnimation : NSObject <NSCopying, NSCoding>
{
    int _solidDuration;
    int _blinkCount;
    int _blinkDurationOnInMs;
    int _blinkDurationOffInMs;
    unsigned long long _color;
}

@property(readonly, nonatomic) unsigned long long color; // @synthesize color=_color;
@property(readonly, nonatomic) int blinkDurationOffInMs; // @synthesize blinkDurationOffInMs=_blinkDurationOffInMs;
@property(readonly, nonatomic) int blinkDurationOnInMs; // @synthesize blinkDurationOnInMs=_blinkDurationOnInMs;
@property(readonly, nonatomic) int blinkCount; // @synthesize blinkCount=_blinkCount;
@property(readonly, nonatomic) int solidDuration; // @synthesize solidDuration=_solidDuration;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSolidDuration:(int)arg1 blinkCount:(int)arg2 blinkDurationOnInMs:(int)arg3 blinkDurationOffInMs:(int)arg4 color:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;

@end

