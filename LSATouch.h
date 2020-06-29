//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LSATouch : NSObject
{
    unsigned long long _identifier;
    long long _phase;
    struct CGPoint _normalizedLocationInView;
}

@property(readonly, nonatomic) long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) struct CGPoint normalizedLocationInView; // @synthesize normalizedLocationInView=_normalizedLocationInView;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)initWithTouch:(id)arg1 inView:(id)arg2;
- (id)initWithIdentifier:(unsigned long long)arg1 normalizedLocationInView:(struct CGPoint)arg2 phase:(long long)arg3;

@end

