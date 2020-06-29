//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesArSegmentationFilter-Protocol.h"

@class NSNumber, NSString, SOJUContextFilterSkyItem, SOJUPurikuraPatternItem;

@interface SOJUUnlockablesArSegmentationFilter : SCSojuMessage <SOJUUnlockablesArSegmentationFilter>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSky:(id)arg1 portrait:(id)arg2 shouldStillDisplayWithoutSegmentationMatch:(id)arg3;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUPurikuraPatternItem *portrait; // @dynamic portrait;
@property(readonly, nonatomic) NSNumber *shouldStillDisplayWithoutSegmentationMatch; // @dynamic shouldStillDisplayWithoutSegmentationMatch;
@property(readonly, nonatomic) SOJUContextFilterSkyItem *sky; // @dynamic sky;
@property(readonly) Class superclass;

@end

