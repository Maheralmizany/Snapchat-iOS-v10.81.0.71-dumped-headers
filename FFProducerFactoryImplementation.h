//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FFProducerFactory-Protocol.h"

@class NSString;
@protocol SPSettings;

@interface FFProducerFactoryImplementation : NSObject <FFProducerFactory>
{
    id <SPSettings> _settings;
}

@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)webpProducerForPath:(id)arg1;
- (void)webpProducerForPath:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)lazyProducerForFramesList:(id)arg1;
- (id)ffProducerForFramesList:(id)arg1 gender:(unsigned long long)arg2 framesList:(id)arg3 useCompressed:(_Bool)arg4;
- (id)ffProducerForScenario:(id)arg1 gender:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

