//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacySendToLogger-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer, SCSelectionTracker;

@interface SCLegacySelectionTrackerAdaptor : NSObject <SCLegacySendToLogger>
{
    SCQueuePerformer *_performer;
    SCSelectionTracker *_selectionTracker;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_groupDataFetcher;
    SCLazy *_userInfoProvider;
    NSString *_cellLoadTrackSessionId;
}

@property(retain, nonatomic) NSString *cellLoadTrackSessionId; // @synthesize cellLoadTrackSessionId=_cellLoadTrackSessionId;
- (void).cxx_destruct;
- (void)_setPreselectedGroup:(id)arg1;
- (void)_setPreselectedSnapchatter:(id)arg1;
- (void)_onStorySelectionWithExtraData:(id)arg1;
- (void)_onBatchSelectionWithExtraData:(id)arg1;
- (void)_onRecipientDidTapWithExtraData:(id)arg1;
- (void)_didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)setListsViewed;
- (void)setPreselectedGroupId:(id)arg1;
- (void)setPreselectedUserId:(id)arg1;
- (void)logSendFirstSnapIfNeeded;
- (void)logSendToCellView:(long long)arg1;
- (void)logPageSendToSessionEnd:(long long)arg1 status:(long long)arg2;
@property(readonly, nonatomic) SCSelectionTracker *selectionTracker;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithSnapchattersDataFetcher:(id)arg1 groupDataFetcher:(id)arg2 userInfoProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
