//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGallerySendTaskFinish : SCAUserTrackedEvent
{
}

- (void)setWithSuccess:(_Bool)arg1;
- (void)setWithMyStory:(_Bool)arg1;
- (void)setVideoCount:(long long)arg1;
- (void)setTranscodeLatencyMs:(long long)arg1;
- (void)setSpecsVideoCount:(long long)arg1;
- (void)setSpecsImageCount:(long long)arg1;
- (void)setSmartShareVideoSuccessCount:(long long)arg1;
- (void)setSmartShareVideoEligibleCount:(long long)arg1;
- (void)setSmartShareSuccessCount:(long long)arg1;
- (void)setSmartShareSpecsSuccessCount:(long long)arg1;
- (void)setSmartShareSpecsEligibleCount:(long long)arg1;
- (void)setSmartShareLatencyMs:(long long)arg1;
- (void)setSmartShareImageSuccessCount:(long long)arg1;
- (void)setSmartShareImageEligibleCount:(long long)arg1;
- (void)setSmartShareFailureCount:(long long)arg1;
- (void)setSmartShareEligibleCount:(long long)arg1;
- (void)setSharedStoryPostCount:(long long)arg1;
- (void)setRecipientCount:(long long)arg1;
- (void)setPrepareLatencyMs:(long long)arg1;
- (void)setOfficialStoryPostCount:(long long)arg1;
- (void)setLatencyMs:(long long)arg1;
- (void)setImageCount:(long long)arg1;
- (void)setGroupStoryPostCount:(long long)arg1;
- (void)setDownloadLatencyMs:(long long)arg1;
- (void)setCount:(long long)arg1;
- (void)setBusinessStoryPostCount:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

