//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCVideoTranscodingRequestScheduling-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, SCExperimentManager;
@protocol SCPerforming;

@interface SCVideoTranscodingRequestScheduler : NSObject <SCVideoTranscodingRequestScheduling>
{
    SCExperimentManager *_experimentManager;
    id <SCPerforming> _performer;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_videoTranscodingProcessors;
}

@property(retain, nonatomic) NSMutableDictionary *videoTranscodingProcessors; // @synthesize videoTranscodingProcessors=_videoTranscodingProcessors;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void).cxx_destruct;
- (void)cancelVideoRequest:(id)arg1;
- (void)submitVideoRequest:(id)arg1 configuration:(id)arg2;
- (id)initWithPerformer:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

