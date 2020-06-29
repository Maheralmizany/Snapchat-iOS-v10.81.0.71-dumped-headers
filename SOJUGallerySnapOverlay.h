//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGallerySnapOverlay-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryBounceState, SOJUGalleryCaption, SOJUGalleryCropping, SOJUGalleryDrawing, SOJUGalleryDrawingV2, SOJUGalleryEraser, SOJUGalleryFilters, SOJUGalleryMagicMomentState, SOJUGalleryMagicTools;

@interface SOJUGallerySnapOverlay : SCSojuMessage <SOJUGallerySnapOverlay>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithFilters:(id)arg1 caption:(id)arg2 drawing:(id)arg3 drawingV2:(id)arg4 stickers:(id)arg5 lensId:(id)arg6 audioDisabled:(id)arg7 snapcraftStyleId:(id)arg8 snapAttachments:(id)arg9 eraser:(id)arg10 magicTools:(id)arg11 audiofilterStyleId:(id)arg12 cropping:(id)arg13 captions:(id)arg14 craftType:(id)arg15 previewLensId:(id)arg16 bounceState:(id)arg17 userBitmojiAvatarId:(id)arg18 friendBitmojiAvatarId:(id)arg19 magicMoment:(id)arg20 lensMetadata:(id)arg21;

// Remaining properties
@property(readonly, nonatomic) NSNumber *audioDisabled; // @dynamic audioDisabled;
@property(readonly, nonatomic) NSString *audiofilterStyleId; // @dynamic audiofilterStyleId;
@property(readonly, nonatomic) SOJUGalleryBounceState *bounceState; // @dynamic bounceState;
@property(readonly, nonatomic) SOJUGalleryCaption *caption; // @dynamic caption;
@property(readonly, nonatomic) NSArray *captions; // @dynamic captions;
@property(readonly, nonatomic) NSString *craftType; // @dynamic craftType;
@property(readonly, nonatomic) SOJUGalleryCropping *cropping; // @dynamic cropping;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUGalleryDrawing *drawing; // @dynamic drawing;
@property(readonly, nonatomic) SOJUGalleryDrawingV2 *drawingV2; // @dynamic drawingV2;
@property(readonly, nonatomic) SOJUGalleryEraser *eraser; // @dynamic eraser;
@property(readonly, nonatomic) SOJUGalleryFilters *filters; // @dynamic filters;
@property(readonly, nonatomic) NSString *friendBitmojiAvatarId; // @dynamic friendBitmojiAvatarId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lensId; // @dynamic lensId;
@property(readonly, nonatomic) NSString *lensMetadata; // @dynamic lensMetadata;
@property(readonly, nonatomic) SOJUGalleryMagicMomentState *magicMoment; // @dynamic magicMoment;
@property(readonly, nonatomic) SOJUGalleryMagicTools *magicTools; // @dynamic magicTools;
@property(readonly, nonatomic) NSString *previewLensId; // @dynamic previewLensId;
@property(readonly, nonatomic) NSArray *snapAttachments; // @dynamic snapAttachments;
@property(readonly, nonatomic) NSString *snapcraftStyleId; // @dynamic snapcraftStyleId;
@property(readonly, nonatomic) NSArray *stickers; // @dynamic stickers;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userBitmojiAvatarId; // @dynamic userBitmojiAvatarId;

@end

