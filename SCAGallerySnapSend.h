//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCADirectSnapSendBase.h"

@interface SCAGallerySnapSend : SCADirectSnapSendBase
{
}

- (void)setStorySessionId:(id)arg1;
- (void)setSpecsContentId:(id)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setSnapId:(id)arg1;
- (void)setSmartShared:(_Bool)arg1;
- (void)setSharedStoryPostCount:(long long)arg1;
- (void)setSendSource:(long long)arg1;
- (void)incrementRetryCount;
- (void)setRetryCount:(long long)arg1;
- (void)setPlayerVersion:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOfficialStoryPostCount:(long long)arg1;
- (void)setMeo:(_Bool)arg1;
- (void)setMediaFormat:(long long)arg1;
- (void)setLensSource:(long long)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setLatencyMs:(long long)arg1;
- (void)setHasCreative:(_Bool)arg1;
- (void)setGroupStoryPostCount:(long long)arg1;
- (void)setGalleryMediaType:(long long)arg1;
- (void)setGalleryCollectionId:(id)arg1;
- (void)setGalleryCollectionCategory:(id)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setExternalId:(id)arg1;
- (void)setEntryType:(long long)arg1;
- (void)setEntryId:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setBusinessStoryPostCount:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

