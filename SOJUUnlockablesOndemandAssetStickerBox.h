//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesOndemandAssetStickerBox-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandAssetStickerBox : SCSojuMessage <SOJUUnlockablesOndemandAssetStickerBox>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithImagePngBase64:(id)arg1 posX:(id)arg2 posY:(id)arg3 width:(id)arg4 height:(id)arg5 rotation:(id)arg6 type:(id)arg7 templateId:(id)arg8 resourceUrl:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *height; // @dynamic height;
@property(readonly, nonatomic) NSString *imagePngBase64; // @dynamic imagePngBase64;
@property(readonly, nonatomic) NSNumber *posX; // @dynamic posX;
@property(readonly, nonatomic) NSNumber *posY; // @dynamic posY;
@property(readonly, nonatomic) NSString *resourceUrl; // @dynamic resourceUrl;
@property(readonly, nonatomic) NSNumber *rotation; // @dynamic rotation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *templateId; // @dynamic templateId;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) NSNumber *width; // @dynamic width;

@end

