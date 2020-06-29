//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCCheetahSendToViewMenuControllerDelegate-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCNavigationDestination-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"
#import "SCSearchQueryResultControllerDelegate-Protocol.h"
#import "SCSendConfirmationViewControllerDelegate-Protocol.h"
#import "SCSendToDismissTransitionControllerDelegate-Protocol.h"
#import "SCSendToGroupButtonControllerDelegate-Protocol.h"
#import "SCSendToGroupStoryActionControllerDelegate-Protocol.h"
#import "SCSendToListsDataRequestListener-Protocol.h"
#import "SCSendToLoadingOverlay-Protocol.h"
#import "SCSendToQueryStateTrackerDelegate-Protocol.h"
#import "SCSendToScreen-Protocol.h"
#import "SCSendToScrollViewDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SCCheetahSendToActionHandler, SCCheetahSendToPreviewMessageCollector, SCCheetahSendToViewMenuController, SCCollectionViewSectionRenderingTracker, SCCustomStoriesOnboardingPresenter, SCDisposableObserverLifecycle, SCLazy, SCLegacySendToLoggerAdaptor, SCNewGroupCreateGroupDelegateImpl, SCPreviewExporter, SCQueuePerformer, SCScopedAccess, SCSearchContentViewControllerContext, SCSearchQueryResultController, SCSendToConfiguration, SCSendToConfirmationDataProvider, SCSendToConfirmationViewModel, SCSendToDocObjectRecipientDataSource, SCSendToGroupButtonController, SCSendToIdentifierMapper, SCSendToImpressionStateManager, SCSendToLatencyMetricLogger, SCSendToListEditMenuView, SCSendToListPickerView, SCSendToListsAlertView, SCSendToListsEditMenuActionHandler, SCSendToListsPickerActionHandler, SCSendToListsRecipientPickerPresenter, SCSendToOpenMiniProfileActionHandler, SCSendToQueryStateTracker, SCSendToScrollView, SCSendToScrollViewCoordinator, SCSendToSelectionModalView, SCSendToSelectionStateManager, SCSendToStoriesThumbnailProvider, SCSendToTransitionProvider, SCSendToView, SCStreakTooltipAlertView, UIView;
@protocol SCSendPreviewViewModel, SCSendToAppStoryActionHandler, SCSendToLogger, SCSendToStoriesDataSource, SCSnapchattersDataSearching;

