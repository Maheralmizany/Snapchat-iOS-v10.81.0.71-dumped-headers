//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandSizeRequirements-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandSizeRequirements : SCSojuMessage <SOJUUnlockablesOndemandSizeRequirements>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithMaxSquareMeters:(id)arg1 minSquareMeters:(id)arg2 earthRadiusInMeters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *earthRadiusInMeters; // @dynamic earthRadiusInMeters;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *maxSquareMeters; // @dynamic maxSquareMeters;
@property(readonly, nonatomic) NSNumber *minSquareMeters; // @dynamic minSquareMeters;
@property(readonly) Class superclass;

@end

