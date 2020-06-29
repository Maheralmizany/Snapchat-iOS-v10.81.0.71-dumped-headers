//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCStickerPickerHorizontalScrollCell, SCStickerPickerStickerCell, UIImage, UIView;
@protocol SCStickerProtocol;

@protocol SCStickerPickerHorizontalScrollCellDelegate <NSObject>
- (void)stickerPickerHorizontalScrollCellAnnounceDataChange:(SCStickerPickerHorizontalScrollCell *)arg1;
- (void)stickerPickerHorizontalScrollCellViewDidScrollCompletion:(void (^)(_Bool))arg1;
- (_Bool)stickerPickerHorizontalScrollCellShouldShowLoadingSpinner:(SCStickerPickerHorizontalScrollCell *)arg1;
- (UIView *)stickerPickerHorizontalScrollCellEmptyView:(SCStickerPickerHorizontalScrollCell *)arg1;
- (void)horizontalCell:(SCStickerPickerHorizontalScrollCell *)arg1 stickerCell:(SCStickerPickerStickerCell *)arg2 stickerSelected:(id <SCStickerProtocol>)arg3 center:(struct CGPoint)arg4 thumbnail:(UIImage *)arg5 index:(unsigned long long)arg6;
@end
