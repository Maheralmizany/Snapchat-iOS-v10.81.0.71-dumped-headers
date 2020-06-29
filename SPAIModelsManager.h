//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPAiModelsCache, SPFaceNeutralization, SPFaceSegmentation, SPLandmarksExtractor, SPProcessorsManager;
@protocol OS_dispatch_queue, SPAIModelsService, SPBeautificationService, SPGenderClassifier, SPRemoteSettingsProvider;

@interface SPAIModelsManager : NSObject
{
    _Bool _cleaned;
    id <SPGenderClassifier> _genderClassifier;
    id <SPRemoteSettingsProvider> _remoteSettingsProvider;
    id <SPAIModelsService> _modelsService;
    id <SPBeautificationService> _beautificationService;
    SPLandmarksExtractor *_landmarksExtractor;
    SPFaceSegmentation *_faceSegmentation;
    SPFaceNeutralization *_faceNeutrality;
    SPProcessorsManager *_processorsManager;
    SPAiModelsCache *_aiModelsCache;
    NSArray *_externalModelsConsumers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic) _Bool cleaned; // @synthesize cleaned=_cleaned;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSArray *externalModelsConsumers; // @synthesize externalModelsConsumers=_externalModelsConsumers;
@property(retain, nonatomic) SPAiModelsCache *aiModelsCache; // @synthesize aiModelsCache=_aiModelsCache;
@property(retain, nonatomic) SPProcessorsManager *processorsManager; // @synthesize processorsManager=_processorsManager;
@property(retain, nonatomic) SPFaceNeutralization *faceNeutrality; // @synthesize faceNeutrality=_faceNeutrality;
@property(retain, nonatomic) SPFaceSegmentation *faceSegmentation; // @synthesize faceSegmentation=_faceSegmentation;
@property(retain, nonatomic) SPLandmarksExtractor *landmarksExtractor; // @synthesize landmarksExtractor=_landmarksExtractor;
@property(retain, nonatomic) id <SPBeautificationService> beautificationService; // @synthesize beautificationService=_beautificationService;
@property(retain, nonatomic) id <SPAIModelsService> modelsService; // @synthesize modelsService=_modelsService;
@property(retain, nonatomic) id <SPRemoteSettingsProvider> remoteSettingsProvider; // @synthesize remoteSettingsProvider=_remoteSettingsProvider;
@property(retain, nonatomic) id <SPGenderClassifier> genderClassifier; // @synthesize genderClassifier=_genderClassifier;
- (void).cxx_destruct;
- (void)_clearOutdateAiModelsCache;
- (void)releaseModels;
- (void)initializeModels;
- (void)downloadResourcesIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadResourcesIfNeeded;
- (id)init;

@end
