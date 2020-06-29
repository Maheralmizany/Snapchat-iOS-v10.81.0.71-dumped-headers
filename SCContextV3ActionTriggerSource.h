//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextActionTriggering-Protocol.h"

@class NSString, UIView;

@interface SCContextV3ActionTriggerSource : NSObject <SCContextActionTriggering>
{
    _Bool _swiped;
    _Bool _tapped;
    NSString *_ctaElementType;
    long long _ctaElementIndex;
    long long _maxCtaElementIndex;
    UIView *_baseView;
    long long _contextActionSource;
}

@property(readonly, nonatomic) long long contextActionSource; // @synthesize contextActionSource=_contextActionSource;
@property(readonly, nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(readonly, nonatomic) _Bool tapped; // @synthesize tapped=_tapped;
@property(readonly, nonatomic) _Bool swiped; // @synthesize swiped=_swiped;
@property(readonly, nonatomic) long long maxCtaElementIndex; // @synthesize maxCtaElementIndex=_maxCtaElementIndex;
@property(readonly, nonatomic) long long ctaElementIndex; // @synthesize ctaElementIndex=_ctaElementIndex;
@property(readonly, copy, nonatomic) NSString *ctaElementType; // @synthesize ctaElementType=_ctaElementType;
- (void).cxx_destruct;
- (id)initAsTapEvent;
- (id)initAsSwipeEvent;
- (id)initAsUnknownEvent;
- (id)initWithCtaElementType:(id)arg1 ctaElementIndex:(long long)arg2 maxCtaElementIndex:(long long)arg3 swiped:(_Bool)arg4 tapped:(_Bool)arg5 contextActionSource:(long long)arg6 baseView:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
