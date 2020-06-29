//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCFriendStoring-Protocol.h"

@class NSString, SCLazy;

@interface SCComposerPeopleFriendStore : NSObject <SCCFriendStoring>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataTracker;
}

+ (CDUnknownBlockType)getFriendsCompletionHandlerForCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (CDUnknownBlockType)onFriendsUpdatedWithCallback:(CDUnknownBlockType)arg1;
- (void)addFriendWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getBestFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

