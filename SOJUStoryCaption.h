//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUStoryCaption-Protocol.h"

@class NSNumber, NSString;

@interface SOJUStoryCaption : SCSojuMessage <SOJUStoryCaption>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithFontSize:(id)arg1 centerX:(id)arg2 centerY:(id)arg3 rotation:(id)arg4 tracking:(id)arg5 type:(id)arg6 width:(id)arg7 height:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSNumber *centerX; // @dynamic centerX;
@property(readonly, nonatomic) NSNumber *centerY; // @dynamic centerY;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *fontSize; // @dynamic fontSize;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *height; // @dynamic height;
@property(readonly, nonatomic) NSNumber *rotation; // @dynamic rotation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *tracking; // @dynamic tracking;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) NSNumber *width; // @dynamic width;

@end

