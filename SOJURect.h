//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJURect-Protocol.h"

@class NSNumber, NSString;

@interface SOJURect : SCSojuMessage <SOJURect>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithX:(id)arg1 y:(id)arg2 width:(id)arg3 height:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *height; // @dynamic height;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *width; // @dynamic width;
@property(readonly, nonatomic) NSNumber *x; // @dynamic x;
@property(readonly, nonatomic) NSNumber *y; // @dynamic y;

@end

