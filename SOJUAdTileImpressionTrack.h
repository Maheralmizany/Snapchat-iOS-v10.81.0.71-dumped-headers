//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdTileImpressionTrack-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdTileImpressionTrack : SCSojuMessage <SOJUAdTileImpressionTrack>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIsViewed:(id)arg1 isViewedAppSession:(id)arg2 tileTapped:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isViewed; // @dynamic isViewed;
@property(readonly, nonatomic) NSNumber *isViewedAppSession; // @dynamic isViewedAppSession;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *tileTapped; // @dynamic tileTapped;

@end
