//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCMTStreamingMediaInfo, SCSSMStoryThumbnail, SCSSMTileBadge;

@interface SCSSMMomentStoryCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *authHeadersArray; // @dynamic authHeadersArray;
@property(readonly, nonatomic) unsigned long long authHeadersArray_Count; // @dynamic authHeadersArray_Count;
@property(copy, nonatomic) NSString *chromeSubtitle; // @dynamic chromeSubtitle;
@property(copy, nonatomic) NSString *chromeSubtitleIconURL; // @dynamic chromeSubtitleIconURL;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) long long displayTimestampSecs; // @dynamic displayTimestampSecs;
@property(copy, nonatomic) NSString *endStreamDescription; // @dynamic endStreamDescription;
@property(copy, nonatomic) NSString *endStreamImageURL; // @dynamic endStreamImageURL;
@property(copy, nonatomic) NSString *endStreamOptInButtonText; // @dynamic endStreamOptInButtonText;
@property(nonatomic) long long endTimeSecs; // @dynamic endTimeSecs;
@property(nonatomic) _Bool hasStreamingMediaInfo; // @dynamic hasStreamingMediaInfo;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTileBadge; // @dynamic hasTileBadge;
@property(copy, nonatomic) NSString *interactiveURL; // @dynamic interactiveURL;
@property(nonatomic) _Bool isReplay; // @dynamic isReplay;
@property(copy, nonatomic) NSString *lowLatencyManifestURL; // @dynamic lowLatencyManifestURL;
@property(copy, nonatomic) NSString *miniProfileIconURL; // @dynamic miniProfileIconURL;
@property(copy, nonatomic) NSString *miniProfileTitle; // @dynamic miniProfileTitle;
@property(nonatomic) int pollIntervalSecs; // @dynamic pollIntervalSecs;
@property(retain, nonatomic) SCMTStreamingMediaInfo *streamingMediaInfo; // @dynamic streamingMediaInfo;
@property(retain, nonatomic) NSMutableArray *streamingMediaInfosArray; // @dynamic streamingMediaInfosArray;
@property(readonly, nonatomic) unsigned long long streamingMediaInfosArray_Count; // @dynamic streamingMediaInfosArray_Count;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) SCSSMStoryThumbnail *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) SCSSMTileBadge *tileBadge; // @dynamic tileBadge;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

