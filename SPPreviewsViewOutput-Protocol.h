//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, UIScrollView;

@protocol SPPreviewsViewOutput
- (void)didTapRetakeSelfieSectionCloseButton;
- (void)didTapRetakeSelfieSectionButton;
- (void)didTapEnableTwoPersonBottomSectionButton;
- (void)didTapEnableTwoPersonTopSectionCloseButton;
- (void)didTapEnableTwoPersonTopSectionButton;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)didUpdateItemsAtIndexes:(NSArray *)arg1;
- (void)updateScrollDirection:(unsigned long long)arg1;
- (void)willStartPlayItemAtIndex:(unsigned long long)arg1;
- (void)didEndDisplayingItemAtIndex:(unsigned long long)arg1;
- (void)willDisplayItemAtIndex:(unsigned long long)arg1;
- (void)didDoubleTapScenarioAtIndex:(unsigned long long)arg1;
- (void)didLongTapScenarioAtIndex:(unsigned long long)arg1;
- (void)didSelectScenarioAtIndex:(unsigned long long)arg1;
@end

