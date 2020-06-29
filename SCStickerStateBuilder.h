//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCStickerTappableElementBounds, SOJUGalleryInfoStickerStyle, SOJUSticker;

@interface SCStickerStateBuilder : NSObject
{
    unsigned long long _type;
    unsigned long long _infoStickerType;
    NSString *_emoji;
    SOJUSticker *_chatSticker;
    struct CGSize _relativeSize;
    struct CGPoint _center;
    double _rotation;
    double _scale;
    SCStickerTappableElementBounds *_tappableElementBounds;
    _Bool _isTracking;
    NSArray *_trackingTrajectory;
    SOJUGalleryInfoStickerStyle *_infoStickerStyle;
    _Bool _isAnimated;
    long long _uniqueId;
    _Bool _isFlipped;
}

+ (id)stickerStateFromExistingStickerState:(id)arg1;
+ (id)stickerState;
- (void).cxx_destruct;
- (id)withIsFlipped:(_Bool)arg1;
- (id)withUniqueId:(long long)arg1;
- (id)withIsAnimated:(_Bool)arg1;
- (id)withInfoStickerStyle:(id)arg1;
- (id)withTrackingTrajectory:(id)arg1;
- (id)withIsTracking:(_Bool)arg1;
- (id)withTappableElementBounds:(id)arg1;
- (id)withScale:(double)arg1;
- (id)withRotation:(double)arg1;
- (id)withCenter:(struct CGPoint)arg1;
- (id)withRelativeSize:(struct CGSize)arg1;
- (id)withChatSticker:(id)arg1;
- (id)withEmoji:(id)arg1;
- (id)withInfoStickerType:(unsigned long long)arg1;
- (id)withType:(unsigned long long)arg1;
- (id)build;

@end

