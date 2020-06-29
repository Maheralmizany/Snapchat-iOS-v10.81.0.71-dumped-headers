//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCircumstanceEngine, SCExperimentManager, SCLazy, SCQueuePerformer, SCSessionRequestManager;

@interface SCAdSettingsService : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCExperimentManager *_experimentManager;
    SCCircumstanceEngine *_circumstanceEngine;
    SCLazy *_snapTokenProvider;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_logFaiedToGenerateSnapToken;
- (void)_logGrapheneMetricsWithStatusCode:(long long)arg1 request:(id)arg2;
- (void)_sendTargetingSettingsRequest:(id)arg1 snapToken:(id)arg2 endpoint:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_sendTargetingSettingsRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_sendSLCTargetingSettingsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)circumstanceEngine;
- (id)snapTokenProvider;
- (void)updateLifestyleCategoriesWithAllUpdatesEUD:(id)arg1 updatedUserInterestArray:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLifestyleCategoriesWithAllUpdatesEUD:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequestManager:(id)arg1 experimentManager:(id)arg2;

@end
