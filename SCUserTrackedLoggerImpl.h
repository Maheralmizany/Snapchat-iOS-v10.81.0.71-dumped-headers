//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserTrackedLogger-Protocol.h"

@class NSString, SCLogger;

@interface SCUserTrackedLoggerImpl : NSObject <SCUserTrackedLogger>
{
    SCLogger *_logger;
    NSString *_username;
    NSString *_userId;
}

- (void).cxx_destruct;
- (void)logUserTrackedEvent:(id)arg1;
- (id)initWithLogger:(id)arg1 username:(id)arg2 userId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

