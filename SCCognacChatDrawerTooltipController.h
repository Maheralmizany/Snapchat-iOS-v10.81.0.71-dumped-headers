//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatInputTextViewListener-Protocol.h"

@class NSString, SCCognacBlizzardEventLoggingController, SCCognacDataStorage, SCExperimentManager, SCFeatureSettingsService, SCLazy, UIView;
@protocol SCImageDownloading;

@interface SCCognacChatDrawerTooltipController : NSObject <SCChatInputTextViewListener>
{
    SCLazy *_tooltipLazy;
    SCCognacDataStorage *_dataStorage;
    SCLazy *_snapchatterFetcher;
    SCLazy *_friendScoreCoordinator;
    id <SCImageDownloading> _imageDownloader;
    SCFeatureSettingsService *_featureSettingsService;
    SCExperimentManager *_experimentManager;
    UIView *_targetView;
    NSString *_conversationId;
    NSString *_currentUsername;
    NSString *_currentUserAvatarId;
    _Bool _currentConversationEligibleForTooltip;
    _Bool _isGroupConversation;
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
}

@property(readonly, nonatomic) SCCognacBlizzardEventLoggingController *eventLoggingController; // @synthesize eventLoggingController=_eventLoggingController;
- (void).cxx_destruct;
- (_Bool)_shouldShowAlertDialog;
- (void)_handleFriendScoreFetchCompletionWithFriendScore:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleSnapchatterFetchCompletionWithSnapchatters:(id)arg1 username:(id)arg2 conversationId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_validateConversationEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldShowTooltip;
- (id)_createTooltip;
- (void)_showTooltipWithCheveronXPosition:(double)arg1;
- (void)inputViewController:(id)arg1 textView:(id)arg2 willChangeTextInRange:(struct _NSRange)arg3 replacementText:(id)arg4;
- (void)showAlertDialog;
- (void)hideTooltip;
- (void)setConversationId:(id)arg1 isGroupConversation:(_Bool)arg2 cheveronXPosition:(double)arg3 shouldAttemptToShowTooltip:(_Bool)arg4;
- (id)initWithTargetView:(id)arg1 dataStorage:(id)arg2 currentUsername:(id)arg3 currentUserAvatarId:(id)arg4 snapchatterFetcher:(id)arg5 friendScoreCoordinator:(id)arg6 imageDownloader:(id)arg7 featureSettingsService:(id)arg8 eventLoggingController:(id)arg9 experimentManager:(id)arg10;
- (void)logTootipDisplayEvent:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

