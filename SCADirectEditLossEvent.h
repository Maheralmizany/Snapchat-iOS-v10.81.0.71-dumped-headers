//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCADirectEditLossEvent : SCAUserTrackedEvent
{
}

- (void)setTag:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setPreviewFlavor:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setIsSnappable:(_Bool)arg1;
- (void)setIsMultiSnap:(_Bool)arg1;
- (void)setIsBatchCapture:(_Bool)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

