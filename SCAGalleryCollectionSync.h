//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGalleryCollectionSync : SCAUserTrackedEvent
{
}

- (void)setWithBackgroundPush:(_Bool)arg1;
- (void)setTotalLatencyMs:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setPrefetchSuccessCount:(long long)arg1;
- (void)setPrefetchLatencyMs:(long long)arg1;
- (void)setGroupCount:(long long)arg1;
- (void)setGalleryCollectionId:(id)arg1;
- (void)setGalleryCollectionCategory:(id)arg1;
- (void)setFailureReason:(id)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

