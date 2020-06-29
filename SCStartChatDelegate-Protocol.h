//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCDeepLinkURL, SCStartChatIdentifier;
@protocol SCFeedToChatTapDetectionViewDelegate, SCPannableCellController, UIViewControllerInteractiveTransitioning;

@protocol SCStartChatDelegate <NSObject>
- (void)setConversationByChatIdentifier:(SCStartChatIdentifier *)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 chatPageSource:(long long)arg3 navigationAction:(long long)arg4 subpageName:(NSString *)arg5;
- (void)navigateToChatViewAnimated:(_Bool)arg1;

@optional
- (void)removeFeedToChatTapDetectionView;
- (void)attachFeedToChatTapDetectionViewWithCurrentTapLocation:(struct CGPoint)arg1 delegate:(id <SCFeedToChatTapDetectionViewDelegate>)arg2;
- (void)navigateToChatViewAnimated:(_Bool)arg1 deepLinkURL:(SCDeepLinkURL *)arg2 additionalInfo:(NSDictionary *)arg3;
- (id <UIViewControllerInteractiveTransitioning>)presentChatViewWithPannableCellController:(id <SCPannableCellController>)arg1;
@end
