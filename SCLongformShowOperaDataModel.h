//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString, NSURL, SCLongformShowWatchedState, SCPublisherAdMetadata;

@interface SCLongformShowOperaDataModel : NSObject <NSCopying>
{
    _Bool _allowProfilePresentation;
    NSString *_profileId;
    NSString *_showId;
    long long _publisherId;
    long long _editionId;
    NSString *_publisherName;
    NSString *_publisherUniqueName;
    NSString *_showName;
    NSURL *_logoURL;
    NSURL *_horizontalLogoURL;
    long long _showType;
    long long _episodeNumber;
    long long _seasonNumber;
    unsigned long long _publishTimestampMs;
    NSURL *_deeplinkURL;
    SCPublisherAdMetadata *_adMetadata;
    NSString *_profileOverlayButtonText;
    NSString *_compositeStoryIdString;
    NSNumber *_discoverFeedStoryDedupeFp;
    NSNumber *_feedType;
    NSArray *_snaps;
    SCLongformShowWatchedState *_watchedState;
}

@property(readonly, copy, nonatomic) SCLongformShowWatchedState *watchedState; // @synthesize watchedState=_watchedState;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSNumber *feedType; // @synthesize feedType=_feedType;
@property(readonly, copy, nonatomic) NSNumber *discoverFeedStoryDedupeFp; // @synthesize discoverFeedStoryDedupeFp=_discoverFeedStoryDedupeFp;
@property(readonly, copy, nonatomic) NSString *compositeStoryIdString; // @synthesize compositeStoryIdString=_compositeStoryIdString;
@property(readonly, copy, nonatomic) NSString *profileOverlayButtonText; // @synthesize profileOverlayButtonText=_profileOverlayButtonText;
@property(readonly, nonatomic) _Bool allowProfilePresentation; // @synthesize allowProfilePresentation=_allowProfilePresentation;
@property(readonly, copy, nonatomic) SCPublisherAdMetadata *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(readonly, copy, nonatomic) NSURL *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
@property(readonly, nonatomic) unsigned long long publishTimestampMs; // @synthesize publishTimestampMs=_publishTimestampMs;
@property(readonly, nonatomic) long long seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, nonatomic) long long episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(readonly, nonatomic) long long showType; // @synthesize showType=_showType;
@property(readonly, copy, nonatomic) NSURL *horizontalLogoURL; // @synthesize horizontalLogoURL=_horizontalLogoURL;
@property(readonly, copy, nonatomic) NSURL *logoURL; // @synthesize logoURL=_logoURL;
@property(readonly, copy, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(readonly, copy, nonatomic) NSString *publisherUniqueName; // @synthesize publisherUniqueName=_publisherUniqueName;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, nonatomic) long long editionId; // @synthesize editionId=_editionId;
@property(readonly, nonatomic) long long publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(readonly, copy, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfileId:(id)arg1 showId:(id)arg2 publisherId:(long long)arg3 editionId:(long long)arg4 publisherName:(id)arg5 publisherUniqueName:(id)arg6 showName:(id)arg7 logoURL:(id)arg8 horizontalLogoURL:(id)arg9 showType:(long long)arg10 episodeNumber:(long long)arg11 seasonNumber:(long long)arg12 publishTimestampMs:(unsigned long long)arg13 deeplinkURL:(id)arg14 adMetadata:(id)arg15 allowProfilePresentation:(_Bool)arg16 profileOverlayButtonText:(id)arg17 compositeStoryIdString:(id)arg18 discoverFeedStoryDedupeFp:(id)arg19 feedType:(id)arg20 snaps:(id)arg21 watchedState:(id)arg22;

@end

