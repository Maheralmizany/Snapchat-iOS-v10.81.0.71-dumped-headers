//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGenericSnap-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUMediaUrl, SOJUSnapMetadata;

@interface SOJUGenericSnap : SCSojuMessage <SOJUGenericSnap>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 st:(id)arg2 m:(id)arg3 ts:(id)arg4 sts:(id)arg5 zipped:(id)arg6 pts:(id)arg7 orientation:(id)arg8 snapMetadata:(id)arg9 sendStartTimestamp:(id)arg10 replyMedias:(id)arg11 seqNum:(id)arg12 viewTimestamp:(id)arg13 sn:(id)arg14 t:(id)arg15 timer:(id)arg16 capTextDeprecated:(id)arg17 capPosDeprecated:(id)arg18 capOriDeprecated:(id)arg19 broadcast:(id)arg20 broadcastMediaUrl:(id)arg21 broadcastUrl:(id)arg22 broadcastActionText:(id)arg23 broadcastSecondaryText:(id)arg24 broadcastHideTimer:(id)arg25 filterId:(id)arg26 rp:(id)arg27 cId:(id)arg28 replayed:(id)arg29 pending:(id)arg30 c:(id)arg31 esId:(id)arg32 egData:(id)arg33 uvTags:(id)arg34 fiNeedsRetry:(id)arg35 fiVersion:(id)arg36 fiSenderOutAlphaDeprecated:(id)arg37 fiRecipientOutAlphaDeprecated:(id)arg38 fiRecipientOutDeltaDeprecated:(id)arg39 fiRecipientOutDeltaCheckDeprecated:(id)arg40 fiSendTimestampDeprecated:(id)arg41 fideliusInfo:(id)arg42 fiRecipientOutGammaDeprecated:(id)arg43 fiSnapKey:(id)arg44 fiSnapIv:(id)arg45 fiPrevSenderGammaDeprecated:(id)arg46 fiPrevSenderGammaCountDeprecated:(id)arg47 fiSenderOutBeta:(id)arg48 fiSnapReleaseTs:(id)arg49 screenCaptureShotCount:(id)arg50 screenCaptureRecordingCount:(id)arg51 fiRetried:(id)arg52 directDownloadUrl:(id)arg53;
- (id)consistentId;
- (_Bool)isReceived;

// Remaining properties
@property(readonly, nonatomic) NSNumber *broadcast; // @dynamic broadcast;
@property(readonly, nonatomic) NSString *broadcastActionText; // @dynamic broadcastActionText;
@property(readonly, nonatomic) NSNumber *broadcastHideTimer; // @dynamic broadcastHideTimer;
@property(readonly, nonatomic) NSString *broadcastMediaUrl; // @dynamic broadcastMediaUrl;
@property(readonly, nonatomic) NSString *broadcastSecondaryText; // @dynamic broadcastSecondaryText;
@property(readonly, nonatomic) NSString *broadcastUrl; // @dynamic broadcastUrl;
@property(readonly, nonatomic) NSNumber *c; // @dynamic c;
@property(readonly, nonatomic) NSString *cId; // @dynamic cId;
@property(readonly, nonatomic) NSNumber *capOriDeprecated; // @dynamic capOriDeprecated;
@property(readonly, nonatomic) NSNumber *capPosDeprecated; // @dynamic capPosDeprecated;
@property(readonly, nonatomic) NSString *capTextDeprecated; // @dynamic capTextDeprecated;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUMediaUrl *directDownloadUrl; // @dynamic directDownloadUrl;
@property(readonly, nonatomic) NSString *egData; // @dynamic egData;
@property(readonly, nonatomic) NSString *esId; // @dynamic esId;
@property(readonly, nonatomic) NSNumber *fiNeedsRetry; // @dynamic fiNeedsRetry;
@property(readonly, nonatomic) NSNumber *fiPrevSenderGammaCountDeprecated; // @dynamic fiPrevSenderGammaCountDeprecated;
@property(readonly, nonatomic) NSString *fiPrevSenderGammaDeprecated; // @dynamic fiPrevSenderGammaDeprecated;
@property(readonly, nonatomic) NSString *fiRecipientOutAlphaDeprecated; // @dynamic fiRecipientOutAlphaDeprecated;
@property(readonly, nonatomic) NSString *fiRecipientOutDeltaCheckDeprecated; // @dynamic fiRecipientOutDeltaCheckDeprecated;
@property(readonly, nonatomic) NSString *fiRecipientOutDeltaDeprecated; // @dynamic fiRecipientOutDeltaDeprecated;
@property(readonly, nonatomic) NSString *fiRecipientOutGammaDeprecated; // @dynamic fiRecipientOutGammaDeprecated;
@property(readonly, nonatomic) NSNumber *fiRetried; // @dynamic fiRetried;
@property(readonly, nonatomic) NSNumber *fiSendTimestampDeprecated; // @dynamic fiSendTimestampDeprecated;
@property(readonly, nonatomic) NSString *fiSenderOutAlphaDeprecated; // @dynamic fiSenderOutAlphaDeprecated;
@property(readonly, nonatomic) NSString *fiSenderOutBeta; // @dynamic fiSenderOutBeta;
@property(readonly, nonatomic) NSString *fiSnapIv; // @dynamic fiSnapIv;
@property(readonly, nonatomic) NSString *fiSnapKey; // @dynamic fiSnapKey;
@property(readonly, nonatomic) NSNumber *fiSnapReleaseTs; // @dynamic fiSnapReleaseTs;
@property(readonly, nonatomic) NSNumber *fiVersion; // @dynamic fiVersion;
@property(readonly, nonatomic) NSDictionary *fideliusInfo; // @dynamic fideliusInfo;
@property(readonly, nonatomic) NSString *filterId; // @dynamic filterId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSNumber *m; // @dynamic m;
@property(readonly, nonatomic) NSNumber *orientation; // @dynamic orientation;
@property(readonly, nonatomic) NSNumber *pending; // @dynamic pending;
@property(readonly, nonatomic) NSNumber *pts; // @dynamic pts;
@property(readonly, nonatomic) NSNumber *replayed; // @dynamic replayed;
@property(readonly, nonatomic) NSArray *replyMedias; // @dynamic replyMedias;
@property(readonly, nonatomic) NSString *rp; // @dynamic rp;
@property(readonly, nonatomic) NSNumber *screenCaptureRecordingCount; // @dynamic screenCaptureRecordingCount;
@property(readonly, nonatomic) NSNumber *screenCaptureShotCount; // @dynamic screenCaptureShotCount;
@property(readonly, nonatomic) NSNumber *sendStartTimestamp; // @dynamic sendStartTimestamp;
@property(readonly, nonatomic) NSNumber *seqNum; // @dynamic seqNum;
@property(readonly, nonatomic) NSString *sn; // @dynamic sn;
@property(readonly, nonatomic) SOJUSnapMetadata *snapMetadata; // @dynamic snapMetadata;
@property(readonly, nonatomic) NSNumber *st; // @dynamic st;
@property(readonly, nonatomic) NSNumber *sts; // @dynamic sts;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *t; // @dynamic t;
@property(readonly, nonatomic) NSNumber *timer; // @dynamic timer;
@property(readonly, nonatomic) NSNumber *ts; // @dynamic ts;
@property(readonly, nonatomic) NSArray *uvTags; // @dynamic uvTags;
@property(readonly, nonatomic) NSNumber *viewTimestamp; // @dynamic viewTimestamp;
@property(readonly, nonatomic) NSNumber *zipped; // @dynamic zipped;

@end
