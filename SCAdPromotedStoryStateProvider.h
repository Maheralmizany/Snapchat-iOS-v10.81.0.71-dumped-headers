//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAdPromotedStoryStateProviding-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCQueuePerformer;

@interface SCAdPromotedStoryStateProvider : NSObject <SCAdPromotedStoryStateProviding>
{
    SCQueuePerformer *_performer;
    NSMutableSet *_viewedAdSnapId;
    NSMutableDictionary *_mediaIdToFilePathDict;
    NSMutableDictionary *_mediaIdToResolutionDict;
}

- (void).cxx_destruct;
- (id)resolutionValueForMediaId:(id)arg1;
- (void)setResolutionValue:(id)arg1 forMediaId:(id)arg2;
- (id)filePathForMediaId:(id)arg1;
- (void)setFilePath:(id)arg1 forMediaId:(id)arg2;
- (_Bool)isAdSnapViewedForSnapId:(id)arg1;
- (void)markAdSnapViewedForSnapId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

