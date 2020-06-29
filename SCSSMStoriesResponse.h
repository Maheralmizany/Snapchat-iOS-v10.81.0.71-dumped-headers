//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class FeedTypeMetadata, NSData, NSString, SCSCOREResponseStatus, SCSSMClientScoringParams, SCSSMDiscoverFeedMetadata, SCSSMOrderedStoriesStream;

@interface SCSSMStoriesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSSMClientScoringParams *clientScoringParams; // @dynamic clientScoringParams;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(copy, nonatomic) NSData *debugPb; // @dynamic debugPb;
@property(retain, nonatomic) SCSSMDiscoverFeedMetadata *discoverFeedMetadata; // @dynamic discoverFeedMetadata;
@property(nonatomic) _Bool eof; // @dynamic eof;
@property(retain, nonatomic) FeedTypeMetadata *feedMetadata; // @dynamic feedMetadata;
@property(nonatomic) _Bool hasClientScoringParams; // @dynamic hasClientScoringParams;
@property(nonatomic) _Bool hasDiscoverFeedMetadata; // @dynamic hasDiscoverFeedMetadata;
@property(nonatomic) _Bool hasFeedMetadata; // @dynamic hasFeedMetadata;
@property(nonatomic) _Bool hasOrderedStoriesStream; // @dynamic hasOrderedStoriesStream;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(copy, nonatomic) NSString *onDemandDebugKey; // @dynamic onDemandDebugKey;
@property(retain, nonatomic) SCSSMOrderedStoriesStream *orderedStoriesStream; // @dynamic orderedStoriesStream;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) SCSCOREResponseStatus *status; // @dynamic status;

@end
