//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCTAudioState, SCTChatLocalParticipantState;

@interface SCTV3StateOfTheWorld : NSObject
{
    _Bool _isFullscreen;
    _Bool _isExpandedLocalMedia;
    _Bool _isLocalFullscreen;
    _Bool _isAudioRouteMenuDisplayed;
    SCTChatLocalParticipantState *_localParticipantState;
    SCTAudioState *_audioState;
    NSArray *_remoteParticipantStates;
    NSArray *_sortedActiveUsersInCall;
    long long _callingMedia;
    NSString *_caller;
}

+ (id)stateWithLocalParticipantState:(id)arg1 remoteParticipantStates:(id)arg2 sortedActiveUsersInCall:(id)arg3 audioState:(id)arg4 callingMedia:(long long)arg5 caller:(id)arg6 isFullscreen:(_Bool)arg7 isExpandedLocalMedia:(_Bool)arg8 isLocalFullscreen:(_Bool)arg9 isAudioRouteMenuDisplayed:(_Bool)arg10;
@property(readonly) _Bool isAudioRouteMenuDisplayed; // @synthesize isAudioRouteMenuDisplayed=_isAudioRouteMenuDisplayed;
@property(readonly) _Bool isLocalFullscreen; // @synthesize isLocalFullscreen=_isLocalFullscreen;
@property(readonly) _Bool isExpandedLocalMedia; // @synthesize isExpandedLocalMedia=_isExpandedLocalMedia;
@property(readonly) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(readonly) NSString *caller; // @synthesize caller=_caller;
@property(readonly) long long callingMedia; // @synthesize callingMedia=_callingMedia;
@property(readonly) NSArray *sortedActiveUsersInCall; // @synthesize sortedActiveUsersInCall=_sortedActiveUsersInCall;
@property(readonly) NSArray *remoteParticipantStates; // @synthesize remoteParticipantStates=_remoteParticipantStates;
@property(readonly) SCTAudioState *audioState; // @synthesize audioState=_audioState;
@property(readonly) SCTChatLocalParticipantState *localParticipantState; // @synthesize localParticipantState=_localParticipantState;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalParticipantState:(id)arg1 remoteParticipantStates:(id)arg2 sortedActiveUsersInCall:(id)arg3 audioState:(id)arg4 callingMedia:(long long)arg5 caller:(id)arg6 isFullscreen:(_Bool)arg7 isExpandedLocalMedia:(_Bool)arg8 isLocalFullscreen:(_Bool)arg9 isAudioRouteMenuDisplayed:(_Bool)arg10;
- (id)participantStateForUsername:(id)arg1;
- (unsigned long long)localPublishedMedia;

@end

