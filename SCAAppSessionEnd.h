//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppSessionEnd : SCAUserTrackedEvent
{
}

- (void)setWithPrivateGallery:(_Bool)arg1;
- (void)setWithGalleryInvite:(_Bool)arg1;
- (void)setWithGallery:(_Bool)arg1;
- (void)setSessionTimeSec:(long long)arg1;
- (void)setSessionStartTs:(id)arg1;
- (void)setSessionActiveTimeSec:(long long)arg1;
- (void)setDeepLinkSource:(long long)arg1;
- (void)setDeepLinkId:(id)arg1;
- (void)setApplicationState:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

