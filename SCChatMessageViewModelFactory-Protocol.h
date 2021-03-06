//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SCChatActiveConversationMetadata, SCChatConversationViewModelV3, SCChatMessageAnimationData, SCChatMessageMetadata, SCChatMessageViewModelConfig, SCChatUIBatchMessageParsingData, SCContextV3PostSnapParams;
@protocol SCChatGroup, SCChatMessageViewModel, SCChatRenderingConversation, SCChatRenderingMessage;

@protocol SCChatMessageViewModelFactory <NSObject>
- (SCChatConversationViewModelV3 *)conversationLoadingViewModel:(NSString *)arg1 metadata:(SCChatActiveConversationMetadata *)arg2 currentUsername:(NSString *)arg3 currentUserId:(NSString *)arg4 isArroyoConversation:(_Bool)arg5;
- (id <SCChatMessageViewModel>)viewModelForPendingSnaps:(long long)arg1 pendingChats:(long long)arg2 conversationId:(NSString *)arg3 recipientUsername:(NSString *)arg4;
- (id <SCChatMessageViewModel>)viewModelForPlaceholder;
- (id <SCChatMessageViewModel>)viewModelForLoading:(long long)arg1 conversationId:(NSString *)arg2 sinceMessageId:(NSString *)arg3 isArroyoConversation:(_Bool)arg4;
- (id <SCChatMessageViewModel>)viewModelForEmptyChatConversation:(id <SCChatRenderingConversation>)arg1;
- (id <SCChatMessageViewModel>)viewModelForToday;
- (id <SCChatMessageViewModel>)viewModelForMessage:(id <SCChatRenderingMessage>)arg1 messageGroup:(NSArray *)arg2 withConversation:(id <SCChatRenderingConversation>)arg3 messageMetadata:(SCChatMessageMetadata *)arg4 group:(id <SCChatGroup>)arg5 earlierContentExists:(_Bool)arg6 currentUsername:(NSString *)arg7 currentUserId:(NSString *)arg8 config:(SCChatMessageViewModelConfig *)arg9 previousViewModel:(id <SCChatMessageViewModel>)arg10 parsingData:(SCChatUIBatchMessageParsingData *)arg11 isFailedAtLeastOnce:(_Bool)arg12 messageAnimationData:(SCChatMessageAnimationData *)arg13 miniThumbnailImages:(NSDictionary *)arg14 snapchattersData:(NSDictionary *)arg15 postSnapActionsParams:(SCContextV3PostSnapParams *)arg16 isGroupInviteChat:(_Bool)arg17 showsCreateMyCameo:(_Bool)arg18;
@end

