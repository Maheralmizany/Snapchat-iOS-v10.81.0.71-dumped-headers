//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnlockableTrackerBase.h"

#import "SCUnlockableViewTracking-Protocol.h"

@class NSString;

@interface SCUnlockableViewTracker : SCUnlockableTrackerBase <SCUnlockableViewTracking>
{
    _Bool _canFire;
    NSString *_url;
}

- (void).cxx_destruct;
- (int)_getProtoSnapViewType:(long long)arg1;
- (id)_createProtoTrackWithDuration:(id)arg1 mediaDurationSec:(id)arg2 encGeoData:(id)arg3 unlockablesSnapInfo:(id)arg4 viewType:(long long)arg5 snappableInviteAction:(long long)arg6 sojuDeviceInfo:(id)arg7;
- (void)fireTrackWithDuration:(id)arg1 mediaDurationSec:(id)arg2 encGeoData:(id)arg3 unlockablesSnapInfo:(id)arg4 viewType:(long long)arg5 snappableInviteAction:(long long)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

