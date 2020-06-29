//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPReenactmentClientsManager-Protocol.h"
#import "SPReenactmentServiceOutput-Protocol.h"

@class NSHashTable, NSMapTable, NSString;
@protocol SPReenactmentService;

@interface SPReenactmentClientsManagerImplementation : NSObject <SPReenactmentServiceOutput, SPReenactmentClientsManager>
{
    id <SPReenactmentService> _reenactmentService;
    NSHashTable *_previewsOutputs;
    NSHashTable *_fullLengthPreviewsOutputs;
    NSHashTable *_fullscreenOutputs;
    NSHashTable *_oneFramePreviewsOutputs;
    NSMapTable *_previewRequests;
    NSMapTable *_fullLengthPreviewRequests;
    NSMapTable *_fullscreenRequests;
    NSMapTable *_oneFramePreviewRequests;
}

@property(retain, nonatomic) NSMapTable *oneFramePreviewRequests; // @synthesize oneFramePreviewRequests=_oneFramePreviewRequests;
@property(retain, nonatomic) NSMapTable *fullscreenRequests; // @synthesize fullscreenRequests=_fullscreenRequests;
@property(retain, nonatomic) NSMapTable *fullLengthPreviewRequests; // @synthesize fullLengthPreviewRequests=_fullLengthPreviewRequests;
@property(retain, nonatomic) NSMapTable *previewRequests; // @synthesize previewRequests=_previewRequests;
@property(retain, nonatomic) NSHashTable *oneFramePreviewsOutputs; // @synthesize oneFramePreviewsOutputs=_oneFramePreviewsOutputs;
@property(retain, nonatomic) NSHashTable *fullscreenOutputs; // @synthesize fullscreenOutputs=_fullscreenOutputs;
@property(retain, nonatomic) NSHashTable *fullLengthPreviewsOutputs; // @synthesize fullLengthPreviewsOutputs=_fullLengthPreviewsOutputs;
@property(retain, nonatomic) NSHashTable *previewsOutputs; // @synthesize previewsOutputs=_previewsOutputs;
@property(retain, nonatomic) id <SPReenactmentService> reenactmentService; // @synthesize reenactmentService=_reenactmentService;
- (void).cxx_destruct;
- (void)removeRequest:(id)arg1 forOutput:(id)arg2 inRequests:(id)arg3;
- (void)prefetchFullscreenScenarios;
- (void)prefetchFullsizePreviewScenarios;
- (void)prefetchOneFramePreviewScenarios;
- (void)prefetchPreviewScenarios;
- (id)filterOutputs:(id)arg1 withRequests:(id)arg2 targetRequest:(id)arg3;
- (void)removeFullscreenOutput:(id)arg1;
- (void)setFullscreenOutput:(id)arg1 withRequests:(id)arg2;
- (void)removeFullLengthPreviewsOutput:(id)arg1;
- (void)setFullLengthPreviewsOutput:(id)arg1 withRequests:(id)arg2;
- (void)removeOneFramePreviewsOutput:(id)arg1;
- (void)setOneFramePreviewsOutput:(id)arg1 withRequests:(id)arg2;
- (void)removePreviewsOutput:(id)arg1;
- (void)setPreviewsOutput:(id)arg1 withRequests:(id)arg2;
- (void)didFailOneFramePreviewReenactmentForRequest:(id)arg1 error:(id)arg2;
- (void)didFinishOneFramePreviewReenactmentResult:(id)arg1;
- (void)willStartFullScreenReenactmentForRequest:(id)arg1 progress:(id)arg2;
- (void)didFailFullScreenReenactmentForRequest:(id)arg1 error:(id)arg2;
- (void)didFinishReenactment:(id)arg1;
- (void)didReadyToShowReenactment:(id)arg1;
- (void)didFailFullsizePreviewReenactmentForRequest:(id)arg1 error:(id)arg2;
- (void)didFinishFullsizePreviewReenactmentResult:(id)arg1;
- (void)didReadyToShowFullsizePreviewReenactmentResult:(id)arg1;
- (void)didFailPreviewReenactmentForRequest:(id)arg1 error:(id)arg2;
- (void)didFinishPreviewReenactmentResult:(id)arg1;
- (void)didReadyToShowPreviewReenactmentResult:(id)arg1;
- (void)stopPrefetchingOneFramePreviewScenariosForOutput:(id)arg1;
- (void)prefetchOneFramePreviewScenariosWithRequests:(id)arg1 forOutput:(id)arg2;
- (void)stopPrefetchingFullscreenScenariosForOutput:(id)arg1;
- (void)prefetchFullscreenScenariosWithRequests:(id)arg1 forOutput:(id)arg2;
- (void)stopPrefetchingFullsizePreviewScenariosForOutput:(id)arg1;
- (void)prefetchFullsizePreviewScenariosWithRequests:(id)arg1 forOutput:(id)arg2;
- (void)stopPrefetchingPreviewScenariosForOutput:(id)arg1;
- (void)prefetchPreviewScenariosWithRequests:(id)arg1 forOutput:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

