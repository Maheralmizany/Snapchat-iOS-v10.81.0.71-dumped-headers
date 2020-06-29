//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCInfoStickerView.h"

#import "SCInfoStickerProtocol-Protocol.h"
#import "SCPreviewStickerViewCycleable-Protocol.h"

@class NSString, SCTopic, UIView;

@interface SCTopicStickerView : SCInfoStickerView <SCInfoStickerProtocol, SCPreviewStickerViewCycleable>
{
    SCTopic *_topic;
    long long _viewType;
    UIView *_stickerView;
}

+ (id)viewForStickerPicker;
+ (id)placeholderTopic;
@property(retain, nonatomic) UIView *stickerView; // @synthesize stickerView=_stickerView;
@property(readonly, nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(readonly, nonatomic) SCTopic *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (long long)scaleLimit;
- (void)cycleStickerToNextStyle;
- (_Bool)shouldRespondToTap:(id)arg1;
- (id)tappableElementBoundsWithStaticBounds:(struct CGRect)arg1;
- (void)_setViewTypeToPillStyle:(unsigned long long)arg1;
- (void)setViewType:(long long)arg1;
- (struct CGSize)intrinsicSize;
@property(readonly, nonatomic) unsigned long long infoType;
- (unsigned long long)type;
- (id)toSOJUSticker;
- (id)config;
- (id)stickerId;
- (id)shortLoggingName;
- (id)packId;
- (id)loggingParameters;
- (id)text;
- (id)displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopic:(id)arg1 viewType:(long long)arg2;
- (id)initWithTopic:(id)arg1;
- (id)initWithTopicStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
