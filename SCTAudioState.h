//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, SCAudioRoute;

@interface SCTAudioState : NSObject
{
    _Bool _didForegroundInCall;
    _Bool _didReceiveFromCallKit;
    SCAudioRoute *_actualRoute;
    NSMutableSet *_availableRoutes;
    SCAudioRoute *_expectedRoute;
    SCAudioRoute *_userSelectedRoute;
    NSDate *_userSelectionTimestamp;
}

@property(readonly) NSDate *userSelectionTimestamp; // @synthesize userSelectionTimestamp=_userSelectionTimestamp;
@property(readonly) SCAudioRoute *userSelectedRoute; // @synthesize userSelectedRoute=_userSelectedRoute;
@property(readonly) _Bool didReceiveFromCallKit; // @synthesize didReceiveFromCallKit=_didReceiveFromCallKit;
@property(readonly) _Bool didForegroundInCall; // @synthesize didForegroundInCall=_didForegroundInCall;
@property(readonly) SCAudioRoute *expectedRoute; // @synthesize expectedRoute=_expectedRoute;
@property(readonly) NSMutableSet *availableRoutes; // @synthesize availableRoutes=_availableRoutes;
@property(retain) SCAudioRoute *actualRoute; // @synthesize actualRoute=_actualRoute;
- (void).cxx_destruct;
- (void)_updateActualRouteAccordingToSystemRoute:(id)arg1;
- (void)_updateAvailableRoutes:(id)arg1;
- (id)_scAudioRouteForSystemRoute:(id)arg1;
- (id)_mostRecentlyAvailableRoute;
- (id)_availableRouteWithType:(unsigned long long)arg1;
- (id)_wiredHeadsetRoute;
- (id)_speakerRoute;
- (id)_mostRecentBluetoothOrOthersRoute;
- (id)_earpieceRoute;
- (void)updateUserSelectedRouteFromSystemRoute:(id)arg1;
- (void)updateUserSelectedRoute:(id)arg1;
- (void)updateToggleBetweenSpeakerAndEarpiece;
- (void)updateReceiveFromCallKit:(_Bool)arg1;
- (void)updateDidForegroundInCall:(_Bool)arg1;
- (void)updateAvailableRoutes:(id)arg1 actualRoute:(id)arg2;
- (void)resetState;
- (void)evaluateExpectedRoute;
- (id)init;

@end
