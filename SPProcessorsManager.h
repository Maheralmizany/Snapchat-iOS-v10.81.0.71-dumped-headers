//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIFKVONSObject.h"

#import "SPExternalModelsConsumer-Protocol.h"

@class F2FProcessorsManager, NSDictionary, NSError, NSObject, NSString, SPAIModelsServiceResult, SPApplicationStateHolder, SPSharedQueuesHolder;
@protocol OS_dispatch_queue, SPAIModelsService, SPExternalSettingsProvider, SPSettings, SPStringsProvider;

@interface SPProcessorsManager : AIFKVONSObject <SPExternalModelsConsumer>
{
    NSDictionary *_externalResourcesPath;
    id <SPSettings> _settings;
    SPSharedQueuesHolder *_sharedQueuesHolder;
    SPApplicationStateHolder *_applicationStateHolder;
    id <SPAIModelsService> _modelsService;
    id <SPStringsProvider> _stringsProvider;
    id <SPExternalSettingsProvider> _externalSettingsProvider;
    F2FProcessorsManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    SPAIModelsServiceResult *_aiModelsServiceResult;
    NSError *_initializationError;
}

@property(retain, nonatomic) NSError *initializationError; // @synthesize initializationError=_initializationError;
@property(retain, nonatomic) SPAIModelsServiceResult *aiModelsServiceResult; // @synthesize aiModelsServiceResult=_aiModelsServiceResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) F2FProcessorsManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) id <SPExternalSettingsProvider> externalSettingsProvider; // @synthesize externalSettingsProvider=_externalSettingsProvider;
@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(retain, nonatomic) id <SPAIModelsService> modelsService; // @synthesize modelsService=_modelsService;
@property(retain, nonatomic) SPApplicationStateHolder *applicationStateHolder; // @synthesize applicationStateHolder=_applicationStateHolder;
@property(retain, nonatomic) SPSharedQueuesHolder *sharedQueuesHolder; // @synthesize sharedQueuesHolder=_sharedQueuesHolder;
@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSDictionary *externalResourcesPath; // @synthesize externalResourcesPath=_externalResourcesPath;
- (void).cxx_destruct;
- (id)_generateErrorFromException:(const struct exception *)arg1;
- (_Bool)isExternalResourcesBundled;
- (id)externalResourcesURLs;
- (id)generatePhotoQualityFeaturesFromSegmentationReqult:(id)arg1 error:(id *)arg2;
- (void)generateIconFromSegmentationReqult:(id)arg1 gender:(unsigned long long)arg2 hairStyle:(id)arg3 size:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;
- (void)beautifyImage:(id)arg1 landmarks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)releaseWarpingProcessor:(id)arg1;
- (id)getHairStyleSelectionManager:(id *)arg1;
- (id)getWarpingProcessor:(id)arg1 swappedPersons:(_Bool)arg2 metricsReporter:(id)arg3 rgbaScenario:(_Bool)arg4 isLensBeautificationUsed:(_Bool)arg5 error:(id *)arg6;
- (void)obtainResourcesPaths;
- (void)releaseModels;
- (void)initializeModels;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
