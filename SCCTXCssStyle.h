//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleValue, NSString, SCCTXCssStyle_CssColor;

@interface SCCTXCssStyle : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCTXCssStyle_CssColor *backgroundColor; // @dynamic backgroundColor;
@property(copy, nonatomic) NSString *border; // @dynamic border;
@property(copy, nonatomic) NSString *borderRadius; // @dynamic borderRadius;
@property(nonatomic) int borderStyle; // @dynamic borderStyle;
@property(retain, nonatomic) SCCTXCssStyle_CssColor *foregroundColor; // @dynamic foregroundColor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasForegroundColor; // @dynamic hasForegroundColor;
@property(nonatomic) _Bool hasOpacity; // @dynamic hasOpacity;
@property(nonatomic) _Bool hasShadow; // @dynamic hasShadow;
@property(retain, nonatomic) GPBDoubleValue *opacity; // @dynamic opacity;
@property(nonatomic) _Bool outlined; // @dynamic outlined;
@property(copy, nonatomic) NSString *shadow; // @dynamic shadow;

@end

