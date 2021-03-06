//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCCognacBlizzardEventLoggingController, SCCognacDataStorage, SCCognacServiceCoordinator, UIViewController;
@protocol SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate, SCGroupManager, SCImageDownloading;

@interface SCCognacChatDrawerCollectionViewSectionActionHandler : NSObject <SCActionHandling>
{
    SCCognacDataStorage *_cognacDataStorage;
    SCCognacServiceCoordinator *_cognacServiceCoordinator;
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
    id <SCGroupManager> _groupManager;
    id <SCImageDownloading> _imageDownloader;
    UIViewController *_presentingViewController;
    id <SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate> _delegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SCGroupManager> groupManager; // @synthesize groupManager=_groupManager;
@property(readonly, nonatomic) SCCognacBlizzardEventLoggingController *eventLoggingController; // @synthesize eventLoggingController=_eventLoggingController;
- (void).cxx_destruct;
- (void)_handleGetAppCompleteForMessageButtonWithAppDataModel:(id)arg1 conversationId:(id)arg2 resetLoadingState:(CDUnknownBlockType)arg3 context:(unsigned long long)arg4 shareInfo:(id)arg5;
- (void)_launchAppFromChatMessageWithAppId:(id)arg1 conversationId:(id)arg2 resetLoadingState:(CDUnknownBlockType)arg3 context:(unsigned long long)arg4 shareInfo:(id)arg5;
- (void)didTapOnAppShareMessageView:(id)arg1;
- (void)didTapOnCognacMessageViewButton:(id)arg1;
- (void)_launchAppInstanceWithAppId:(id)arg1 conversationId:(id)arg2 cell:(id)arg3 resetLoadingState:(CDUnknownBlockType)arg4 context:(unsigned long long)arg5 shareInfo:(id)arg6;
- (void)_tryToLaunchWithAppId:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 cell:(id)arg4;
- (void)_handleWithSender:(id)arg1 actionDataModel:(id)arg2 fromSourceView:(id)arg3 actionIdentifier:(id)arg4;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithDataStorage:(id)arg1 serviceCoordinator:(id)arg2 presentingViewController:(id)arg3 eventLoggingController:(id)arg4 groupManager:(id)arg5 imageDownloader:(id)arg6 delegate:(id)arg7;
- (void)logCognacDrawerActionEventWithEventName:(id)arg1 conversationId:(id)arg2 appId:(id)arg3 tileState:(long long)arg4 hasActiveAppInstance:(_Bool)arg5 isNewApp:(_Bool)arg6 isUpdatedApp:(_Bool)arg7 ranking:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

