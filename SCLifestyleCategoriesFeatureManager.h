//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCAdSettingsService, SCQueuePerformer;

@interface SCLifestyleCategoriesFeatureManager : NSObject
{
    SCAdSettingsService *_adSettingsService;
    SCQueuePerformer *_queuePerformer;
    NSMutableDictionary *_currentSelections;
    NSMutableDictionary *_updatedUserInterests;
}

- (void).cxx_destruct;
- (void)_updateCurrentSelections:(id)arg1 shouldRevertValue:(_Bool)arg2;
- (void)logLifestyleCategoriesPageViewEvent:(double)arg1;
- (void)updateUserInterestLocally:(id)arg1;
- (void)updateLifestyleCategoriesWithAllUpdatesEUD:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)fetchLifestyleCategoriesWithAllUpdatesEUD:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1 experimentManager:(id)arg2;

@end

