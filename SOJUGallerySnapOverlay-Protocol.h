//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryBounceState, SOJUGalleryCaption, SOJUGalleryCropping, SOJUGalleryDrawing, SOJUGalleryDrawingV2, SOJUGalleryEraser, SOJUGalleryFilters, SOJUGalleryMagicMomentState, SOJUGalleryMagicTools;

@protocol SOJUGallerySnapOverlay <SCSojuMessage>
@property(readonly, nonatomic) NSString *lensMetadata;
@property(readonly, nonatomic) SOJUGalleryMagicMomentState *magicMoment;
@property(readonly, nonatomic) NSString *friendBitmojiAvatarId;
@property(readonly, nonatomic) NSString *userBitmojiAvatarId;
@property(readonly, nonatomic) SOJUGalleryBounceState *bounceState;
@property(readonly, nonatomic) NSString *previewLensId;
@property(readonly, nonatomic) NSString *craftType;
@property(readonly, nonatomic) NSArray *captions;
@property(readonly, nonatomic) SOJUGalleryCropping *cropping;
@property(readonly, nonatomic) NSString *audiofilterStyleId;
@property(readonly, nonatomic) SOJUGalleryMagicTools *magicTools;
@property(readonly, nonatomic) SOJUGalleryEraser *eraser;
@property(readonly, nonatomic) NSArray *snapAttachments;
@property(readonly, nonatomic) NSString *snapcraftStyleId;
@property(readonly, nonatomic) NSNumber *audioDisabled;
@property(readonly, nonatomic) NSString *lensId;
@property(readonly, nonatomic) NSArray *stickers;
@property(readonly, nonatomic) SOJUGalleryDrawingV2 *drawingV2;
@property(readonly, nonatomic) SOJUGalleryDrawing *drawing;
@property(readonly, nonatomic) SOJUGalleryCaption *caption;
@property(readonly, nonatomic) SOJUGalleryFilters *filters;
@end
