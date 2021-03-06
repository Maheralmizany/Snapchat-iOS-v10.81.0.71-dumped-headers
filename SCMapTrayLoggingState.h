//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SCMapTrayLoggingState : NSObject
{
    NSMutableDictionary *_summaryMap;
    NSMutableDictionary *_uniqueHighlightMap;
    NSMutableDictionary *_totalHighlightMap;
    unsigned long long _friendTapCount;
    unsigned long long _bestFriendTapCount;
    unsigned long long _searchTapCount;
    unsigned long long _friendActivityStoryViewCount;
    unsigned long long _friendActivityChatCreateCount;
    unsigned long long _friendActivityProfileViewCount;
    unsigned long long _worldUpdateStoryViewCount;
}

@property(nonatomic) unsigned long long worldUpdateStoryViewCount; // @synthesize worldUpdateStoryViewCount=_worldUpdateStoryViewCount;
@property(nonatomic) unsigned long long friendActivityProfileViewCount; // @synthesize friendActivityProfileViewCount=_friendActivityProfileViewCount;
@property(nonatomic) unsigned long long friendActivityChatCreateCount; // @synthesize friendActivityChatCreateCount=_friendActivityChatCreateCount;
@property(nonatomic) unsigned long long friendActivityStoryViewCount; // @synthesize friendActivityStoryViewCount=_friendActivityStoryViewCount;
@property(nonatomic) unsigned long long searchTapCount; // @synthesize searchTapCount=_searchTapCount;
@property(nonatomic) unsigned long long bestFriendTapCount; // @synthesize bestFriendTapCount=_bestFriendTapCount;
@property(nonatomic) unsigned long long friendTapCount; // @synthesize friendTapCount=_friendTapCount;
- (void).cxx_destruct;
- (void)logRowHighlightedForSection:(long long)arg1 rowIdentifier:(id)arg2;
- (void)updateSummaryForCurrentProviderStateAndCounts:(long long)arg1 provider:(id)arg2;
- (id)summaryForSection:(long long)arg1;
@property(readonly, nonatomic) NSArray *sectionSummaries;
- (id)initWithSupportedSections:(id)arg1;

@end

