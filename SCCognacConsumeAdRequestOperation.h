//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacCypressRequestOperation.h"

@class NSString, SCCognacAdsPersistenceService, SCCognacConsumeAdRequestBody, SCCognacOperaDataSource;

@interface SCCognacConsumeAdRequestOperation : SCCognacCypressRequestOperation
{
    SCCognacConsumeAdRequestBody *_requestBody;
    NSString *_slotId;
    NSString *_appId;
    SCCognacOperaDataSource *_dataSource;
    SCCognacAdsPersistenceService *_persistenceService;
}

@property(retain, nonatomic) SCCognacAdsPersistenceService *persistenceService; // @synthesize persistenceService=_persistenceService;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)_handleAdItemDeleteCompletionWithSuccess:(_Bool)arg1;
- (void)_handleAdItemLookupCompletionWithItem:(id)arg1;
- (void)_callbackForFailure;
- (void)_callbackForSuccess;
- (void)_callbackForInvalidInputParam;
- (_Bool)_validateState;
- (void)callbackWithResponse:(id)arg1;
- (void)teardown;
- (void)run;
- (void)logAdConsumeEventWithSlotId:(id)arg1 requestId:(id)arg2 failReasons:(id)arg3 success:(_Bool)arg4;

@end
