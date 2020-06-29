//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPAppStateProvider, AMPDictionaryPersistor, AMPEventConfigurer, AMPEventSerializer, AMPExperimentProvider, AMPJsonDeserializer, AMPJsonPersistor, AMPPropertyListPersistor, AMPTimerProvider, NSDictionary, NSMutableOrderedSet, NSOperationQueue, SCABlizzardConfig, SCLogger, SCTimeProvider;

@interface AMPEventLoggerConstructorV2 : NSObject
{
    SCABlizzardConfig *_config;
    NSOperationQueue *_loggingQueue;
    SCTimeProvider *_timeProvider;
    AMPEventConfigurer *_eventConfigurer;
    CDUnknownBlockType _userCheck;
    AMPTimerProvider *_timerProvider;
    CDUnknownBlockType _tokenProvider;
    AMPDictionaryPersistor *_dictPersistor;
    AMPPropertyListPersistor *_plistPersistor;
    AMPEventSerializer *_eventSerializer;
    AMPJsonPersistor *_jsonPersistor;
    AMPJsonDeserializer *_jsonDeserializer;
    AMPAppStateProvider *_appStateProvider;
    SCLogger *_scLogger;
    NSDictionary *_loggerIndex;
    NSMutableOrderedSet *_sortedLoggers;
    struct NSDictionary *_qosToLoggersDict;
    AMPExperimentProvider *_experimentProvider;
}

@property(readonly, nonatomic) __weak AMPExperimentProvider *experimentProvider; // @synthesize experimentProvider=_experimentProvider;
@property(retain, nonatomic) NSDictionary *qosToLoggersDict; // @synthesize qosToLoggersDict=_qosToLoggersDict;
@property(retain, nonatomic) NSMutableOrderedSet *sortedLoggers; // @synthesize sortedLoggers=_sortedLoggers;
@property(retain, nonatomic) NSDictionary *loggerIndex; // @synthesize loggerIndex=_loggerIndex;
@property(retain, nonatomic) SCLogger *scLogger; // @synthesize scLogger=_scLogger;
@property(retain, nonatomic) AMPAppStateProvider *appStateProvider; // @synthesize appStateProvider=_appStateProvider;
@property(retain, nonatomic) AMPJsonDeserializer *jsonDeserializer; // @synthesize jsonDeserializer=_jsonDeserializer;
@property(retain, nonatomic) AMPJsonPersistor *jsonPersistor; // @synthesize jsonPersistor=_jsonPersistor;
@property(retain, nonatomic) AMPEventSerializer *eventSerializer; // @synthesize eventSerializer=_eventSerializer;
@property(retain, nonatomic) AMPPropertyListPersistor *plistPersistor; // @synthesize plistPersistor=_plistPersistor;
@property(retain, nonatomic) AMPDictionaryPersistor *dictPersistor; // @synthesize dictPersistor=_dictPersistor;
@property(copy, nonatomic) CDUnknownBlockType tokenProvider; // @synthesize tokenProvider=_tokenProvider;
@property(retain, nonatomic) AMPTimerProvider *timerProvider; // @synthesize timerProvider=_timerProvider;
@property(copy, nonatomic) CDUnknownBlockType userCheck; // @synthesize userCheck=_userCheck;
@property(retain, nonatomic) AMPEventConfigurer *eventConfigurer; // @synthesize eventConfigurer=_eventConfigurer;
@property(retain, nonatomic) SCTimeProvider *timeProvider; // @synthesize timeProvider=_timeProvider;
@property(retain, nonatomic) NSOperationQueue *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property(retain, nonatomic) SCABlizzardConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (struct NSDictionary *)_loggerDictFromQoSDict:(id)arg1;
- (id)_sortLoggers:(id)arg1;
- (id)_constructLoggerIndex;
- (id)_getCollectorUrl:(id)arg1;
- (id)_sortQosStrings:(id)arg1;
- (struct NSDictionary *)getQoSToLoggersDict;
- (struct NSArray *)getAllLoggers;
- (void)constructLoggers;
- (id)initWithConfig:(id)arg1 loggingQueue:(id)arg2 timeProvider:(id)arg3 eventConfigurer:(id)arg4 userCheckBlock:(CDUnknownBlockType)arg5 timerProvider:(id)arg6 tokenProvider:(CDUnknownBlockType)arg7 dictionaryPersistor:(id)arg8 plistPersistor:(id)arg9 jsonPersistor:(id)arg10 eventSerializer:(id)arg11 scLogger:(id)arg12 appStateProvider:(id)arg13 experimentProvider:(id)arg14;

@end