@interface SCCheetahSendViewController : UIViewController <SCSearchQueryResultControllerDelegate, UIGestureRecognizerDelegate, SCUserSelectionListener, SCSendConfirmationViewControllerDelegate, SCSendToScrollViewDelegate, UICollectionViewDelegate, SCSendToDismissTransitionControllerDelegate, SCSendToGroupStoryActionControllerDelegate, SCShakeToReportDelegate, SCCheetahSendToViewMenuControllerDelegate, SCSendToQueryStateTrackerDelegate, SCGroupsDataRequestListener, SCSendToListsDataRequestListener, SCNavigationDestination, SCSendToLoadingOverlay, SCSendToScreen, SCSearchContentViewControlling, SCSendToGroupButtonControllerDelegate, SCPageNameLogging>
{
    SCSendToConfiguration *_configuration;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSendToImpressionStateManager *_impressionStateManager;
    SCCheetahSendToPreviewMessageCollector *_previewMsgCollector;
    SCCheetahSendToPreviewMessageCollector *_userTextMsgCollector;
    SCSearchQueryResultController *_queryResultController;
    SCSendToView *_sendToView;
    SCSendToListPickerView *_listPickerView;
    double _listPickerViewHeight;
    SCSendToListEditMenuView *_listEditMenuView;
    SCSendToSelectionModalView *_listSelectionModalView;
    SCSendToListsPickerActionHandler *_listPickerActionHandler;
    SCSendToListsEditMenuActionHandler *_editMenuActionHandler;
    SCLazy *_listsLogger;
    SCSendToListsRecipientPickerPresenter *_listRecipientPickerPresenter;
    NSDictionary *_numRowsAboveKeyInFriendsSection;
    NSDictionary *_recipientsCountByKeyInFriendsSection;
    double _friendTableIndexScrollOffset;
    SCSendToStoriesThumbnailProvider *_storiesThumbnailProvider;
    id <SCSendToStoriesDataSource> _storiesDataSource;
    SCLazy *_topicsDataSource;
    SCLazy *_topicSendToManager;
    SCLazy *_lazyCustomStoriesDataFetcher;
    SCLazy *_lazyCustomStoriesDataMutator;
    SCCustomStoriesOnboardingPresenter *_customStoriesOnboardingPresenter;
    SCSendToTransitionProvider *_findFriendTransitionProvider;
    SCSendToConfirmationDataProvider *_confirmationViewDataProvider;
    SCSendToConfirmationViewModel *_confirmationViewModel;
    SCQueuePerformer *_updatePerformer;
    SCSendToGroupButtonController *_groupButtonController;
    SCCheetahSendToViewMenuController *_menuController;
    SCCheetahSendToActionHandler *_actionHandler;
    id <SCSendToAppStoryActionHandler> _appStoryActionHandler;
    SCSendToScrollView *_scrollView;
    SCSendToIdentifierMapper *_identifierMapper;
    SCSendToScrollViewCoordinator *_scrollViewCoordinator;
    SCSendToQueryStateTracker *_queryStateTracker;
    long long _currentScrollbarSectionPressed;
    long long _currentScrollbarRowPressed;
    SCStreakTooltipAlertView *_streakTooltipAlertView;
    SCSendToListsAlertView *_listsHowToViewAlertView;
    NSMutableArray *_newlyCreatedPublicationIds;
    SCLegacySendToLoggerAdaptor *_logger;
    double _startTime;
    double _ttiStartTime;
    NSString *_sessionId;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    SCLazy *_listsDataRepository;
    SCLazy *_snapchattersDataFetcher;
    id <SCSnapchattersDataSearching> _snapchattersSearchDataProvider;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_userInfoProvider;
    SCLazy *_viewedIncomingFriendsTracker;
    SCLazy *_friendScoreCoordinator;
    SCLazy *_groupSnapchatterRepository;
    SCLazy *_groupsDataCreator;
    SCLazy *_groupsDataMutator;
    SCLazy *_groupsDataFetcher;
    SCSendToOpenMiniProfileActionHandler *_openMiniProfileActionHandler;
    SCNewGroupCreateGroupDelegateImpl *_newGroupDelegateImpl;
    SCScopedAccess *_snapSendEvent;
    double _lastDismissHapticTriggerTime;
    _Bool _dismissByPullDown;
    _Bool _isRenderedOnce;
    SCSendToLatencyMetricLogger *_latencyLogger;
    long long _mischiefsCount;
    UIView *_loadingOverlayView;
    SCLazy *_presentAddFriendsIntentHandler;
    SCCollectionViewSectionRenderingTracker *_renderingTracker;
    SCDisposableObserverLifecycle *_subscription;
    _Bool _userDidPressSend;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    double _lastExitTime;
    id <SCSendPreviewViewModel> _previewViewModel;
    SCPreviewExporter *_previewExporter;
    SCSendToTransitionProvider *_transitionProvider;
    id <SCSendToLogger> _matchaLogger;
}

