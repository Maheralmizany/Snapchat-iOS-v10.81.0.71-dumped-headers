//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCAdsSubsBrandSafety;

@interface SCAdsMixerInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int feedType; // @dynamic feedType;
@property(nonatomic) _Bool hasSubsBrandSafety; // @dynamic hasSubsBrandSafety;
@property(nonatomic) unsigned int minAdsPos; // @dynamic minAdsPos;
@property(nonatomic) unsigned int storyOffset; // @dynamic storyOffset;
@property(retain, nonatomic) SCAdsSubsBrandSafety *subsBrandSafety; // @dynamic subsBrandSafety;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

