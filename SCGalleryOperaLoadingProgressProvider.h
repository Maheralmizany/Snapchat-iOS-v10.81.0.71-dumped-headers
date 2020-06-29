//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLoadingProgressProvider-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SCPerforming;

@interface SCGalleryOperaLoadingProgressProvider : NSObject <SCOperaLoadingProgressProvider>
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_requestIdToLoadingProgressHandler;
}

- (void).cxx_destruct;
- (void)stopToMonitorProgressWithRequestId:(id)arg1;
- (void)startToMonitorProgressWithRequestId:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (void)didReceiveProgressUpdateWithRequestId:(id)arg1 progress:(double)arg2;
- (id)initWithPerformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
