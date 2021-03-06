//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCache, SCExperimentManager;

@interface SCCognacAppListPersistenceService : NSObject
{
    SCExperimentManager *_experimentManager;
    SCCache *_cache;
}

- (void).cxx_destruct;
- (void)_updateAppsArray:(id)arg1 forKey:(id)arg2;
- (void)updateSearchAppsArray:(id)arg1;
- (void)updateDestinationAppsArray:(id)arg1;
- (void)updateAppsArray:(id)arg1;
- (void)_unexpiredAppsArrayForKey:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unexpiredSearchAppsArrayWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unexpiredDestinationAppsArrayWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unexpiredAppsArrayWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_keyForSearchApps;
- (id)_keyForDestinationApps;
- (id)_keyForApps;
- (id)initWithCache:(id)arg1 experimentManager:(id)arg2;

@end

