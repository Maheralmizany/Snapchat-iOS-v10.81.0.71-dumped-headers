//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol SCContextMessagingControllerDelegate, SCPageNameLogging;

@protocol SCContextMessagingController <NSObject>
@property(nonatomic) __weak id <SCContextMessagingControllerDelegate> delegate;
- (void)presentInFullscreenAnimated:(_Bool)arg1 withKeyboardFocused:(_Bool)arg2 completion:(void (^)(void))arg3;
- (UIViewController<SCPageNameLogging> *)fullscreenViewController;
- (void)viewAboveKeyboardWillExpand;
- (void)updateChatStickerFriendmojiInfo;
- (void)didEndPresentingInputBarView;
- (void)didPresentInputBarView;
- (double)inputBarViewHeight;
- (UIView *)inputBarView;
@end

