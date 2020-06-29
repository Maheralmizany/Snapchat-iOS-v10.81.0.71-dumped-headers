//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCOperaViewInteraction : NSObject
{
    unsigned long long _type;
    double _locationXToScreenWidthRatio;
    double _locationYToScreenHeightRatio;
    struct CGPoint _location;
}

+ (id)interactionWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 locationXToScreenWidthRatio:(double)arg3 locationYToScreenHeightRatio:(double)arg4;
+ (id)interactionWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) double locationYToScreenHeightRatio; // @synthesize locationYToScreenHeightRatio=_locationYToScreenHeightRatio;
@property(readonly, nonatomic) double locationXToScreenWidthRatio; // @synthesize locationXToScreenWidthRatio=_locationXToScreenWidthRatio;
@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 location:(struct CGPoint)arg2 locationXToScreenWidthRatio:(double)arg3 locationYToScreenHeightRatio:(double)arg4;
- (id)initWithType:(unsigned long long)arg1;

@end
