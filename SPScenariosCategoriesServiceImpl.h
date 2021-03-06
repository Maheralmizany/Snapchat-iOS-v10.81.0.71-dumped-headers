//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPScenariosCategoriesService-Protocol.h"

@class NSOperationQueue, NSString;
@protocol SPResourcesOperationAbstactFactory, SPStringsProvider;

@interface SPScenariosCategoriesServiceImpl : NSObject <SPScenariosCategoriesService>
{
    NSOperationQueue *_queue;
    id <SPResourcesOperationAbstactFactory> _resourcesFactory;
    id <SPStringsProvider> _stringsProvider;
}

- (void).cxx_destruct;
- (id)obtainCommonScenariosCategoriesForPersonProcessor:(id)arg1 hairStyle:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithResourcesOperatioAbstactFactory:(id)arg1 stringsProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

