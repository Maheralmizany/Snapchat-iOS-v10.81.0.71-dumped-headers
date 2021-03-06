//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIFKVONSObject.h"

#import "SPPersonProcessorOutput-Protocol.h"

@class NSArray, NSError, NSString, SPAIModelsManager;

@interface SPAnimatorLoadingModelsGroup : AIFKVONSObject <SPPersonProcessorOutput>
{
    SPAIModelsManager *_aiModelsManager;
    unsigned long long _state;
    NSArray *_personProcessors;
    NSError *_error;
    NSString *_appliedLensId;
    NSArray *_results;
}

@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *appliedLensId; // @synthesize appliedLensId=_appliedLensId;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *personProcessors; // @synthesize personProcessors=_personProcessors;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) SPAIModelsManager *aiModelsManager; // @synthesize aiModelsManager=_aiModelsManager;
- (void).cxx_destruct;
- (void)updateState;
- (void)personProcessor:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)processWithLensId:(id)arg1;
- (id)initWithLoadingViewModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

