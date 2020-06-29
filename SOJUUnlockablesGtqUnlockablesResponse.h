//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesGtqUnlockablesResponse-Protocol.h"

@class NSArray, NSData, NSString, SOJUAdOpportunityRequestIds;

@interface SOJUUnlockablesGtqUnlockablesResponse : SCSojuMessage <SOJUUnlockablesGtqUnlockablesResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithFilters:(id)arg1 invalidFilterIds:(id)arg2 bitmojiFilters:(id)arg3 lenses:(id)arg4 prefetchLenses:(id)arg5 stickers:(id)arg6 purposes:(id)arg7 opportunityRequestIds:(id)arg8 assetPrecachedFilters:(id)arg9 previewCaptionStyles:(id)arg10 checksumResponseList:(id)arg11 encryptedUserTrackData:(id)arg12;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *assetPrecachedFilters; // @dynamic assetPrecachedFilters;
@property(readonly, nonatomic) NSArray *bitmojiFilters; // @dynamic bitmojiFilters;
@property(readonly, nonatomic) NSArray *checksumResponseList; // @dynamic checksumResponseList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *encryptedUserTrackData; // @dynamic encryptedUserTrackData;
@property(readonly, nonatomic) NSArray *filters; // @dynamic filters;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *invalidFilterIds; // @dynamic invalidFilterIds;
@property(readonly, nonatomic) NSArray *lenses; // @dynamic lenses;
@property(readonly, nonatomic) SOJUAdOpportunityRequestIds *opportunityRequestIds; // @dynamic opportunityRequestIds;
@property(readonly, nonatomic) NSArray *prefetchLenses; // @dynamic prefetchLenses;
@property(readonly, nonatomic) NSArray *previewCaptionStyles; // @dynamic previewCaptionStyles;
@property(readonly, nonatomic) NSArray *purposes; // @dynamic purposes;
@property(readonly, nonatomic) NSArray *stickers; // @dynamic stickers;
@property(readonly) Class superclass;

@end

