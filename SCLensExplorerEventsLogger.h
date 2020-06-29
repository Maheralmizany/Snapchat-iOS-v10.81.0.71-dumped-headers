//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerLoggerProtocol-Protocol.h"

@class NSString, SCDiscoverFeedLogger;
@protocol SCLensExplorerLoggerUtils;

@interface SCLensExplorerEventsLogger : NSObject <SCLensExplorerLoggerProtocol>
{
    SCDiscoverFeedLogger *_discoverFeedLogger;
    id <SCLensExplorerLoggerUtils> _loggingUtils;
}

- (void).cxx_destruct;
- (void)flushWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2 extraData:(id)arg3;
@property(readonly, nonatomic) id <SCLensExplorerLoggerUtils> loggingUtils; // @synthesize loggingUtils=_loggingUtils;
- (void)logEvent:(id)arg1 data:(id)arg2;
- (id)initWithQueue:(id)arg1 experimentManager:(id)arg2 snapTokenProvider:(id)arg3 requestManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

