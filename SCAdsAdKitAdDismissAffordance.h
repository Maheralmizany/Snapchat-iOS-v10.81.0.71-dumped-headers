//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Value;

@interface SCAdsAdKitAdDismissAffordance : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Value *dismissDelaySeconds; // @dynamic dismissDelaySeconds;
@property(retain, nonatomic) GPBInt32Value *endcardDismissDelaySeconds; // @dynamic endcardDismissDelaySeconds;
@property(nonatomic) _Bool hasDismissDelaySeconds; // @dynamic hasDismissDelaySeconds;
@property(nonatomic) _Bool hasEndcardDismissDelaySeconds; // @dynamic hasEndcardDismissDelaySeconds;
@property(nonatomic) _Bool shouldEnableDismissDelay; // @dynamic shouldEnableDismissDelay;

@end

