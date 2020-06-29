//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendToListsLogging-Protocol.h"

@class NSString;
@protocol SCPerforming;

@interface SCSendToListsLogger : NSObject <SCSendToListsLogging>
{
    NSString *_sessionId;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)logListSnapchatterCountPerEmoji:(id)arg1;
- (void)logListEditWithListDataModels:(id)arg1;
- (void)logListDeleteWithListDataModels:(id)arg1;
- (void)logListCreateWithListDataModels:(id)arg1 isAutogenerated:(_Bool)arg2;
- (id)initWithSessionId:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

