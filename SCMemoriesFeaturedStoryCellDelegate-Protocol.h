//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMemoriesFeaturedStoryCell, SCMemoriesFeaturedStoryViewModel, UILongPressGestureRecognizer;

@protocol SCMemoriesFeaturedStoryCellDelegate <NSObject>
- (void)featuredStoryCell:(SCMemoriesFeaturedStoryCell *)arg1 handleLongPress:(UILongPressGestureRecognizer *)arg2 entry:(SCMemoriesFeaturedStoryViewModel *)arg3;
- (void)featuredStoryCell:(SCMemoriesFeaturedStoryCell *)arg1 didTapStory:(SCMemoriesFeaturedStoryViewModel *)arg2;
- (void)featuredStoryCell:(SCMemoriesFeaturedStoryCell *)arg1 sendStory:(SCMemoriesFeaturedStoryViewModel *)arg2;
- (void)featuredStoryCell:(SCMemoriesFeaturedStoryCell *)arg1 saveStory:(SCMemoriesFeaturedStoryViewModel *)arg2;
- (void)featuredStoryCell:(SCMemoriesFeaturedStoryCell *)arg1 editStory:(SCMemoriesFeaturedStoryViewModel *)arg2;
- (void)featuredStoryCell:(SCMemoriesFeaturedStoryCell *)arg1 presentActionMenu:(SCMemoriesFeaturedStoryViewModel *)arg2;
@end

