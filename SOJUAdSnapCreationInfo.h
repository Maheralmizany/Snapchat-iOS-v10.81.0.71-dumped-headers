//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdSnapCreationInfo-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdSnapCreationInfo : SCSojuMessage <SOJUAdSnapCreationInfo>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithCamera:(id)arg1 isAudioOn:(id)arg2 mediaType:(id)arg3 snapDurationMillis:(id)arg4 snapPreviewMillis:(id)arg5 geofilterLoadedCount:(id)arg6 filterCarouselEntryDirection:(id)arg7 filterSwipeCount:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSNumber *camera; // @dynamic camera;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *filterCarouselEntryDirection; // @dynamic filterCarouselEntryDirection;
@property(readonly, nonatomic) NSNumber *filterSwipeCount; // @dynamic filterSwipeCount;
@property(readonly, nonatomic) NSNumber *geofilterLoadedCount; // @dynamic geofilterLoadedCount;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isAudioOn; // @dynamic isAudioOn;
@property(readonly, nonatomic) NSString *mediaType; // @dynamic mediaType;
@property(readonly, nonatomic) NSNumber *snapDurationMillis; // @dynamic snapDurationMillis;
@property(readonly, nonatomic) NSNumber *snapPreviewMillis; // @dynamic snapPreviewMillis;
@property(readonly) Class superclass;

@end
