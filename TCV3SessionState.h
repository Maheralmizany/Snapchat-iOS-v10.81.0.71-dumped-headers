//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TCV3ParticipantState;

@interface TCV3SessionState : NSObject
{
    _Bool _connecting;
    TCV3ParticipantState *_localUser;
    NSString *_caller;
    NSString *_callId;
    long long _callingMedia;
    NSDictionary *_participants;
}

+ (id)SessionStateWithLocalUser:(id)arg1 connecting:(_Bool)arg2 caller:(id)arg3 callId:(id)arg4 callingMedia:(long long)arg5 participants:(id)arg6;
@property(readonly, nonatomic) NSDictionary *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) long long callingMedia; // @synthesize callingMedia=_callingMedia;
@property(readonly, nonatomic) NSString *callId; // @synthesize callId=_callId;
@property(readonly, nonatomic) NSString *caller; // @synthesize caller=_caller;
@property(readonly, nonatomic) _Bool connecting; // @synthesize connecting=_connecting;
@property(readonly, nonatomic) TCV3ParticipantState *localUser; // @synthesize localUser=_localUser;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalUser:(id)arg1 connecting:(_Bool)arg2 caller:(id)arg3 callId:(id)arg4 callingMedia:(long long)arg5 participants:(id)arg6;

@end

