//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SCPreviewStickerViewSizeChangeDelegate;

@interface SCPreviewStickerViewContentView : UIView
{
    id <SCPreviewStickerViewSizeChangeDelegate> _sizeChangeDelegate;
}

@property(nonatomic) __weak id <SCPreviewStickerViewSizeChangeDelegate> sizeChangeDelegate; // @synthesize sizeChangeDelegate=_sizeChangeDelegate;
- (void).cxx_destruct;
- (id)tappableElementBoundsWithStaticBounds:(struct CGRect)arg1;
- (long long)scaleLimit;
- (_Bool)shouldReceiveTapsViaStickerContainer;
- (void)onStickerViewScaled:(double)arg1;
- (void)onScreenshotTaken;
- (id)renderState;
- (void)pan:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)shouldRespondToTouchControl:(id)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
- (_Bool)hasImage;
- (void)drawScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;

@end

