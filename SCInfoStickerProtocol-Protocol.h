//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStickerProtocol-Protocol.h"

@class NSDictionary;

@protocol SCInfoStickerProtocol <SCStickerProtocol>
@property(readonly, nonatomic) unsigned long long infoType;
- (struct CGSize)intrinsicSize;
- (NSDictionary *)config;
@end

