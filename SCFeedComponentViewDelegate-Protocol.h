//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;

@protocol SCFeedComponentViewDelegate <NSObject>
- (void)handlePressOnChatButton:(UIGestureRecognizer *)arg1;
- (void)handlePressOnCognacButton:(UIGestureRecognizer *)arg1;
- (void)handlePressOnRetryButton:(UIGestureRecognizer *)arg1;
- (void)handlePressOnBitmoji;
- (void)handlePressOnStoryIcon;
- (void)handlePressOnCallingButton:(UIGestureRecognizer *)arg1;
- (void)handlePressOnSnapButton;
- (void)handlePressOnReplyButton;
@end

