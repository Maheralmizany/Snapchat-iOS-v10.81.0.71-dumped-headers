//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdCollectionImpressionTrack-Protocol.h"

@class NSArray, NSString, SOJUAdCommonSnapAdImpressionTrack;

@interface SOJUAdCollectionImpressionTrack : SCSojuMessage <SOJUAdCollectionImpressionTrack>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTopsnapImpression:(id)arg1 collectionItemsTrack:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *collectionItemsTrack; // @dynamic collectionItemsTrack;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUAdCommonSnapAdImpressionTrack *topsnapImpression; // @dynamic topsnapImpression;

@end

