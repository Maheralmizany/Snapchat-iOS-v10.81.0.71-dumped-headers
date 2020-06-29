//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCCameraScreenLensDataProviderSource;

@interface SCLensDataProviderProxy : NSProxy <SCTraceEnabled>
{
    id <SCCameraScreenLensDataProviderSource> _lensDataProviderSource;
}

- (void).cxx_destruct;
- (id)_lensDataProvider;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithLensDataProviderSource:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

