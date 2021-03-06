//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDisposableObserverLifecycle, SCObservable, SCQueuePerformer;
@protocol SCSnapchattersDataFetching;

@interface SCNotificationBadgeCountObservableRepository : NSObject
{
    id <SCSnapchattersDataFetching> _snapchattersDataFetcher;
    SCQueuePerformer *_performer;
    SCDisposableObserverLifecycle *_disposableLifecycle;
    SCObservable *_badgeCountObservable;
}

@property(readonly, nonatomic) SCObservable *badgeCountObservable; // @synthesize badgeCountObservable=_badgeCountObservable;
- (void).cxx_destruct;
- (id)_createBadgeableFriendRequestsObservable:(id)arg1 snapchattersDataFetcher:(id)arg2 performerQueue:(id)arg3 observableLifecycle:(id)arg4;
- (id)_createFriendsFeedObservable:(id)arg1;
- (id)initWithFriendsFeed:(id)arg1 friendsFeedObservable:(id)arg2 incomingFriends:(id)arg3 snapchattersDataFetcher:(id)arg4;

@end

