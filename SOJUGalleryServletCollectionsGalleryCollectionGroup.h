//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGalleryServletCollectionsGalleryCollectionGroup-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletCollectionsGalleryCollectionGroup : SCSojuMessage <SOJUGalleryServletCollectionsGalleryCollectionGroup>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithName:(id)arg1 minimumSnapsCountRequirement:(id)arg2 snaps:(id)arg3 titleSnapIds:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *minimumSnapsCountRequirement; // @dynamic minimumSnapsCountRequirement;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSArray *snaps; // @dynamic snaps;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *titleSnapIds; // @dynamic titleSnapIds;

@end

