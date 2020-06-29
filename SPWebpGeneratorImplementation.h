//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPWebpGenerator-Protocol.h"

@class NSOperationQueue, NSString, SPStickersCache;
@protocol SPReenactmentClientsManager;

@interface SPWebpGeneratorImplementation : NSObject <SPWebpGenerator>
{
    NSOperationQueue *_queue;
    SPStickersCache *_stickersCache;
    id <SPReenactmentClientsManager> _reenactmentClientsManager;
}

- (void).cxx_destruct;
- (id)generateWebpImageForScenario:(id)arg1 personsSource:(id)arg2 highPriority:(_Bool)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithReenactmentClientsManager:(id)arg1 stickersCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
