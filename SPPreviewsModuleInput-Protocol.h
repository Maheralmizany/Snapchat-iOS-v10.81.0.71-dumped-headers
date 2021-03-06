//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPViperModuleInput-Protocol.h"

@class NSArray, NSNumber, NSString, SPAttributionRepresentationModel, SPPersonsSource, SPPreviewsModuleDataSource, SPPreviewsModuleUIState, SPPreviewsViewConfiguration, SPScenario, UIImage, UIView;

@protocol SPPreviewsModuleInput <SPViperModuleInput>
@property(retain, nonatomic) SPPersonsSource *personsSource;
@property(retain, nonatomic) SPPreviewsModuleDataSource *dataSource;
@property(nonatomic) _Bool scrollEnabled;
- (SPAttributionRepresentationModel *)getAttributionOfItemIndex:(unsigned long long)arg1;
- (void)setNeedsShowRetakeSelfieSection:(_Bool)arg1 withPanelImage:(UIImage *)arg2 animated:(_Bool)arg3;
- (void)hidePressHoldGuide;
- (void)showPressHoldGuideAtIndex:(unsigned long long)arg1 withImage:(UIImage *)arg2 text:(NSString *)arg3;
- (void)setNeedsShowEnableTwoPersonBottomSection:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNeedsShowEnableTwoPersonTopSection:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupPreviewsConfiguration:(SPPreviewsViewConfiguration *)arg1;
- (void)setScrollDirection:(unsigned long long)arg1;
- (unsigned long long)scrollDirection;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)getScrollViewContentInset;
- (_Bool)isItemAtIndexInLastRow:(unsigned long long)arg1;
- (_Bool)isItemFullyVisibleAtIndex:(unsigned long long)arg1;
- (void)cancelSelection;
- (UIView *)getViewFromItemAtIndex:(unsigned long long)arg1;
- (void)selectItemAtIndex:(unsigned long long)arg1;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)exitVisibleState;
- (void)enterVisibleState;
- (NSArray *)getScenarios;
- (NSNumber *)getSelectedPreviewIndex;
- (UIImage *)getThumbnailOfForScenario:(SPScenario *)arg1;
- (UIImage *)getThumbnailOfSelectedPreview;
- (struct CGSize)getPreviewSize;
- (UIView *)getView;
- (void)flushThumbnails;
- (void)reload;
- (SPPreviewsModuleUIState *)backupUIState;
- (void)restoreUIState:(SPPreviewsModuleUIState *)arg1;
- (void)updateVolumeEnabledStatus:(_Bool)arg1;
@end

