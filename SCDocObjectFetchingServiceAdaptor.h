//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSnapchattersFetchedResultObserverRepository;

@interface SCDocObjectFetchingServiceAdaptor : NSObject
{
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
}

- (void).cxx_destruct;
- (id)blockedSnapchattersObserver;
- (id)incomingSnapchattersObserver;
- (id)outgoingSnapchattersObserver;
- (id)sortedIncomingSnapchatters;
- (id)sortedOutgoingSnapchatters;
- (struct NSDictionary *)usernameToBlockedSnapchatterMap;
- (struct NSDictionary *)userIdToBlockedSnapchatterMap;
- (struct NSDictionary *)usernameToIncomingSnapchatterMap;
- (struct NSDictionary *)userIdToIncomingSnapchatterMap;
- (struct NSDictionary *)usernameToOutgoingSnapchatterMap;
- (struct NSDictionary *)userIdToOutgoingSnapchatterMap;
- (id)initWithSnapchattersFetchedResultObserverRepository:(id)arg1;

@end

