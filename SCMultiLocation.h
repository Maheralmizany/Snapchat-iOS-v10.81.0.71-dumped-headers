//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray;

@interface SCMultiLocation : NSObject
{
    _Bool _isInferred;
    CLLocation *_current;
    NSArray *_others;
}

@property(readonly, nonatomic) _Bool isInferred; // @synthesize isInferred=_isInferred;
@property(readonly, nonatomic) NSArray *others; // @synthesize others=_others;
@property(readonly, nonatomic) CLLocation *current; // @synthesize current=_current;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocation:(id)arg1 isInferred:(_Bool)arg2 others:(id)arg3;

@end
