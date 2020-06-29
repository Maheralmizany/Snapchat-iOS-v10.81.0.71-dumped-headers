//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LSAGLView-Protocol.h"

@class EAGLContext, LSATexture, NSObject;
@protocol OS_dispatch_queue;

@interface LSAGLViewV2 : UIView <LSAGLView>
{
    EAGLContext *_context;
    struct LSAGLViewBuffers _buffers;
    struct LSAGLViewProgramPipeline _programPipeline;
    struct LSAGLViewVertexArrayObject _arrayObject;
    NSObject<OS_dispatch_queue> *_renderQueue;
    struct mutex _isGPUAllowedMutex;
    _Bool _isGPUAllowed;
    struct CGRect _currentViewBounds;
    struct CGSize _currentInputImageSize;
    struct CGSize _currentScaling;
    tmat3x3_04ea38a9 textureTransform;
    _Bool _currentInputImageIsRotated;
    _Bool _needToRecalculateViewGeometry;
    _Bool _needToUpdateDrawableStorage;
    struct mutex _retainedTextureMutex;
    LSATexture *_retainedTexture;
    long long _fillMode;
    long long _rotationMode;
}

+ (Class)layerClass;
@property(nonatomic) long long rotationMode; // @synthesize rotationMode=_rotationMode;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_releaseTexture;
- (id)_takeRetainedTexture;
- (void)_retainTexture:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)_enableNotificationsObservations;
- (void)_deleteOpenGLObjectsWithFinishingImmediately:(_Bool)arg1;
- (void)_syncUpdateDrawableStorage;
- (void)_recalculateViewGeometry;
- (void)_updateCurrentContextWithContext:(id)arg1;
- (void)layoutSubviews;
- (void)drawTexture:(id)arg1;
- (void)dealloc;
- (void)_configure;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

