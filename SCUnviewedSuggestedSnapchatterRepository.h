//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCSuggestedSnapchatterRepository-Protocol.h"

@class NSString, SCBehaviorSubject, SCObservable;
@protocol SCSnapchattersDataFetching, SCSnapchattersDataTracking;

@interface SCUnviewedSuggestedSnapchatterRepository : NSObject <SCSnapchattersDataRequestListener, SCSuggestedSnapchatterRepository>
{
    id <SCSnapchattersDataTracking> _dataTracker;
    id <SCSnapchattersDataFetching> _snapchattersDataProvider;
    SCBehaviorSubject *_unviewedSuggestionsObservable;
    struct mutex _lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_fetchAddFriendsSuggestions;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
@property(readonly, nonatomic) SCObservable *unviewedSuggestedFriendsForAddFriends;
- (id)initWithSnapchattersDataProvider:(id)arg1 dataTracker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

