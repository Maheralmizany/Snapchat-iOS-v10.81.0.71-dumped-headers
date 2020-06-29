//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FFProducer, NSArray, NSObject, NSString, SPScenario;
@protocol FFFrameProducer, OS_dispatch_queue;

@protocol FFProducerFactory <NSObject>
- (void)webpProducerForPath:(NSString *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(id <FFFrameProducer>))arg3;
- (id <FFFrameProducer>)lazyProducerForFramesList:(NSArray *)arg1;
- (id <FFFrameProducer>)ffProducerForFramesList:(SPScenario *)arg1 gender:(unsigned long long)arg2 framesList:(NSArray *)arg3 useCompressed:(_Bool)arg4;
- (FFProducer *)ffProducerForScenario:(SPScenario *)arg1 gender:(unsigned long long)arg2;
@end
