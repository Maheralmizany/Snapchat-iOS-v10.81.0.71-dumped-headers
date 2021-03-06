//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString, SCCheetahFeedAst, SCEventListenerAnnouncer;
@protocol SCPerforming;

@interface SCSendToRanker : NSObject <SCEventAnnouncing>
{
    id <SCPerforming> _performer;
    SCCheetahFeedAst *_ast;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSNumber *_streakExpirationWarningMilliSeconds;
    NSMutableDictionary *_rankingFeaturesByRecipient;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (_Bool)_shouldFilterBasedOnScore:(float)arg1;
- (id)_reorderRecipients:(id)arg1;
- (void)_announceRankingFeaturesWithRankableObject:(id)arg1;
- (id)reorderRecipients:(id)arg1;
- (id)initWithAST:(id)arg1 streakExpirationWarningMilliSeconds:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

