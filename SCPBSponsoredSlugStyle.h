//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPBStrPoint;

@interface SCPBSponsoredSlugStyle : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *color; // @dynamic color;
@property(copy, nonatomic) NSString *dropshadowColor; // @dynamic dropshadowColor;
@property(retain, nonatomic) SCPBStrPoint *dropshadowOffset; // @dynamic dropshadowOffset;
@property(copy, nonatomic) NSString *font; // @dynamic font;
@property(nonatomic) _Bool hasDropshadowOffset; // @dynamic hasDropshadowOffset;
@property(copy, nonatomic) NSString *textSize; // @dynamic textSize;

@end

