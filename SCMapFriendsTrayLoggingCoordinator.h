//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, SCMapFriendsTrayLoggingSession, SCMapTrayActivitySectionProvider, SCMapTrayFriendFinderSectionProvider, SCMapTrayLoggingState, SCMapTrayWorldStoriesSectionProvider, SCStopwatch;
@protocol SCMapTrayMetadataProvider;

@interface SCMapFriendsTrayLoggingCoordinator : NSObject
{
    SCMapTrayActivitySectionProvider *_exploreSectionProvider;
    SCMapTrayFriendFinderSectionProvider *_friendsSectionProvider;
    SCMapTrayWorldStoriesSectionProvider *_worldSectionProvider;
    NSSet *_handledProviders;
    NSArray *_enabledSections;
    unsigned long long _mapSessionId;
    unsigned long long _sectionCount;
    long long _exploreSectionIndex;
    long long _friendSectionIndex;
    long long _worldSectionIndex;
    id <SCMapTrayMetadataProvider> _trayMetadataProvider;
    long long _trayType;
    SCMapTrayLoggingState *_state;
    SCMapFriendsTrayLoggingSession *_session;
    SCStopwatch *_stopwatch;
}

- (void).cxx_destruct;
- (void)_updateAllSummaries;
- (long long)_sectionForIndex:(unsigned long long)arg1;
- (void)handleTrayActionType:(long long)arg1 isBestFriend:(_Bool)arg2 itemAge:(double)arg3 itemIndex:(unsigned long long)arg4;
- (void)handleTrayLoadFailureRetryTappedWithSection:(unsigned long long)arg1;
- (void)handleTraySearchTappedWithItemIndex:(unsigned long long)arg1;
- (void)handleTrayFriendTappedWithBestFriend:(_Bool)arg1 locationAge:(double)arg2 itemIndex:(unsigned long long)arg3;
- (void)handleTrayScrolledToTop;
- (void)handleTraySelectedItemChangedWithActionType:(long long)arg1 section:(unsigned long long)arg2;
- (void)handleTraySelectedItemChangedWithRowIdentifier:(id)arg1 section:(unsigned long long)arg2;
- (void)handleTrayClosedWithMethod:(long long)arg1;
- (void)handleTrayOpenedWithSource:(long long)arg1;
- (void)handleCollapsedTrayViewed;
@property(readonly, nonatomic) _Bool sessionActive;
- (_Bool)handlesLoggingForSectionProvider:(id)arg1;
- (id)initWithSectionProviders:(id)arg1 trayMetadataProvider:(id)arg2 trayType:(long long)arg3 mapSessionId:(unsigned long long)arg4;

@end

