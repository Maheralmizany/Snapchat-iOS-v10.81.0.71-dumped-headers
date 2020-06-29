//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, NSString, SCActionMenuViewController, SCMediaChatViewModel, SCMessageChatViewModel, UIImage;
@protocol SCChatMetadataForwardable;

@protocol SCActionMenuViewControllerDelegate
- (void)didPressSnapReplyForViewModel:(SCMessageChatViewModel *)arg1 withSticker:(UIImage *)arg2;
- (void)didPressAddToGroupButton:(id)arg1;
- (void)didSaveMediasToCameraRollFromViewModel:(SCMessageChatViewModel *)arg1;
- (void)didBatchSaveOrUnsaveMessageIds:(NSSet *)arg1 conversationId:(NSString *)arg2 toSaved:(_Bool)arg3;
- (void)didSaveCustomSticker:(SCMessageChatViewModel *)arg1;
- (void)didPressEraseMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)unsaveMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)saveMessageId:(NSString *)arg1 conversationId:(NSString *)arg2;
- (void)didPressSendToForMediaChatViewModel:(SCMediaChatViewModel *)arg1;
- (void)didPressSendToForForwardableViewModel:(SCMessageChatViewModel<SCChatMetadataForwardable> *)arg1;
- (void)actionMenuDidDismiss:(SCActionMenuViewController *)arg1;
- (void)actionMenuWillDismiss:(SCActionMenuViewController *)arg1;
- (void)actionMenuDidOpen:(SCActionMenuViewController *)arg1;
@end

