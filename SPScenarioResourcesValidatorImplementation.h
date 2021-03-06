//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPScenarioResourcesValidator-Protocol.h"

@class NSString;
@protocol SPFileValidator;

@interface SPScenarioResourcesValidatorImplementation : NSObject <SPScenarioResourcesValidator>
{
    id <SPFileValidator> _fileValidator;
}

@property(retain, nonatomic) id <SPFileValidator> fileValidator; // @synthesize fileValidator=_fileValidator;
- (void).cxx_destruct;
- (_Bool)validateResourcesByConfigAtPath:(id)arg1 resourcesBasePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

