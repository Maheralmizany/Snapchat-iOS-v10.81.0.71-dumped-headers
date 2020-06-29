//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIFKVONSObject.h"

#import "SPPersonProcessorOutput-Protocol.h"

@class NSString;
@protocol SPAnimatorLoadingValidatorDelegate, SPPersonProcessor, SPStringsProvider;

@interface SPAnimatorLoadingValidator : AIFKVONSObject <SPPersonProcessorOutput>
{
    id <SPStringsProvider> _stringsProvider;
    id <SPAnimatorLoadingValidatorDelegate> _delegate;
    id <SPPersonProcessor> _personProcessor;
}

@property(readonly, nonatomic) id <SPPersonProcessor> personProcessor; // @synthesize personProcessor=_personProcessor;
@property(nonatomic) __weak id <SPAnimatorLoadingValidatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
- (void).cxx_destruct;
- (void)personProcessor:(id)arg1 didChangeState:(unsigned long long)arg2;
- (id)initWithPersonProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
