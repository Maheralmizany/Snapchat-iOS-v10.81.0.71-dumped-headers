//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCSearchLoggingHelperDelegate-Protocol.h"

@class NSDictionary, NSString, SCExperimentManager, SCSearchEventLogger, SCSearchGeneralLoggingHelper;
@protocol SCPerforming;

@interface SCSearchLogger : NSObject <SCEventListener, SCSearchLoggingHelperDelegate>
{
    SCSearchEventLogger *_searchEventLogger;
    SCExperimentManager *_experimentManager;
    id <SCPerforming> _performer;
    SCSearchGeneralLoggingHelper *_generalHelper;
    NSDictionary *_samplingRates;
    NSDictionary *_loggingAdaptersByAnnouncerIdentifiers;
}

- (void).cxx_destruct;
- (void)_resetGeneralHelperData;
- (id)_getUserLanguagePrefencesString;
- (_Bool)_shouldLogSampleForEvent:(id)arg1;
- (long long)getQueryId;
- (id)_getExtraDataForEvent:(id)arg1 identifier:(id)arg2 extraData:(id)arg3;
- (void)announceQueryWithExtraData:(id)arg1;
- (void)_logEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)resetData;
- (id)initWithExperimentManager:(id)arg1 searchEventLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

