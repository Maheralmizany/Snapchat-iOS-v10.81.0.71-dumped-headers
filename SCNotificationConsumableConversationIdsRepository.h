//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, NSString, SCBehaviorSubject, SCDisposableObserverLifecycle, SCExtensionSharedFile;
@protocol SCFriendsFeedDataCoordinating;

@interface SCNotificationConsumableConversationIdsRepository : NSObject
{
    NSOperationQueue *_operationQueue;
    SCExtensionSharedFile *_consumableConversationSharedFile;
    SCExtensionSharedFile *_extensionSharedFile;
    id <SCFriendsFeedDataCoordinating> _friendsFeedDataCoordinator;
    NSString *_userId;
    NSMutableSet *_extensionConsumableIds;
    SCBehaviorSubject *_friendsFeedBadgeObservable;
    SCDisposableObserverLifecycle *_observerLifecycle;
}

- (void).cxx_destruct;
- (void)_processFriendsFeedConsumableConversationIds:(id)arg1;
- (id)friendsFeedConsumableItemsObservable;
- (id)initWithFriendsFeedDataCoordinator:(id)arg1 userId:(id)arg2;

@end

