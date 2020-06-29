//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPFaceAnimatorConsumer-Protocol.h"

@class NSString;
@protocol SPFaceAnimatorConsumerDelegate;

@interface SPFaceAnimatorDummyConsumer : NSObject <SPFaceAnimatorConsumer>
{
    id <SPFaceAnimatorConsumerDelegate> _delegate;
}

@property(nonatomic) __weak id <SPFaceAnimatorConsumerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

