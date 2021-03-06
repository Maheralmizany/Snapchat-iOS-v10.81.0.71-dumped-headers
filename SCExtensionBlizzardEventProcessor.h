//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCExtensionSharedDirectory, SCLazy;
@protocol SCPerforming;

@interface SCExtensionBlizzardEventProcessor : NSObject <SCTraceEnabled>
{
    NSString *_userId;
    SCExtensionSharedDirectory *_userBlizzardDirectory;
    id <SCPerforming> _performer;
    SCLazy *_graphene;
}

- (void).cxx_destruct;
- (void)_processEventsFile:(id)arg1;
- (void)_processEvents:(CDUnknownBlockType)arg1;
- (void)processEvents:(CDUnknownBlockType)arg1;
- (id)initWithUserId:(id)arg1 graphene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

