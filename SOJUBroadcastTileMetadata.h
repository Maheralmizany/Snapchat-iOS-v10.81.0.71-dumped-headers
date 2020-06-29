//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastTileMetadata-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUBroadcastTileMetadata : SCSojuMessage <SOJUBroadcastTileMetadata>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 type:(id)arg2 displayName:(id)arg3 color:(id)arg4 logo:(id)arg5 logoType:(id)arg6 isSponsored:(id)arg7 tiles:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSString *color; // @dynamic color;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSNumber *isSponsored; // @dynamic isSponsored;
@property(readonly, nonatomic) NSString *logo; // @dynamic logo;
@property(readonly, nonatomic) NSString *logoType; // @dynamic logoType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *tiles; // @dynamic tiles;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end

