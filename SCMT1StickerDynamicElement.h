//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMT1GameElement;

@interface SCMT1StickerDynamicElement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int bottomRightX; // @dynamic bottomRightX;
@property(nonatomic) int bottomRightY; // @dynamic bottomRightY;
@property(nonatomic) _Bool drawOnNonClusteredSticker; // @dynamic drawOnNonClusteredSticker;
@property(readonly, nonatomic) int dynamicContentOneOfCase; // @dynamic dynamicContentOneOfCase;
@property(retain, nonatomic) SCMT1GameElement *gameContent; // @dynamic gameContent;
@property(nonatomic) int originX; // @dynamic originX;
@property(nonatomic) int originY; // @dynamic originY;

@end

