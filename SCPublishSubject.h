//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCObservable.h"

#import "SCObserver-Protocol.h"

@class SCAssertingObserver, SCMulticastObserver;

@interface SCPublishSubject : SCObservable <SCObserver>
{
    SCAssertingObserver *_assertingObserver;
    SCMulticastObserver *_observers;
    _Bool _isComplete;
}

@property _Bool isComplete; // @synthesize isComplete=_isComplete;
- (void).cxx_destruct;
- (void)unsubscribe:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)complete;
- (void)next:(id)arg1;
- (void)dealloc;
- (id)init;

@end

