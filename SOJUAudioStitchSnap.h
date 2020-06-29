//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SCAudioStitchSnap-Protocol.h"
#import "SOJUAudioStitchSnap-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAudioStitchSnap : SCSojuMessage <SCAudioStitchSnap, SOJUAudioStitchSnap>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSubmissionId:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 positionIndex:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *endTime; // @dynamic endTime;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *positionIndex; // @dynamic positionIndex;
@property(readonly, nonatomic) NSNumber *startTime; // @dynamic startTime;
@property(readonly, nonatomic) NSString *submissionId; // @dynamic submissionId;
@property(readonly) Class superclass;

@end
