//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUCommerceCustomImageFrame-Protocol.h"

@class NSNumber, NSString;

@interface SOJUCommerceCustomImageFrame : SCSojuMessage <SOJUCommerceCustomImageFrame>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTopLeftX:(id)arg1 topLeftY:(id)arg2 frameHeight:(id)arg3 frameWidth:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *frameHeight; // @dynamic frameHeight;
@property(readonly, nonatomic) NSNumber *frameWidth; // @dynamic frameWidth;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *topLeftX; // @dynamic topLeftX;
@property(readonly, nonatomic) NSNumber *topLeftY; // @dynamic topLeftY;

@end

