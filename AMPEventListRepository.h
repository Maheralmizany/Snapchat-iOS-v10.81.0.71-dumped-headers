//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPDictionaryPersistor, AMPEventSerializer, AMPExperimentProvider, AMPFilePaths, AMPJsonDeserializer, AMPJsonPersistor, AMPJsonSerializer;

@interface AMPEventListRepository : NSObject
{
    AMPDictionaryPersistor *_dictionaryPersistor;
    AMPEventSerializer *_eventSerializer;
    AMPFilePaths *_filePaths;
    AMPExperimentProvider *_experimentProvider;
    AMPJsonSerializer *_jsonSerializer;
    AMPJsonPersistor *_jsonPersistor;
    AMPJsonDeserializer *_jsonDeserializer;
}

@property(retain, nonatomic) AMPJsonDeserializer *jsonDeserializer; // @synthesize jsonDeserializer=_jsonDeserializer;
@property(retain, nonatomic) AMPJsonPersistor *jsonPersistor; // @synthesize jsonPersistor=_jsonPersistor;
@property(retain, nonatomic) AMPJsonSerializer *jsonSerializer; // @synthesize jsonSerializer=_jsonSerializer;
@property(retain, nonatomic) AMPExperimentProvider *experimentProvider; // @synthesize experimentProvider=_experimentProvider;
@property(retain, nonatomic) AMPFilePaths *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) AMPEventSerializer *eventSerializer; // @synthesize eventSerializer=_eventSerializer;
@property(retain, nonatomic) AMPDictionaryPersistor *dictionaryPersistor; // @synthesize dictionaryPersistor=_dictionaryPersistor;
- (void).cxx_destruct;
- (void)saveEventList:(id)arg1;
- (id)_convertFromDictionaryListToEventList:(id)arg1;
- (id)_fetchEventsFromLegacyPath;
- (id)_fetchEventsFromNewPath;
- (id)getEventList;
- (id)initWithDictionaryPersistor:(id)arg1 eventSerializer:(id)arg2 filePaths:(id)arg3 experimentProvider:(id)arg4 jsonSerializer:(id)arg5 jsonDeserializer:(id)arg6 jsonPersistor:(id)arg7;

@end

