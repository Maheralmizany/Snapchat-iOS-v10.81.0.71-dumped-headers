//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SCStickerLoadingStickerMetadata <NSObject>
@property(readonly, copy, nonatomic) NSString *boltContentUrl;
@property(readonly, copy, nonatomic) NSNumber *order;
@property(readonly, copy, nonatomic) NSNumber *uniqueId;
@property(readonly, copy, nonatomic) NSNumber *active;
@property(readonly, copy, nonatomic, getter=isAnimated) NSNumber *animated;
@property(readonly, copy, nonatomic) NSArray *capabilities;
@property(readonly, copy, nonatomic) NSString *subpack;
@property(readonly, copy, nonatomic) NSString *stickerType;
@property(readonly, copy, nonatomic) NSString *stickerId;
@end

