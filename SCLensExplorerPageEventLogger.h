//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerPageEventLoggerProtocol-Protocol.h"

@class NSString, SCLensExplorerEventContext, SCLensTimeTracker;
@protocol SCLensExplorerLoggerProtocol;

@interface SCLensExplorerPageEventLogger : NSObject <SCLensExplorerPageEventLoggerProtocol>
{
    SCLensExplorerEventContext *_eventContext;
    id <SCLensExplorerLoggerProtocol> _rankingLogger;
    SCLensTimeTracker *_pageViewTimeTracker;
}

- (void).cxx_destruct;
- (void)logPageViewEvent;
- (void)logPageOpenEventPageTypeSpecific:(id)arg1;
- (id)initWithRankingLogger:(id)arg1 eventContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

