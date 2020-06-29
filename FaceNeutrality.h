//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FaceNeutralityClassifierNN, FaceNeutralityNN, NSDictionary, NSError, ProtectedCoreML;
@protocol OS_dispatch_queue;

@interface FaceNeutrality : NSObject
{
    struct shared_ptr<FaceNeutralityCpp> faceNeutralityCpp;
    NSDictionary *_resourcesPaths;
    FaceNeutralityNN *_mainNN;
    FaceNeutralityClassifierNN *_classificationNN;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_classificationNNInitError;
    NSError *_mainNNInitError;
    ProtectedCoreML *_protectedCoreML;
}

@property(retain, nonatomic) ProtectedCoreML *protectedCoreML; // @synthesize protectedCoreML=_protectedCoreML;
@property(retain) NSError *mainNNInitError; // @synthesize mainNNInitError=_mainNNInitError;
@property(retain) NSError *classificationNNInitError; // @synthesize classificationNNInitError=_classificationNNInitError;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) FaceNeutralityClassifierNN *classificationNN; // @synthesize classificationNN=_classificationNN;
@property(retain, nonatomic) FaceNeutralityNN *mainNN; // @synthesize mainNN=_mainNN;
@property(retain, nonatomic) NSDictionary *resourcesPaths; // @synthesize resourcesPaths=_resourcesPaths;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getNeutralizedFace:(id)arg1 landmarks:(id)arg2 syncGroup:(id)arg3 error:(id *)arg4;
- (id)getMLMultiArray:(struct Mat)arg1 shift:(float)arg2 scale:(float)arg3;
- (vector_ca7c2a8c)NSArrayLandmarksToMatFLandmarks:(id)arg1;
- (struct Mat)callClassificationModel:(struct Mat)arg1;
- (struct Mat)callMainModel:(struct Mat)arg1;
- (void)multiArrayToMat2D:(id)arg1 mat:(struct Mat *)arg2;
- (void)multiArrayToMat:(id)arg1 mat:(struct Mat *)arg2;
- (void)initializeMainModelNNWithGroup:(id)arg1;
- (void)initializeClassificationModelNN;
- (void)initializeModelsWithSyncGroup:(id)arg1;
- (void)getNeutralizedFace:(id)arg1 landmarks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)releaseModels;
- (void)initializeModels;
@property(readonly, nonatomic) _Bool modelsReady;
- (id)initWithPaths:(id)arg1 protectedCoreML:(id)arg2 error:(id *)arg3;

@end
