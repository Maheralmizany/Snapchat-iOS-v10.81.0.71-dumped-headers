//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatViewHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCInvalidFriendAlertViewDelegate-Protocol.h"
#import "SCLeftSwipeableDismissTransitionControllerDelegate-Protocol.h"
#import "SCNewGroupViewControlling-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCRecipientBarDelegate-Protocol.h"
#import "SCSearchQueryResultControllerDelegate-Protocol.h"
#import "SCSendToScrollViewDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"
#import "SwipeView-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString, SCChatViewHeader, SCInvalidFriendAlertView, SCLazy, SCLeftSwipeableTransitionProvider, SCMaxGroupSizeAlertView, SCNewGroupActionHandler, SCNewGroupConfiguration, SCNewGroupView, SCRecipientBar, SCRegisterV2EnterButton, SCSearchQueryResultController, SCSendToDocObjectRecipientDataSource, SCSendToIdentifierMapper, SCSendToNewGroupDataRepository, SCSendToScrollView, SCSendToScrollViewCoordinator, SCSendToSelectionStateManager, SCTooSmallGroupSizeAlertView, UIView;
@protocol SCActionHandling, SCNewGroupViewControllerDelegate;

@interface SCNewGroupViewController : UIViewController <SCSendToScrollViewDelegate, SCSearchQueryResultControllerDelegate, UICollectionViewDelegate, SCShakeToReportDelegate, SCRecipientBarDelegate, SCHeaderDelegate, SCChatViewHeaderDataSource, SCUserSelectionListener, SCInvalidFriendAlertViewDelegate, SCSnapchattersDataRequestListener, SCLeftSwipeableDismissTransitionControllerDelegate, SwipeView, SCNewGroupViewControlling, SCPageNameLogging>
{
    unsigned long long _creationType;
    SCSendToScrollView *_scrollView;
    SCSendToIdentifierMapper *_identifierMapper;
    SCSendToScrollViewCoordinator *_scrollViewCoordinator;
    long long _currentScrollbarSectionPressed;
    long long _currentScrollbarRowPressed;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCNewGroupConfiguration *_configuration;
    SCNewGroupActionHandler *_newGroupActionHandler;
    SCNewGroupView *_newGroupView;
    UIView *_confirmationButtonView;
    SCRegisterV2EnterButton *_confirmationButton;
    SCRegisterV2EnterButton *_arroyoConfirmationButton;
    double _keyboardHeight;
    NSString *_headerText;
    NSString *_baseGroupId;
    NSArray *_outgoingFriends;
    NSMutableSet *_recipientBarSelectedRecipients;
    SCMaxGroupSizeAlertView *_maxGroupSizeAlertView;
    SCTooSmallGroupSizeAlertView *_tooSmallGroupSizeAlertView;
    SCInvalidFriendAlertView *_invalidFriendAlertView;
    NSString *_currentQueryText;
    SCSearchQueryResultController *_queryResultController;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_userInfoProvider;
    SCLazy *_groupSnapchatterRepository;
    SCSendToNewGroupDataRepository *_newGroupDataRepository;
    id <SCActionHandling> _openMiniProfileActionHandler;
    double _startViewingTime;
    double _startChatInputTime;
    double _lastDismissHapticTriggerTime;
    _Bool _didPressConfirmationButton;
    long long _exitEvent;
    long long _source;
    _Bool _dismissByPullDown;
    id <SCNewGroupViewControllerDelegate> _delegate;
    SCRecipientBar *_recipientBar;
    SCChatViewHeader *_header;
    SCLeftSwipeableTransitionProvider *_transitionProvider;
}

