//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandOfferedInventory-Protocol.h"

@class NSString, SOJUUnlockablesOndemandAssetRequirements, SOJUUnlockablesOndemandFenceRequirements, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandSizeRequirements;

@interface SOJUUnlockablesOndemandOfferedInventory : SCSojuMessage <SOJUUnlockablesOndemandOfferedInventory>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSchedule:(id)arg1 fenceRequirements:(id)arg2 sizeRequirements:(id)arg3 assetRequirements:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) SOJUUnlockablesOndemandAssetRequirements *assetRequirements; // @dynamic assetRequirements;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUUnlockablesOndemandFenceRequirements *fenceRequirements; // @dynamic fenceRequirements;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUUnlockablesOndemandSchedule *schedule; // @dynamic schedule;
@property(readonly, nonatomic) SOJUUnlockablesOndemandSizeRequirements *sizeRequirements; // @dynamic sizeRequirements;
@property(readonly) Class superclass;

@end

