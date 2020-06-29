//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, SCObservable;

@protocol SCSnapchattersObservableRepository
- (SCObservable *)localAndSearchedSnapchatterObservableForUserIds:(NSArray *)arg1;
- (SCObservable *)snapchatterObservableWithUserIds:(NSArray *)arg1;
- (SCObservable *)snapchatterObservableWithUserId:(NSString *)arg1;
- (SCObservable *)remoteSnapchatterObservableWithQuery:(NSString *)arg1;
- (SCObservable *)nonFriendSnapchatterObservable;
- (SCObservable *)bestFriendSnapchatterObservable;
- (SCObservable *)suggestedSnapchatterObservableForSuggestionPage:(unsigned int)arg1;
- (SCObservable *)outgoingSnapchatterObservable;
- (SCObservable *)incomingSnapchatterObservable;
@end
