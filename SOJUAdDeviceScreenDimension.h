//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdDeviceScreenDimension-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdDeviceScreenDimension : SCSojuMessage <SOJUAdDeviceScreenDimension>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithHeight:(id)arg1 width:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *height; // @dynamic height;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *width; // @dynamic width;

@end

