//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCSmartVideoSwipeFilterView;

@protocol SCSmartVideoSwipeFilterViewDelegate
- (void)videoSwipeFilterViewWillLoopVideo:(SCSmartVideoSwipeFilterView *)arg1;
- (void)videoSwipeFilterViewResetVideoAsset:(SCSmartVideoSwipeFilterView *)arg1;
- (void)videoSwipeFilterView:(SCSmartVideoSwipeFilterView *)arg1 didPlayToSnapAtIndex:(long long)arg2 lastPlayedIndex:(long long)arg3;
- (void)videoSwipeFilterView:(SCSmartVideoSwipeFilterView *)arg1 didPlayFromSourceAtIndex:(long long)arg2 snapIndex:(long long)arg3 toSourceAtIndex:(long long)arg4 snapIndex:(long long)arg5;
- (void)didRenderFirstFrame:(SCSmartVideoSwipeFilterView *)arg1 ofFrameSourceAtIndex:(long long)arg2;
@end

