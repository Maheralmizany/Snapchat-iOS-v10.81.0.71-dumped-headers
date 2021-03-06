//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMapLoggerSession, SCMapStatusStore, SCStopwatch;
@protocol SCMapPeopleFriendsProvider;

@interface SCMapExploreLogger : NSObject
{
    SCMapStatusStore *_statusStore;
    SCMapLoggerSession *_session;
    id <SCMapPeopleFriendsProvider> _mapPeopleProvider;
    SCStopwatch *_stopwatch;
}

+ (void)logExploreItemUserView:(id)arg1 loggerSession:(id)arg2 mapPeopleProvider:(id)arg3 statusStore:(id)arg4;
- (void).cxx_destruct;
- (void)exploreDidDeleteMyStatus:(id)arg1;
- (void)exploreDidTakeScreenshotOfItem:(id)arg1;
- (void)exploreDidViewItem:(id)arg1;
- (void)exploreDidCloseWithExitEvent:(long long)arg1 availableItemCount:(unsigned long long)arg2 readItemCount:(unsigned long long)arg3;
- (void)exploreDidOpenWithSource:(long long)arg1 availableItemCount:(unsigned long long)arg2 unreadItemCount:(unsigned long long)arg3 visibleItem:(id)arg4;
- (id)initWithMapPeopleProvider:(id)arg1 loggerSession:(id)arg2 statusStore:(id)arg3;

@end

