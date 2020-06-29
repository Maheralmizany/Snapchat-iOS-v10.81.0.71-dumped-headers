//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSnapStateMessage-Protocol.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUSnapStateMessage : SCSojuMessage <SOJUSnapStateMessage>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 snapId:(id)arg10 viewed:(id)arg11 replayed:(id)arg12 screenshotCount:(id)arg13 fiNeedsRetry:(id)arg14 fiVersion:(id)arg15 fiSenderOutAlpha:(id)arg16 fiRecipientOutAlpha:(id)arg17 fiSendTimestamp:(id)arg18 fiRecipientOutDelta:(id)arg19 fiRecipientOutDeltaCheck:(id)arg20 fiSenderOutBeta:(id)arg21 screenCaptureShotCount:(id)arg22 screenCaptureRecordingCount:(id)arg23;

// Remaining properties
@property(readonly, nonatomic) NSString *appEngineTarget; // @dynamic appEngineTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *fiNeedsRetry; // @dynamic fiNeedsRetry;
@property(readonly, nonatomic) NSString *fiRecipientOutAlpha; // @dynamic fiRecipientOutAlpha;
@property(readonly, nonatomic) NSString *fiRecipientOutDelta; // @dynamic fiRecipientOutDelta;
@property(readonly, nonatomic) NSString *fiRecipientOutDeltaCheck; // @dynamic fiRecipientOutDeltaCheck;
@property(readonly, nonatomic) NSNumber *fiSendTimestamp; // @dynamic fiSendTimestamp;
@property(readonly, nonatomic) NSString *fiSenderOutAlpha; // @dynamic fiSenderOutAlpha;
@property(readonly, nonatomic) NSString *fiSenderOutBeta; // @dynamic fiSenderOutBeta;
@property(readonly, nonatomic) NSNumber *fiVersion; // @dynamic fiVersion;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUHeader *header; // @dynamic header;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSDictionary *knownChatSequenceNumbers; // @dynamic knownChatSequenceNumbers;
@property(readonly, nonatomic) NSNumber *mischiefVersion; // @dynamic mischiefVersion;
@property(readonly, nonatomic) NSNumber *replayed; // @dynamic replayed;
@property(readonly, nonatomic) NSNumber *retried; // @dynamic retried;
@property(readonly, nonatomic) NSNumber *screenCaptureRecordingCount; // @dynamic screenCaptureRecordingCount;
@property(readonly, nonatomic) NSNumber *screenCaptureShotCount; // @dynamic screenCaptureShotCount;
@property(readonly, nonatomic) NSNumber *screenshotCount; // @dynamic screenshotCount;
@property(readonly, nonatomic) NSNumber *seqNum; // @dynamic seqNum;
@property(readonly, nonatomic) NSString *snapId; // @dynamic snapId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) NSNumber *viewed; // @dynamic viewed;

@end
