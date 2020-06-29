//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsAPIListener-Protocol.h"
#import "SCJobProcessor-Protocol.h"

@class NSOperationQueue, NSString, SCLazy;

@interface SCBloopsAssetsPrefetchingJobProcessor : NSObject <SCBloopsAPIListener, SCJobProcessor>
{
    NSOperationQueue *_queue;
    unsigned long long _scenariosLimit;
    SCLazy *_bloopsAPI;
    _Bool _needLoadFullscrenResources;
    CDUnknownBlockType _completionCallback;
}

- (void).cxx_destruct;
- (id)_bloopsTargetNotInitializedError;
- (void)_startAssetsPrefetching;
- (void)bloopsAPI:(id)arg1 didChangeBloopsFeatureStatus:(_Bool)arg2;
- (void)processJobWithInput:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)initWithBloopsAPI:(id)arg1 scenariosLimit:(unsigned long long)arg2 needLoadFullscrenResources:(_Bool)arg3 qualityOfService:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

