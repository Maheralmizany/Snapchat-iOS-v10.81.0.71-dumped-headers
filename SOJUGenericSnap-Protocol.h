//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOJUSnap-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUMediaUrl;

@protocol SOJUGenericSnap <SOJUSnap>
@property(readonly, nonatomic) SOJUMediaUrl *directDownloadUrl;
@property(readonly, nonatomic) NSNumber *fiRetried;
@property(readonly, nonatomic) NSNumber *screenCaptureRecordingCount;
@property(readonly, nonatomic) NSNumber *screenCaptureShotCount;
@property(readonly, nonatomic) NSNumber *fiSnapReleaseTs;
@property(readonly, nonatomic) NSString *fiSenderOutBeta;
@property(readonly, nonatomic) NSNumber *fiPrevSenderGammaCountDeprecated;
@property(readonly, nonatomic) NSString *fiPrevSenderGammaDeprecated;
@property(readonly, nonatomic) NSString *fiSnapIv;
@property(readonly, nonatomic) NSString *fiSnapKey;
@property(readonly, nonatomic) NSString *fiRecipientOutGammaDeprecated;
@property(readonly, nonatomic) NSDictionary *fideliusInfo;
@property(readonly, nonatomic) NSNumber *fiSendTimestampDeprecated;
@property(readonly, nonatomic) NSString *fiRecipientOutDeltaCheckDeprecated;
@property(readonly, nonatomic) NSString *fiRecipientOutDeltaDeprecated;
@property(readonly, nonatomic) NSString *fiRecipientOutAlphaDeprecated;
@property(readonly, nonatomic) NSString *fiSenderOutAlphaDeprecated;
@property(readonly, nonatomic) NSNumber *fiVersion;
@property(readonly, nonatomic) NSNumber *fiNeedsRetry;
@property(readonly, nonatomic) NSArray *uvTags;
@property(readonly, nonatomic) NSString *egData;
@property(readonly, nonatomic) NSString *esId;
@property(readonly, nonatomic) NSNumber *c;
@property(readonly, nonatomic) NSNumber *pending;
@property(readonly, nonatomic) NSNumber *replayed;
@property(readonly, nonatomic) NSString *cId;
@property(readonly, nonatomic) NSString *rp;
@property(readonly, nonatomic) NSString *filterId;
@property(readonly, nonatomic) NSNumber *broadcastHideTimer;
@property(readonly, nonatomic) NSString *broadcastSecondaryText;
@property(readonly, nonatomic) NSString *broadcastActionText;
@property(readonly, nonatomic) NSString *broadcastUrl;
@property(readonly, nonatomic) NSString *broadcastMediaUrl;
@property(readonly, nonatomic) NSNumber *broadcast;
@property(readonly, nonatomic) NSNumber *capOriDeprecated;
@property(readonly, nonatomic) NSNumber *capPosDeprecated;
@property(readonly, nonatomic) NSString *capTextDeprecated;
@property(readonly, nonatomic) NSNumber *timer;
@property(readonly, nonatomic) NSNumber *t;
@property(readonly, nonatomic) NSString *sn;
@end

