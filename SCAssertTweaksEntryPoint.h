//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

#import "FBTweakObserver-Protocol.h"

@class NSString, SCSystemScope;

@interface SCAssertTweaksEntryPoint : SCEntryPoint <FBTweakObserver>
{
    SCSystemScope *_systemScope;
}

@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)_updateAssertBehaviorWithTweak:(id)arg1;
- (void)tweakDidChange:(id)arg1;
- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

