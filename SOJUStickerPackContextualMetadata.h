//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUStickerPackContextualMetadata-Protocol.h"

@class NSNumber, NSString;

@interface SOJUStickerPackContextualMetadata : SCSojuMessage <SOJUStickerPackContextualMetadata>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithPlacement:(id)arg1 priority:(id)arg2 displayCount:(id)arg3;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *displayCount; // @dynamic displayCount;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *placement; // @dynamic placement;
@property(readonly, nonatomic) NSNumber *priority; // @dynamic priority;
@property(readonly) Class superclass;

@end

