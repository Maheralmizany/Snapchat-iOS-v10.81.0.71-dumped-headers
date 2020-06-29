//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIFKVONSObject.h"

#import "SPReenactmentProcessor-Protocol.h"

@class NSError, NSHashTable, NSString, SPFullscreenReenactmentResult, SPPersonsSource, SPReenactmentRequest, SPScenario;

@interface SPFullscreenReenactmentProcessor : AIFKVONSObject <SPReenactmentProcessor>
{
    _Bool _isStarted;
    SPReenactmentRequest *_request;
    unsigned long long _state;
    NSError *_error;
    SPFullscreenReenactmentResult *_result;
    SPScenario *_scenario;
    SPPersonsSource *_personsSource;
    NSHashTable *_outputs;
}

@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(retain, nonatomic) NSHashTable *outputs; // @synthesize outputs=_outputs;
@property(readonly, nonatomic) SPPersonsSource *personsSource; // @synthesize personsSource=_personsSource;
@property(readonly, nonatomic) SPScenario *scenario; // @synthesize scenario=_scenario;
@property(readonly, nonatomic) SPFullscreenReenactmentResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) SPReenactmentRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)updateState;
- (void)pause;
- (void)start;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
@property(readonly, nonatomic) _Bool existInCache;
- (id)initWithReenactmentRequest:(id)arg1 result:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

