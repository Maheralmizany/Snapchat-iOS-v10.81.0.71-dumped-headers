//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsUserIdsProviding-Protocol.h"

@class NSString, SCLazy;

@interface SCBloopsUserIdsProvider : NSObject <SCBloopsUserIdsProviding>
{
    NSString *_username;
    NSString *_conversationId;
    SCLazy *_usernameToSnapchatterFetcher;
}

- (void).cxx_destruct;
- (void)fetchUserIdsWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUsername:(id)arg1 conversationId:(id)arg2 usernameToSnapchatterFetcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
