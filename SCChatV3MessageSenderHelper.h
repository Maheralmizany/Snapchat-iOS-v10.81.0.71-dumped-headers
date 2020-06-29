//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCChatReplyMediaProperties, SCLazy, SCPlatformAnalyticsDestinationInfo, SCUserSession;
@protocol SCChatConversationManager;

@interface SCChatV3MessageSenderHelper : NSObject
{
    id <SCChatConversationManager> _manager;
    NSString *_conversationId;
    _Bool _isArroyoConversation;
    SCChatReplyMediaProperties *_story;
    long long _chatSource;
    long long _source;
    SCUserSession *_userSession;
    _Bool _isStorySpectaclesMedia;
    SCPlatformAnalyticsDestinationInfo *_destination;
    _Bool _hasSeenSnapProPublicStoryReplyDisclaimer;
    SCLazy *_bloopsAPI;
}

- (void).cxx_destruct;
- (id)_chatSendAnalyticsDataModelWithDrawerMetricInfo:(id)arg1;
- (id)_bloopsInfoWithBloopsMediaProvider:(id)arg1 fromFullscreen:(_Bool)arg2 fromPosition:(unsigned long long)arg3 viewTimeInMilliseconds:(unsigned long long)arg4 sentBloopFeatures:(id)arg5 notSentBloopFeatures:(id)arg6;
- (void)sendAudioNoteWithData:(id)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMediaDrawerMedia:(id)arg1 fromLocation:(CDStruct_1dee9796)arg2 drawerMode:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendBloop:(id)arg1 fromCategory:(id)arg2 fromPosition:(unsigned long long)arg3 fromFullscreen:(_Bool)arg4 fromSource:(long long)arg5 drawerMode:(long long)arg6 viewTimeInMilliseconds:(unsigned long long)arg7 sentBloopFeatures:(id)arg8 notSentBloopFeatures:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (void)_updateStickerUsageWithSticker:(id)arg1;
- (void)_sendIncludedSticker:(id)arg1 analyticsDataModel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendEmojiSticker:(id)arg1 analyticsDataModel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendCustomSticker:(id)arg1 analyticsDataModel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendSticker:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 fromSource:(long long)arg4 drawerMode:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendGifData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendGifMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendTextMessage:(id)arg1 toStory:(id)arg2 analyticsDataModel:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendTextMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithConversationManager:(id)arg1 userSession:(id)arg2 conversationId:(id)arg3 story:(id)arg4 isStorySpectaclesMedia:(_Bool)arg5 chatSource:(long long)arg6 source:(long long)arg7 destination:(id)arg8 hasSeenSnapProPublicStoryReplyDisclaimer:(_Bool)arg9;

@end

