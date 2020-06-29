//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTranscodingProcessor-Protocol.h"

@class NSString, SCCancelableRequest, SCMultiSnapVideoSegmentedExportSession, SCVideoTranscodingRequest, SCVideoTranscodingRequestConfiguration, SCVideoTranscodingSession;

@interface SCVideoTranscodingProcessor : NSObject <SCTranscodingProcessor>
{
    SCVideoTranscodingRequest *_request;
    SCVideoTranscodingRequestConfiguration *_requestConfiguration;
    SCCancelableRequest *_cancelable;
    SCMultiSnapVideoSegmentedExportSession *_segmentedExportSession;
    SCVideoTranscodingSession *_videoTranscodingSession;
}

+ (id)performer;
@property(retain, nonatomic) SCVideoTranscodingSession *videoTranscodingSession; // @synthesize videoTranscodingSession=_videoTranscodingSession;
@property(retain, nonatomic) SCMultiSnapVideoSegmentedExportSession *segmentedExportSession; // @synthesize segmentedExportSession=_segmentedExportSession;
@property(retain, nonatomic) SCCancelableRequest *cancelable; // @synthesize cancelable=_cancelable;
@property(retain, nonatomic) SCVideoTranscodingRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(retain, nonatomic) SCVideoTranscodingRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)_shouldEnableContentAdaptiveVideoExportWithVideoAsset:(id)arg1 rawDataURL:(id)arg2;
- (_Bool)_shouldBlenOverlay;
- (id)_createVideoExportImageProcessorWithVideoAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)_createTranscodingConfigurationWithVideoAsset:(id)arg1;
- (void)_transcodeVideoAtUrl:(id)arg1 segmentInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_processSegmentAtIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)processWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

