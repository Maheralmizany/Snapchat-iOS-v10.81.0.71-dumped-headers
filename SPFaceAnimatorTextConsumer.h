//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPFaceAnimatorConsumer-Protocol.h"
#import "SPFaceAnimatorConsumerDelegate-Protocol.h"

@class F2FTextAnimator, FFProducer, NSString, SPText;
@protocol SPFaceAnimatorConsumer, SPFaceAnimatorConsumerDelegate, SPFaceAnimatorTextConsumerAnalytics, SPFontProvider, SPTextProcessor;

@interface SPFaceAnimatorTextConsumer : NSObject <SPFaceAnimatorConsumerDelegate, SPFaceAnimatorConsumer>
{
    _Bool _useCompressedImages;
    _Bool _cacheAfterTextRender;
    _Bool _transparentFrames;
    _Bool _isBuffersInitialized;
    id <SPFaceAnimatorConsumerDelegate> _delegate;
    id <SPFaceAnimatorConsumer> _cacheConsumer;
    SPText *_text;
    id <SPFontProvider> _fontProvider;
    NSString *_resourcesPath;
    FFProducer *_ffProducer;
    id <SPFaceAnimatorTextConsumerAnalytics> _analytics;
    id <SPTextProcessor> _textProcessor;
    F2FTextAnimator *_textAnimator;
    unsigned long long _framesCount;
}

@property(nonatomic) unsigned long long framesCount; // @synthesize framesCount=_framesCount;
@property _Bool isBuffersInitialized; // @synthesize isBuffersInitialized=_isBuffersInitialized;
@property(retain, nonatomic) F2FTextAnimator *textAnimator; // @synthesize textAnimator=_textAnimator;
@property(nonatomic) _Bool transparentFrames; // @synthesize transparentFrames=_transparentFrames;
@property(retain, nonatomic) id <SPTextProcessor> textProcessor; // @synthesize textProcessor=_textProcessor;
@property(retain, nonatomic) id <SPFaceAnimatorTextConsumerAnalytics> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) FFProducer *ffProducer; // @synthesize ffProducer=_ffProducer;
@property(copy, nonatomic) NSString *resourcesPath; // @synthesize resourcesPath=_resourcesPath;
@property(retain, nonatomic) id <SPFontProvider> fontProvider; // @synthesize fontProvider=_fontProvider;
@property(copy, nonatomic) SPText *text; // @synthesize text=_text;
@property(nonatomic) _Bool cacheAfterTextRender; // @synthesize cacheAfterTextRender=_cacheAfterTextRender;
@property(retain, nonatomic) id <SPFaceAnimatorConsumer> cacheConsumer; // @synthesize cacheConsumer=_cacheConsumer;
@property(nonatomic) _Bool useCompressedImages; // @synthesize useCompressedImages=_useCompressedImages;
@property(nonatomic) __weak id <SPFaceAnimatorConsumerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)faceAnimatorConsumerDidFinishSuccessfully:(id)arg1;
- (void)faceAnimatorConsumer:(id)arg1 didFailWithError:(id)arg2;
- (void)faceAnimatorConsumerDidCancel:(id)arg1;
- (void)finish;
- (void)consume:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isReadyToConsume;
- (id)postProcessFrame:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)frameProcessingStarted:(unsigned long long)arg1;
- (void)framePreloadingFinished;
- (void)framePreloadingStarted;
- (void)releaseBuffers;
- (void)initializeBuffers;
- (void)restart;
- (void)start:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *errorDomain;
- (id)initWithText:(id)arg1 transparentFrames:(_Bool)arg2 fontProvider:(id)arg3 resourcesPath:(id)arg4 producer:(id)arg5 cacheConsumer:(id)arg6 cacheAfterTextRender:(_Bool)arg7 textProcessor:(id)arg8 analytics:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

