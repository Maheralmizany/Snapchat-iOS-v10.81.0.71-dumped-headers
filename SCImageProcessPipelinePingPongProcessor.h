//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCImageProcessContext;
@protocol SCImageProcessGLWrapper, SCImageProcessPipelineOutputRendering;

@interface SCImageProcessPipelinePingPongProcessor : NSObject
{
    SCImageProcessContext *_context;
    id <SCImageProcessGLWrapper> _glWrapper;
    id <SCImageProcessPipelineOutputRendering> _outputRenderer;
    CDStruct_4d16ab64 _textureContainer;
    unsigned int _inputTextureUnit;
    unsigned int _outputTextureUnit;
    unsigned long long _nextOutputTextureIndex;
}

@property(readonly, nonatomic) unsigned long long nextOutputTextureIndex; // @synthesize nextOutputTextureIndex=_nextOutputTextureIndex;
- (void).cxx_destruct;
- (_Bool)_runCommand:(id)arg1 runContext:(id)arg2 inputPixelSize:(CDStruct_5e758c1a)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 orientation:(long long)arg5 viewportTransform:(struct CGAffineTransform)arg6 negativeSpaceColor:(id)arg7 error:(id *)arg8;
- (_Bool)processCommands:(id)arg1 runContext:(id)arg2 initialOutputTextureIndex:(unsigned long long)arg3 inputPixelSize:(CDStruct_5e758c1a)arg4 outputPixelSize:(CDStruct_5e758c1a)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 customBackgroundColor:(id)arg8 drawLastCommandIntoOutputBuffer:(_Bool)arg9 error:(id *)arg10;
- (id)initWithContext:(id)arg1 glWrapper:(id)arg2 outputRenderer:(id)arg3 pingPongTextureContainer:(CDStruct_4d16ab64)arg4 inputTextureUnit:(unsigned int)arg5 outputTextureUnit:(unsigned int)arg6;

@end

