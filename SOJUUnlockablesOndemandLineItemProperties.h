//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandLineItemProperties-Protocol.h"

@class NSString;

@interface SOJUUnlockablesOndemandLineItemProperties : SCSojuMessage <SOJUUnlockablesOndemandLineItemProperties>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUsageType:(id)arg1 purchaserTimezone:(id)arg2 displayName:(id)arg3 sponsoredBrandName:(id)arg4 geoStoryName:(id)arg5 geoStoryId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSString *geoStoryId; // @dynamic geoStoryId;
@property(readonly, nonatomic) NSString *geoStoryName; // @dynamic geoStoryName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *purchaserTimezone; // @dynamic purchaserTimezone;
@property(readonly, nonatomic) NSString *sponsoredBrandName; // @dynamic sponsoredBrandName;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *usageType; // @dynamic usageType;

@end

