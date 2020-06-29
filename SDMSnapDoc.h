//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SDMAttachments, SDMAttribution, SDMCaptureCharacteristics, SDMCreativeKitSourceApp, SDMCreativeToolsAnalytics, SDMGeneratedCameo, SDMLegacyMultisnap, SDMLens, SDMPackaging, SDMPermittedUserActions, SDMPlayback, SDMSnapDoc_ID, SDMSpectacles, SDMThumbnail, SDMTiming, SDMUnlockables;

@interface SDMSnapDoc : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SDMAttachments *attachments; // @dynamic attachments;
@property(retain, nonatomic) SDMAttribution *attribution; // @dynamic attribution;
@property(retain, nonatomic) SDMCaptureCharacteristics *captureCharacteristics; // @dynamic captureCharacteristics;
@property(retain, nonatomic) SDMCreativeKitSourceApp *creativeKitSourceApp; // @dynamic creativeKitSourceApp;
@property(retain, nonatomic) SDMCreativeToolsAnalytics *creativeToolsAnalytics; // @dynamic creativeToolsAnalytics;
@property(retain, nonatomic) NSMutableArray *envelopeArray; // @dynamic envelopeArray;
@property(readonly, nonatomic) unsigned long long envelopeArray_Count; // @dynamic envelopeArray_Count;
@property(retain, nonatomic) SDMGeneratedCameo *generatedCameo; // @dynamic generatedCameo;
@property(nonatomic) _Bool hasAttachments; // @dynamic hasAttachments;
@property(nonatomic) _Bool hasAttribution; // @dynamic hasAttribution;
@property(nonatomic) _Bool hasCaptureCharacteristics; // @dynamic hasCaptureCharacteristics;
@property(nonatomic) _Bool hasCreativeKitSourceApp; // @dynamic hasCreativeKitSourceApp;
@property(nonatomic) _Bool hasCreativeToolsAnalytics; // @dynamic hasCreativeToolsAnalytics;
@property(nonatomic) _Bool hasGeneratedCameo; // @dynamic hasGeneratedCameo;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLegacyMultisnap; // @dynamic hasLegacyMultisnap;
@property(nonatomic) _Bool hasLens; // @dynamic hasLens;
@property(nonatomic) _Bool hasPackaging; // @dynamic hasPackaging;
@property(nonatomic) _Bool hasPermittedUserActions; // @dynamic hasPermittedUserActions;
@property(nonatomic) _Bool hasPlayback; // @dynamic hasPlayback;
@property(nonatomic) _Bool hasSpectacles; // @dynamic hasSpectacles;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTiming; // @dynamic hasTiming;
@property(nonatomic) _Bool hasUnlockables; // @dynamic hasUnlockables;
@property(retain, nonatomic) SDMSnapDoc_ID *id_p; // @dynamic id_p;
@property(retain, nonatomic) SDMLegacyMultisnap *legacyMultisnap; // @dynamic legacyMultisnap;
@property(retain, nonatomic) SDMLens *lens; // @dynamic lens;
@property(nonatomic) int mediaListIdCounter; // @dynamic mediaListIdCounter;
@property(retain, nonatomic) NSMutableArray *mediaReferencesArray; // @dynamic mediaReferencesArray;
@property(readonly, nonatomic) unsigned long long mediaReferencesArray_Count; // @dynamic mediaReferencesArray_Count;
@property(retain, nonatomic) SDMPackaging *packaging; // @dynamic packaging;
@property(retain, nonatomic) SDMPermittedUserActions *permittedUserActions; // @dynamic permittedUserActions;
@property(retain, nonatomic) SDMPlayback *playback; // @dynamic playback;
@property(retain, nonatomic) SDMSpectacles *spectacles; // @dynamic spectacles;
@property(retain, nonatomic) SDMThumbnail *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) SDMTiming *timing; // @dynamic timing;
@property(retain, nonatomic) SDMUnlockables *unlockables; // @dynamic unlockables;

@end

