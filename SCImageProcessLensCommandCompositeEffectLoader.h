//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessLensCommandEffectLoading-Protocol.h"

@class NSString, SCLensCommandCompositeEffectDescriptor;
@protocol SCLensLoggerConsumptionTrackingProviding;

@interface SCImageProcessLensCommandCompositeEffectLoader : NSObject <SCImageProcessLensCommandEffectLoading>
{
    SCLensCommandCompositeEffectDescriptor *_lensCommandCompositeEffectDescriptor;
    id <SCLensLoggerConsumptionTrackingProviding> _lensLogger;
}

- (void).cxx_destruct;
- (void)loadEffectSynchronouslyWithEffectComponent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCompositeLensCommandCompositeEffectDescriptor:(id)arg1 lensLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

