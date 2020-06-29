//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPScenariosResourcesPrefetcher-Protocol.h"
#import "SPScenariosServiceOutput-Protocol.h"

@class NSOperationQueue, NSString, SPScenarioAllResourcesOperationFactory;
@protocol SPRecentScenariosService, SPScenariosService, SPSessionTokenProviding;

@interface SPScenariosResourcesPrefetcherImpl : NSObject <SPScenariosServiceOutput, SPScenariosResourcesPrefetcher>
{
    id <SPScenariosService> _scenariosService;
    id <SPSessionTokenProviding> _sessionTokenProvider;
    id <SPRecentScenariosService> _recentScenariosService;
    SPScenarioAllResourcesOperationFactory *_resourcesOperationFactory;
    CDUnknownBlockType _completion;
    NSOperationQueue *_downloadQueue;
    unsigned long long _scenariosLimit;
    _Bool _needLoadFullscreenResources;
}

- (void).cxx_destruct;
- (void)didObtainSearchResult:(id)arg1 error:(id)arg2;
- (void)_cleanup;
- (void)prefetchScenariosResourcesWithQueue:(id)arg1 scenariosLimit:(unsigned long long)arg2 needLoadFullscreenResources:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

