//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSData, SOJUAdOpportunityRequestIds;

@protocol SOJUUnlockablesGtqUnlockablesResponse <SCSojuMessage>
@property(readonly, nonatomic) NSData *encryptedUserTrackData;
@property(readonly, nonatomic) NSArray *checksumResponseList;
@property(readonly, nonatomic) NSArray *previewCaptionStyles;
@property(readonly, nonatomic) NSArray *assetPrecachedFilters;
@property(readonly, nonatomic) SOJUAdOpportunityRequestIds *opportunityRequestIds;
@property(readonly, nonatomic) NSArray *purposes;
@property(readonly, nonatomic) NSArray *stickers;
@property(readonly, nonatomic) NSArray *prefetchLenses;
@property(readonly, nonatomic) NSArray *lenses;
@property(readonly, nonatomic) NSArray *bitmojiFilters;
@property(readonly, nonatomic) NSArray *invalidFilterIds;
@property(readonly, nonatomic) NSArray *filters;
@end

