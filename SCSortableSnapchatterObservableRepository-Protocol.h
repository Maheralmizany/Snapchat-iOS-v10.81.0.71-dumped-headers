//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCObservable;

@protocol SCSortableSnapchatterObservableRepository <NSObject>
@property(readonly, nonatomic) SCObservable *snapStarsObservable;
@property(readonly, nonatomic) SCObservable *allFriendsObservable;
@property(readonly, nonatomic) SCObservable *outgoingSnapchatterObservable;
@property(readonly, nonatomic) SCObservable *recentMutualFriendsObservable;
@property(readonly, nonatomic) SCObservable *recentFriendsObservable;
@property(readonly, nonatomic) SCObservable *bestFriendsObservable;
- (void)warmUp;
- (SCObservable *)quickAddObservableForSuggestionPage:(unsigned int)arg1;
- (SCObservable *)localAndRemoteSnapchattersObservableForUserIds:(NSArray *)arg1;
- (SCObservable *)localSnapchattersObservableForUserIds:(NSArray *)arg1;
- (SCObservable *)mutualFriendsObservableForLetterKey:(NSString *)arg1;
- (SCObservable *)friendsObservableForLetterKey:(NSString *)arg1;
- (SCObservable *)searchLocalAndRemoteNonFriendsObservableForQuery:(NSString *)arg1;
- (SCObservable *)searchMutualFriendsObservableForQuery:(NSString *)arg1;
- (SCObservable *)searchFriendsObservableForQuery:(NSString *)arg1;
@end

