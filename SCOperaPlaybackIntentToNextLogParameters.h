//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCAProductContext;

@interface SCOperaPlaybackIntentToNextLogParameters : NSObject <NSCopying>
{
    _Bool _streaming;
    _Bool _longForm;
    _Bool _itemLoaded;
    long long _featureMajorName;
    long long _featureMinorName;
    long long _loadPhase;
    long long _itemLoadState;
    long long _itemType;
    NSString *_itemId;
    long long _itemLoadedCount;
    long long _entryEvent;
    long long _entryIntent;
    unsigned long long _mediaSizeByte;
    NSString *_itemGroupId;
    long long _streamingFailureCode;
    long long _intentToPlaylistStartSetupViewModelsTimeMs;
    long long _playlistSetupViewModelsTimeMs;
    long long _playSource;
    NSDate *_mediaViewingStartDate;
    double _snapDuration;
    double _videoPreparationStartTimeMs;
    double _videoPrepareTimeMs;
    long long _playerSessionTimeStamp;
    long long _viewSource;
    long long _mediaType;
    long long _connectionClass;
    long long _navigationType;
    SCAProductContext *_productContext;
}

@property(readonly, copy, nonatomic) SCAProductContext *productContext; // @synthesize productContext=_productContext;
@property(readonly, nonatomic) long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) long long connectionClass; // @synthesize connectionClass=_connectionClass;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) long long viewSource; // @synthesize viewSource=_viewSource;
@property(readonly, nonatomic) long long playerSessionTimeStamp; // @synthesize playerSessionTimeStamp=_playerSessionTimeStamp;
@property(readonly, nonatomic) double videoPrepareTimeMs; // @synthesize videoPrepareTimeMs=_videoPrepareTimeMs;
@property(readonly, nonatomic) double videoPreparationStartTimeMs; // @synthesize videoPreparationStartTimeMs=_videoPreparationStartTimeMs;
@property(readonly, nonatomic) double snapDuration; // @synthesize snapDuration=_snapDuration;
@property(readonly, copy, nonatomic) NSDate *mediaViewingStartDate; // @synthesize mediaViewingStartDate=_mediaViewingStartDate;
@property(readonly, nonatomic) long long playSource; // @synthesize playSource=_playSource;
@property(readonly, nonatomic) _Bool itemLoaded; // @synthesize itemLoaded=_itemLoaded;
@property(readonly, nonatomic) long long playlistSetupViewModelsTimeMs; // @synthesize playlistSetupViewModelsTimeMs=_playlistSetupViewModelsTimeMs;
@property(readonly, nonatomic) long long intentToPlaylistStartSetupViewModelsTimeMs; // @synthesize intentToPlaylistStartSetupViewModelsTimeMs=_intentToPlaylistStartSetupViewModelsTimeMs;
@property(readonly, nonatomic) long long streamingFailureCode; // @synthesize streamingFailureCode=_streamingFailureCode;
@property(readonly, copy, nonatomic) NSString *itemGroupId; // @synthesize itemGroupId=_itemGroupId;
@property(readonly, nonatomic) unsigned long long mediaSizeByte; // @synthesize mediaSizeByte=_mediaSizeByte;
@property(readonly, nonatomic) long long entryIntent; // @synthesize entryIntent=_entryIntent;
@property(readonly, nonatomic) long long entryEvent; // @synthesize entryEvent=_entryEvent;
@property(readonly, nonatomic) long long itemLoadedCount; // @synthesize itemLoadedCount=_itemLoadedCount;
@property(readonly, nonatomic) _Bool longForm; // @synthesize longForm=_longForm;
@property(readonly, nonatomic) _Bool streaming; // @synthesize streaming=_streaming;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) long long itemLoadState; // @synthesize itemLoadState=_itemLoadState;
@property(readonly, nonatomic) long long loadPhase; // @synthesize loadPhase=_loadPhase;
@property(readonly, nonatomic) long long featureMinorName; // @synthesize featureMinorName=_featureMinorName;
@property(readonly, nonatomic) long long featureMajorName; // @synthesize featureMajorName=_featureMajorName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeatureMajorName:(long long)arg1 featureMinorName:(long long)arg2 loadPhase:(long long)arg3 itemLoadState:(long long)arg4 itemType:(long long)arg5 itemId:(id)arg6 streaming:(_Bool)arg7 longForm:(_Bool)arg8 itemLoadedCount:(long long)arg9 entryEvent:(long long)arg10 entryIntent:(long long)arg11 mediaSizeByte:(unsigned long long)arg12 itemGroupId:(id)arg13 streamingFailureCode:(long long)arg14 intentToPlaylistStartSetupViewModelsTimeMs:(long long)arg15 playlistSetupViewModelsTimeMs:(long long)arg16 itemLoaded:(_Bool)arg17 playSource:(long long)arg18 mediaViewingStartDate:(id)arg19 snapDuration:(double)arg20 videoPreparationStartTimeMs:(double)arg21 videoPrepareTimeMs:(double)arg22 playerSessionTimeStamp:(long long)arg23 viewSource:(long long)arg24 mediaType:(long long)arg25 connectionClass:(long long)arg26 navigationType:(long long)arg27 productContext:(id)arg28;

@end