@property(retain, nonatomic) id <SCSendToLogger> matchaLogger; // @synthesize matchaLogger=_matchaLogger;
@property(nonatomic) __weak SCSendToTransitionProvider *transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(nonatomic) __weak SCPreviewExporter *previewExporter; // @synthesize previewExporter=_previewExporter;
@property(retain, nonatomic) id <SCSendPreviewViewModel> previewViewModel; // @synthesize previewViewModel=_previewViewModel;
@property(nonatomic) _Bool userDidPressSend; // @synthesize userDidPressSend=_userDidPressSend;
@property(nonatomic) double lastExitTime; // @synthesize lastExitTime=_lastExitTime;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void).cxx_destruct;
- (void)logUserInteractionBegan;
- (void)_showStreakTooltip;
- (void)_populateListsWithExistingEmojiTagsIfNecessary;
- (void)_initListSelectionModalView;
- (void)_initListPickerAndEditMenu;
- (void)_initListEditMenuWithViewModel:(id)arg1;
- (void)_initListPickerViewWithViewModel:(id)arg1;
- (void)_onListPickerViewRendered;
- (void)_presentAddFriendsViewController;
- (void)sendToViewMenuController:(id)arg1 handleActionForActionModel:(id)arg2;
- (id)_createTopicSendToManager;
- (id)previewExporterDisplayingViewController:(id)arg1;
- (void)_addListenerToRanker:(id)arg1;
- (void)_setupListsPickerViewAndActionHandlers;
- (void)_setupQueryResultController;
- (_Bool)_hasTopSectionToSkip;
- (id)defaultProjectNameV2;
- (void)_updateNewlyCreatedPublicationIdsWithId:(id)arg1;
- (void)sendToGroupStoryActionControllerDidCreateGroupStoryWithId:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_clearTemporaryGroups;
- (void)keyboardWillChange:(id)arg1 willShow:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)finishPageDismissInteractiveWillDismiss:(_Bool)arg1;
- (void)initiatePageDismissInteractive:(_Bool)arg1;
- (void)_addPreSelectedItems;
- (void)_showSelectionModalWithSelectionCount:(long long)arg1;
- (void)_logTTIMetric:(id)arg1;
- (void)_multiAddWithSnapchatters:(id)arg1;
- (void)_sendSnapOnMainThreadWithSendToRecipients:(id)arg1 storiesConfig:(id)arg2 businessIds:(id)arg3 groups:(id)arg4 appStories:(id)arg5;
- (void)_sendSnapWithRecipientsSelected:(id)arg1 mischiefsSelected:(id)arg2 businessProfilesSelected:(id)arg3 appStoriesSelected:(id)arg4 customStoriesSelected:(id)arg5 confirmationViewModel:(id)arg6 topicsSelected:(id)arg7;
- (void)_sendGroupPressedWithRecipientsSelected:(id)arg1 mischiefsSelected:(id)arg2 businessProfilesSelected:(id)arg3 appStoriesSelected:(id)arg4 customStoriesSelected:(id)arg5 confirmationViewModel:(id)arg6;
- (void)_updateConfirmationViewModel:(id)arg1 selectedRecipientIds:(id)arg2;
- (void)_updateWithConfirmationViewModel:(id)arg1;
- (void)_selectSearchInput;
- (void)_presentNewGroupViewController;
- (void)_updateListPickerWithVisibility:(_Bool)arg1;
- (void)_hideListPicker;
- (void)_showListPicker;
- (void)_adjustCollectionViewIfNeeded;
- (void)_showListsHowToViewTooltipIfNecessaryWithExistingListDataModelCount:(long long)arg1 upsertedListDataModels:(id)arg2 deletedListDataModels:(id)arg3;
- (void)_updateListPickerVisibilityWithExistingListDataModelCount:(long long)arg1;
- (void)_updateListPickerAndEditMenuViewModelsAsynchronouslyWithExistingListDataModels:(id)arg1;
- (void)_updateScrollViewWithQueryState:(id)arg1;
- (_Bool)isPreviewExporterEnabledForGroupButtonController:(id)arg1;
- (void)createGroupButtonPressedForGroupButtonController:(id)arg1;
- (void)shareSnapButtonPressedForGroupButtonController:(id)arg1;
- (void)addFriendButtonPressedForGroupButtonController:(id)arg1;
- (_Bool)isKeyboardShownForGroupButtonController:(id)arg1;
- (void)scrollToIndexForQueryKey:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didFinishUpdatingSendConfirmationBar;
- (void)_updateSearchViewTextWithConfirmationViewModel:(id)arg1;
- (void)didPressSendConfirmationBar;
- (void)_didPressSend;
- (void)_updateConfirmationViewWithSelectionResult:(id)arg1;
- (void)didPressSend;
- (void)didPressSendFromSource:(long long)arg1;
- (void)didUpdateListsWithListDataModels:(id)arg1 deletedListDataModels:(id)arg2;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (void)_displayPreview:(id)arg1;
- (void)setPreviewBlob:(id)arg1;
- (void)updateStoryThumbnailForEphemeralMedia:(id)arg1;
- (void)dismiss;
- (void)_backButtonPressed;
- (id)pageViewName;
- (void)removeLoadingOverlay;
- (void)showLoadingOverlay;
- (void)_updateUIWhenStoriesAreSelected;
- (void)sendGroupPressed;
- (void)logStoriesSelectionWithLoggingParameters:(id)arg1;
- (id)selectionResult;
- (void)searchControllerDidTapClearButton;
- (void)searchControllerDidEndEditing;
- (void)searchControllerDidBeginEditing;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (void)didUpdateStateWithQueryState:(id)arg1;
- (id)backgroundExitBehavior;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)_rightBarButtonItems;
- (id)_searchFieldRightView;
- (void)_setNavigationItem;
- (void)_initializeMenuController;
- (void)_showStreakTooltipIfStreakExists;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1 selectionStateManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

