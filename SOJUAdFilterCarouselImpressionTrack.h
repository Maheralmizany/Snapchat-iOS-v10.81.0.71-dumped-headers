//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdFilterCarouselImpressionTrack-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdDeviceDeviceInfo, SOJUAdSnapCreationInfo;

@interface SOJUAdFilterCarouselImpressionTrack : SCSojuMessage <SOJUAdFilterCarouselImpressionTrack>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSnapCreationInfo:(id)arg1 snapSessionId:(id)arg2 carouselSize:(id)arg3 filterImpressions:(id)arg4 deviceInfo:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSNumber *carouselSize; // @dynamic carouselSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUAdDeviceDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(readonly, nonatomic) NSArray *filterImpressions; // @dynamic filterImpressions;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUAdSnapCreationInfo *snapCreationInfo; // @dynamic snapCreationInfo;
@property(readonly, nonatomic) NSString *snapSessionId; // @dynamic snapSessionId;
@property(readonly) Class superclass;

@end
