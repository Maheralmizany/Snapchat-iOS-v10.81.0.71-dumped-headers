//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUPurikuraPatternItem-Protocol.h"

@class NSNumber, NSString;

@interface SOJUPurikuraPatternItem : SCSojuMessage <SOJUPurikuraPatternItem>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUuid:(id)arg1 url:(id)arg2 thumbnailX:(id)arg3 thumbnailY:(id)arg4 thumbnailWidth:(id)arg5 thumbnailHeight:(id)arg6 colorFilter:(id)arg7 bokeh:(id)arg8 beauty:(id)arg9;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *beauty; // @dynamic beauty;
@property(readonly, nonatomic) NSNumber *bokeh; // @dynamic bokeh;
@property(readonly, nonatomic) NSString *colorFilter; // @dynamic colorFilter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *thumbnailHeight; // @dynamic thumbnailHeight;
@property(readonly, nonatomic) NSNumber *thumbnailWidth; // @dynamic thumbnailWidth;
@property(readonly, nonatomic) NSNumber *thumbnailX; // @dynamic thumbnailX;
@property(readonly, nonatomic) NSNumber *thumbnailY; // @dynamic thumbnailY;
@property(readonly, nonatomic) NSString *url; // @dynamic url;
@property(readonly, nonatomic) NSString *uuid; // @dynamic uuid;

@end

