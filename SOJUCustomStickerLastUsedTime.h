//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUCustomStickerLastUsedTime-Protocol.h"

@class NSNumber, NSString;

@interface SOJUCustomStickerLastUsedTime : SCSojuMessage <SOJUCustomStickerLastUsedTime>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithStickerId:(id)arg1 lastUsedTime:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *lastUsedTime; // @dynamic lastUsedTime;
@property(readonly, nonatomic) NSString *stickerId; // @dynamic stickerId;
@property(readonly) Class superclass;

@end
