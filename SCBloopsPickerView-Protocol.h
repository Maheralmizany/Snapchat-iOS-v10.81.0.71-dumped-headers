//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SCBloopsPreviewsEmptyCellDelegate, SCBloopsPreviewsViewInput, SCBloopsPreviewsViewOutput, SCBloopsStickersOnboardingCellDelegate;

@protocol SCBloopsPickerView <NSObject>
@property(readonly, nonatomic) UIView<SCBloopsPreviewsViewInput> *currentBloopsPreviewsView;
@property(nonatomic) __weak id <SCBloopsStickersOnboardingCellDelegate> bloopsStickersOnboardingCellDelegate;
@property(nonatomic) __weak id <SCBloopsPreviewsEmptyCellDelegate> bloopsPreviewsEmptyCellDelegate;
@property(nonatomic) __weak id <SCBloopsPreviewsViewOutput> bloopsPreviewsViewOutput;
- (void)updateInsetsRespectToBloopsBottomBarHeight:(double)arg1;
@end

