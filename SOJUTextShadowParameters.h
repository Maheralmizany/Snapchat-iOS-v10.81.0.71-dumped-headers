//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUTextShadowParameters-Protocol.h"

@class NSNumber, NSString, SOJUIntegerPoint;

@interface SOJUTextShadowParameters : SCSojuMessage <SOJUTextShadowParameters>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithColor:(id)arg1 shadowOffset:(id)arg2 blurRadius:(id)arg3;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSNumber *blurRadius; // @dynamic blurRadius;
@property(readonly, nonatomic) NSString *color; // @dynamic color;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUIntegerPoint *shadowOffset; // @dynamic shadowOffset;
@property(readonly) Class superclass;

@end