@property(nonatomic) __weak SCLeftSwipeableTransitionProvider *transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(readonly, nonatomic) SCChatViewHeader *header; // @synthesize header=_header;
@property(readonly, nonatomic) SCRecipientBar *recipientBar; // @synthesize recipientBar=_recipientBar;
@property(nonatomic) __weak id <SCNewGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)_jsonFormatStringFromDictionary:(id)arg1;
- (id)_recipientsAvailableBySection;
- (void)_logChatPageChatCreateViewWithExitEvent:(long long)arg1 confirmationButtonPressed:(_Bool)arg2 headerHasText:(_Bool)arg3 source:(long long)arg4;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (void)scrollToIndexForQueryKey:(id)arg1;
- (id)getSuggestion:(id)arg1;
- (_Bool)attemptRemoveRecipient:(id)arg1 sender:(id)arg2 section:(id)arg3;
- (_Bool)attemptAddRecipient:(id)arg1 sender:(id)arg2 section:(id)arg3;
- (void)didChangeHeight:(double)arg1;
- (void)textDidChange:(id)arg1;
- (_Bool)isInChatCreationMode;
- (void)headerTextFieldTextEditingDidEnd;
- (void)headerTextFieldTextEditingDidBegin;
- (void)headerTextFieldTextEditingChanged;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)fontForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)textColorForPlaceholderInHeader:(id)arg1;
- (id)_titleForHeaderFromRecipientBar;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)tintColorForHeader;
- (double)borderThickness;
- (id)borderColor;
- (_Bool)shouldShowEditableHeader;
- (_Bool)isInPreviewMode;
- (id)placeHolderForHeaderTextField;
- (id)iconForPlaceholderAttributedString;
- (id)imageForXButtonInState:(unsigned long long)arg1;
- (void)leftButtonPressed;
- (void)rightButtonPressed;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (void)initiatePageDismissInteractive:(_Bool)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)keyboardWillChange:(id)arg1 willShow:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (unsigned long long)titleTypeForInvalidFriendAlertView;
- (void)showKeyboardIfNecessary:(_Bool)arg1;
- (void)_showInvalidFriendAlertWithName:(id)arg1;
- (void)_showTeamSnapchatAlert;
- (void)_showTooSmallGroupSizeAlert;
- (void)_showMaxGroupSizeAlert;
- (void)_showTooSmallGroupSizeAlertIfNecessary;
- (void)_updatePretypeSuggestionsAsynchronously;
- (_Bool)_isRTL;
- (double)_pencilIconPadding;
- (_Bool)_isCreatingGroupAfterTappingRecipientBar;
- (id)_titleForArroyoConfirmationButton;
- (id)_titleForConfirmationButton;
- (_Bool)_shouldEnableArroyoChatButton;
- (_Bool)_shouldEnableSelectionAction;
- (void)_updateConfirmationButtonUI;
- (void)_updateHeaderTextIfGroupExists;
- (_Bool)_updateHeaderForCreationTypeChange;
- (void)_updateUIForRecipientCountChange;
- (void)_setupQueryResultController;
- (void)_initArroyoConfirmationButton;
- (void)_initConfirmationButton;
- (void)_updateNewGroupViewTopConstrains:(_Bool)arg1;
- (void)_initNewGroupView;
- (void)_layoutRecipientBar:(_Bool)arg1;
- (void)_initRecipientBar;
- (void)_initHeader;
- (void)_arroyoConfirmationButtonPressed;
- (void)_confirmationButtonPressed;
- (_Bool)_recipientsNeededForArroyoChatButton;
- (_Bool)_shouldShowArroyoChatButton;
- (id)_newGroupViewBackgroundColor;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)viewDidLoad;
- (id)headerText;
- (void)focusHeader;
- (void)layoutForRecipientBarChange:(_Bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setBaseGroupId:(id)arg1;
- (void)dismiss;
- (void)dealloc;
- (void)loadView;
- (id)pageViewName;
- (id)initWithConfiguration:(id)arg1 creationType:(unsigned long long)arg2 selectionStateManager:(id)arg3 docObjectRecipientDataSource:(id)arg4 snapchattersDataFetcher:(id)arg5 snapchattersDataMutator:(id)arg6 userInfoProvider:(id)arg7 groupSnapchatterRepository:(id)arg8 openMiniProfileActionHandler:(id)arg9 baseGroupId:(id)arg10 source:(long long)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
