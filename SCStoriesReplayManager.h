//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, SCEventListenerAnnouncer, SCQueuePerformer;

@interface SCStoriesReplayManager : NSObject <SCEventAnnouncing>
{
    NSSet *_playedStoriesIdentifiers;
    NSMutableDictionary *_usernameToStorySnapIdMapping;
    SCQueuePerformer *_performer;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announcePlayedStoriesUpdate;
- (void)clearPlayedStories;
- (void)addIdentifierToPlayedStories:(id)arg1;
- (id)playedStoriesIdentifiers;
- (void)clearAll;
- (void)setFirstStorySnapIdToPlay:(id)arg1 friendStoriesUsername:(id)arg2;
- (id)init;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

