//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "SCChatDrawerLogger-Protocol.h"
#import "SCChatInputDrawerRenderable-Protocol.h"
#import "SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate-Protocol.h"
#import "SCCognacChatDrawerCollectionViewSectionDataProviderDelegate-Protocol.h"
#import "SCCognacChatDrawerItemAppearanceControllerDelegate-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSString, SCChatInputItem, SCChatInputItemCallListener, SCChatInputViewController, SCCognacBlizzardEventLoggingController, SCCognacChatDrawerCollectionViewSectionActionHandler, SCCognacChatDrawerCollectionViewSectionDataProvider, SCCognacChatDrawerItemAppearanceController, SCCognacChatDrawerTabView, SCCognacDataStorage, SCEventListenerAnnouncer, SCExperimentManager, SCFeatureSettingsService, SCLazy, SCPreferences, SCSearchQueryResultController;
@protocol SCGroupManager, SCImageDownloading;

@interface SCCognacChatDrawerViewController : UICollectionViewController <SCCognacChatDrawerCollectionViewSectionDataProviderDelegate, SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate, SCEventListener, SCCognacChatDrawerItemAppearanceControllerDelegate, SCChatInputDrawerRenderable, SCChatDrawerLogger>
{
    SCCognacDataStorage *_dataStorage;
    SCCognacChatDrawerCollectionViewSectionActionHandler *_actionHandler;
    SCCognacChatDrawerCollectionViewSectionDataProvider *_dataProvider;
    SCSearchQueryResultController *_queryResultController;
    SCLazy *_tooltipControllerLazy;
    SCFeatureSettingsService *_featureSettingsService;
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
    NSString *_currentUsername;
    NSString *_currentUserAvatarId;
    NSString *_currentConversationId;
    SCLazy *_snapchatterFetcher;
    id <SCGroupManager> _groupManager;
    SCLazy *_friendScoreCoordinator;
    id <SCImageDownloading> _imageDownloader;
    SCPreferences *_preferences;
    SCExperimentManager *_experimentManager;
    SCCognacChatDrawerItemAppearanceController *_inputItemAppearanceController;
    SCLazy *_emptyStateViewLazy;
    SCLazy *_loadingStateViewLazy;
    _Bool _didRegisterPanGesture;
    SCCognacChatDrawerTabView *_tabView;
    SCChatInputViewController *inputController;
    double defaultDrawerHeight;
    SCChatInputItem *_inputItem;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCChatInputItemCallListener *_callListener;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCChatInputItemCallListener *callListener; // @synthesize callListener=_callListener;
@property(readonly, nonatomic) SCCognacChatDrawerCollectionViewSectionDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) SCCognacBlizzardEventLoggingController *eventLoggingController; // @synthesize eventLoggingController=_eventLoggingController;
@property(readonly, nonatomic) id <SCGroupManager> groupManager; // @synthesize groupManager=_groupManager;
@property(readonly, nonatomic) SCEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
@property(nonatomic) __weak SCChatInputItem *inputItem; // @synthesize inputItem=_inputItem;
@property(nonatomic) double defaultDrawerHeight; // @synthesize defaultDrawerHeight;
@property(nonatomic) __weak SCChatInputViewController *inputController; // @synthesize inputController;
- (void).cxx_destruct;
- (void)chatDrawerItemAppearanceController:(id)arg1 animateNewTileAtIndex:(unsigned long long)arg2;
- (_Bool)openedWithSearch;
- (long long)sentItemCount;
- (long long)drawerType;
- (void)_hideTooltip;
- (id)_createLoadingStateView;
- (id)_createEmptyStateView;
- (id)_createTooltipController;
- (void)_updateInputItemVisibilityIfNecessary;
- (void)cognacChatDrawerCollectionViewSectionActionHandler:(id)arg1 openAppWithAppId:(id)arg2 conversationId:(id)arg3 context:(unsigned long long)arg4;
- (void)cognacChatDrawerCollectionViewSectionActionHandler:(id)arg1 didLaunchAppInstanceFailWithAppId:(id)arg2 conversationId:(id)arg3;
- (void)cognacChatDrawerCollectionViewSectionActionHandler:(id)arg1 didLaunchAppInstanceSucceedWithAppId:(id)arg2 conversationId:(id)arg3 context:(unsigned long long)arg4 shareInfo:(id)arg5;
- (void)cognacChatDrawerDataProvider:(id)arg1 didUpdateWithConversationId:(id)arg2;
- (void)cognacChatDrawerDataProviderDidUpdateAppList:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didActivateDrawerWithDeeplinkIdentifier:(id)arg1 subitemDeeplinkIdentifier:(id)arg2;
- (void)willSuspendActive;
- (void)willResumeActive;
- (void)sizeDidChange:(struct CGSize)arg1;
- (void)_announceActivityEventWithEventName:(id)arg1;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)_updateDrawerWithAppsAvailable:(_Bool)arg1;
- (void)_updateDrawerViewWithViewModelCount:(unsigned long long)arg1;
- (double)maximumDrawerHeight;
- (void)didEndPanningToState:(unsigned long long)arg1;
- (void)willEndPanningToState:(unsigned long long)arg1;
- (void)didPanFromState:(unsigned long long)arg1;
- (void)willBeginPanningFromState:(unsigned long long)arg1;
- (_Bool)canPanDrawer;
- (id)chatInputTextViewListener;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithPresentingViewController:(id)arg1 dataStorage:(id)arg2 serviceCoordinator:(id)arg3 dataProvider:(id)arg4 messageHandler:(id)arg5 currentUsername:(id)arg6 currentUserAvatarId:(id)arg7 snapchatterFetcher:(id)arg8 friendScoreCoordinator:(id)arg9 imageDownloader:(id)arg10 featureSettingsService:(id)arg11 groupManager:(id)arg12 eventLoggingController:(id)arg13 preferences:(id)arg14 experimentManager:(id)arg15;
- (void)logDrawerTabTapEventWithCurrentTapIndex:(unsigned long long)arg1 previousTabIndex:(unsigned long long)arg2;
- (void)logChatDrawerCloseEvent;
- (void)logChatDrawerOpenEventWithIsBadged:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

