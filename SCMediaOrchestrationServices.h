//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCMediaOrchestrationServices : NSObject
{
    SCLazy *_mediaOrchestratorLazy;
    SCLazy *_mediaDataIngesterLazy;
}

@property(readonly, nonatomic) SCLazy *mediaDataIngesterLazy; // @synthesize mediaDataIngesterLazy=_mediaDataIngesterLazy;
@property(readonly, nonatomic) SCLazy *mediaOrchestratorLazy; // @synthesize mediaOrchestratorLazy=_mediaOrchestratorLazy;
- (void).cxx_destruct;
- (id)initWithMediaOrchestratorLazy:(id)arg1 mediaDataIngesterLazy:(id)arg2;

@end

