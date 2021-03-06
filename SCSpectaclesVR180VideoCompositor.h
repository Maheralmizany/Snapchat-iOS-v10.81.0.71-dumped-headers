//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActivityItemCompositing-Protocol.h"

@class AVAssetExportSession, CADisplayLink, NSString, NSURL;
@protocol SCActivityItemCompositingDelegate;

@interface SCSpectaclesVR180VideoCompositor : NSObject <SCActivityItemCompositing>
{
    AVAssetExportSession *_exporter;
    NSURL *_outputUrl;
    CADisplayLink *_displayLink;
    id <SCActivityItemCompositingDelegate> _compositingDelegate;
}

@property(nonatomic) __weak id <SCActivityItemCompositingDelegate> compositingDelegate; // @synthesize compositingDelegate=_compositingDelegate;
- (void).cxx_destruct;
- (id)_errorWithCode:(long long)arg1;
- (void)_exporterFinished;
- (void)_pollExporterProgress:(id)arg1;
- (void)createCompositeFromItems:(id)arg1;
- (void)dealloc;
- (id)initWithOutputUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

