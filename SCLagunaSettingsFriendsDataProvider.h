//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet;

@interface SCLagunaSettingsFriendsDataProvider : NSObject
{
    NSDictionary *_sectionKeyAndTitleMapper;
    NSArray *_sortedSectionKeys;
    NSArray *_allFriends;
    NSArray *_allSections;
    NSMutableSet *_sectionKeys;
    NSArray *_allFriendsCellViewModels;
    NSMutableArray *_searchResults;
    _Bool _hasSelectedFriends;
    _Bool _isSearching;
    NSMutableSet *_selectedUserIds;
}

@property(readonly, nonatomic) NSMutableSet *selectedUserIds; // @synthesize selectedUserIds=_selectedUserIds;
@property(readonly, nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(readonly, nonatomic) _Bool hasSelectedFriends; // @synthesize hasSelectedFriends=_hasSelectedFriends;
- (void).cxx_destruct;
- (id)selectedSnapchatters;
- (void)fetchSearchResult:(id)arg1;
- (long long)sectionIndexForTableIndexKey:(id)arg1;
- (id)_sectionKeyForFriend:(id)arg1;
- (id)_friendArraysBySectionKey:(id)arg1;
- (void)toggleSelectionValueAtIndexPath:(id)arg1;
- (void)updateSectionsWithAllFriends:(id)arg1 recentFriends:(id)arg2 bestFriends:(id)arg3;
- (id)titleForSection:(long long)arg1;
- (_Bool)isCellSelectedAtIndexPath:(id)arg1;
- (id)cellViewModelForIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithSectionKeyAndTitleMapper:(id)arg1 selectedFriends:(id)arg2;

@end

