//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryVenueFilter-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryVenueFilter : SCSojuMessage <SOJUGalleryVenueFilter>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithYOffset:(id)arg1 venues:(id)arg2 selectedVenueId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *selectedVenueId; // @dynamic selectedVenueId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *venues; // @dynamic venues;
@property(readonly, nonatomic) NSNumber *yOffset; // @dynamic yOffset;

@end

