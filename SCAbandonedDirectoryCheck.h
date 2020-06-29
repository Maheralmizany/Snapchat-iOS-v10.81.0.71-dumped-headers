//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedDatastore-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface SCAbandonedDirectoryCheck : NSObject <SCManagedDatastore>
{
    NSURL *_rootDirectory;
    double _maxTimeUnmodified;
    NSDictionary *_metrics;
}

+ (_Bool)markDirectory:(id)arg1;
- (void).cxx_destruct;
- (id)reportMetrics;
- (void)handleEmergencyDiskConditionWithDispatchGroup:(id)arg1;
- (void)removeAllUserSessionDataAsync:(id)arg1;
- (void)removeExpiredContentAsync:(id)arg1 reason:(unsigned long long)arg2 dispatchGroup:(id)arg3;
- (id)kindName;
- (void)sweepDirectoriesWhileIgnoring:(id)arg1 dispatchGroup:(id)arg2;
- (_Bool)_shouldIgnoreDirectory:(id)arg1 toIgnore:(id)arg2;
- (id)initWithDirectory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

