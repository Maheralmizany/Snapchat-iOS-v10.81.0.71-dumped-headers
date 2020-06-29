//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatDrawerLogger-Protocol.h"
#import "SCChatInputDrawerRenderable-Protocol.h"
#import "SCChatInputStylable-Protocol.h"
#import "SCChatMediaDrawerSendBarDelegate-Protocol.h"
#import "SCMediaDrawerGalleryTableIndexControllerDataSource-Protocol.h"
#import "SCMediaDrawerGalleryTableIndexControllerDelegate-Protocol.h"
#import "SCMediaDrawerTabBarDelegate-Protocol.h"
#import "SCMediaDrawerTabControllerDelegate-Protocol.h"
#import "SCProgressOverlayViewDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, SCChatInputItem, SCChatInputViewController, SCChatMediaDrawerSendBar, SCGalleryPreviewController, SCGalleryVideoAssetExportSession, SCMediaDrawerCameraRollTabController, SCMediaDrawerGalleryTabController, SCMediaDrawerGalleryTableIndexController, SCMediaDrawerTabBar, SCProgressOverlayView, SCUserSession, UICollectionView;
@protocol SCChatInputMediaAccessoryDelegate, SCChatInputMediaAccessorySender, SCChatInputSnapParameterProvider, SCSnapSendPreparer;

@interface SCChatInputMediaAccessory : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SCChatMediaDrawerSendBarDelegate, SendSnapNavigationControllerDelegate, UIGestureRecognizerDelegate, SCMediaDrawerTabControllerDelegate, SCMediaDrawerGalleryTableIndexControllerDataSource, SCMediaDrawerGalleryTableIndexControllerDelegate, SCTraceEnabled, SCMediaDrawerTabBarDelegate, SCChatDrawerLogger, SCProgressOverlayViewDelegate, SCChatInputDrawerRenderable, SCChatInputStylable>
{
    SCUserSession *_userSession;
    id <SCChatInputMediaAccessorySender> _sender;
    id <SCChatInputSnapParameterProvider> _parameterProvider;
    SCMediaDrawerTabBar *_tabBar;
    UICollectionView *_collectionView;
    SCChatMediaDrawerSendBar *_sendBar;
    SCMediaDrawerGalleryTableIndexController *_tableIndexController;
    SCMediaDrawerCameraRollTabController *_cameraRollTabController;
    SCMediaDrawerGalleryTabController *_galleryTabController;
    NSMutableArray *_selectedDrawerItems;
    double _cameraRollSelectedVideoTotalSize;
    SCGalleryPreviewController *_galleryPreviewController;
    SCGalleryVideoAssetExportSession *_exportSession;
    SCProgressOverlayView *_progressOverlayView;
    long long _numberOfMessagesSent;
    _Bool _didSelectFromGalleryTabOnce;
    _Bool _initializedView;
    double _defaultDrawerHeight;
    SCChatInputItem *_inputItem;
    SCChatInputViewController *_inputController;
    unsigned long long _style;
    long long _tabBarStyle;
    id <SCChatInputMediaAccessoryDelegate> _delegate;
    id <SCSnapSendPreparer> _snapSendPreparer;
}

@property(nonatomic) __weak id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
@property(nonatomic) __weak id <SCChatInputMediaAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long tabBarStyle; // @synthesize tabBarStyle=_tabBarStyle;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak SCChatInputViewController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) __weak SCChatInputItem *inputItem; // @synthesize inputItem=_inputItem;
@property(nonatomic) double defaultDrawerHeight; // @synthesize defaultDrawerHeight=_defaultDrawerHeight;
- (void).cxx_destruct;
- (void)_clearInputText;
- (id)_inputText;
- (double)_topMargin;
- (void)_cleanupExportSession;
- (unsigned long long)_selectedCount;
- (_Bool)_isSelecting;
- (id)_currentTabController;
- (double)_bottomOffset;
- (id)_getFilterDataProviderWithSnapSource:(long long)arg1;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)onEditMedia:(id)arg1;
- (void)onSelectMedia:(id)arg1;
- (_Bool)openedWithSearch;
- (long long)sentItemCount;
- (long long)drawerType;
- (void)_deselectDrawerItem:(id)arg1 tabController:(id)arg2;
- (void)_selectDrawerItem:(id)arg1 tabController:(id)arg2;
- (void)didPressAllow;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)_dismissPreviewIfPresented;
- (void)didSendChatMessage;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didCancelFromPreview:(id)arg1;
- (void)presentPreviewForVideoMediaIfNeccessary:(id)arg1;
- (_Bool)_shouldHideCaptionForText:(id)arg1;
- (void)presentPreviewForVideo:(id)arg1 firstFrame:(id)arg2;
- (void)presentPreviewForImage:(id)arg1;
- (void)didPressSend;
- (void)_presentPreviewForGalleryEntry:(id)arg1;
- (void)_presentPreviewForDrawerMedia:(id)arg1;
- (void)_presentPreviewForDrawerItem:(id)arg1;
- (void)didPressEdit;
- (void)_resetToVerticalMode:(long long)arg1;
- (void)_exitHorizontalModeIfNeeded:(long long)arg1;
- (void)galleryTableIndex:(id)arg1 isDraggedToPercent:(double)arg2;
- (id)textForGalleryTableIndex:(id)arg1;
- (void)_hideSendBar;
- (void)_showSendBar;
- (_Bool)_isSnap3DInGalleryDrawerItem:(id)arg1;
- (void)_updateSendBar;
- (void)_updateTabBar;
- (void)tabController:(id)arg1 didLongPressDrawerItem:(id)arg2;
- (_Bool)isDrawerFullyExpanded;
- (void)tabControllerDidEndDecelerating:(id)arg1;
- (void)tabController:(id)arg1 didEndDragging:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)tabController:(id)arg1 didScroll:(id)arg2;
- (void)tabController:(id)arg1 willBeginDragging:(id)arg2;
- (void)tabController:(id)arg1 refreshWithDrawerItemList:(id)arg2;
- (void)tabControllerDidRequestExitSelectMode:(id)arg1;
- (void)tabController:(id)arg1 didDeselectDrawerItem:(id)arg2;
- (void)tabController:(id)arg1 didSelectDrawerItem:(id)arg2;
- (_Bool)tabController:(id)arg1 canSelectDrawerItem:(id)arg2;
- (_Bool)isDrawerItemSelected:(id)arg1;
- (_Bool)isInSelectionMode:(id)arg1;
- (void)tabControllerDidLoad:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)mediaDrawerTabBar:(id)arg1 didTapTab:(long long)arg2;
- (void)_makeTabBar;
- (void)_makeSendBar;
- (void)_makeSectionView;
- (void)didActivateDrawerWithDeeplinkIdentifier:(id)arg1 subitemDeeplinkIdentifier:(id)arg2;
- (void)willSuspendActive;
- (void)willResumeActive;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (double)maximumDrawerHeight;
- (void)sizeDidChange:(struct CGSize)arg1;
- (void)didEndPanningToState:(unsigned long long)arg1;
- (void)willEndPanningToState:(unsigned long long)arg1;
- (void)didPanFromState:(unsigned long long)arg1;
- (void)willBeginPanningFromState:(unsigned long long)arg1;
- (_Bool)canPanDrawer;
- (void)_updateCollectionViewAnimated:(_Bool)arg1 deltaContentOffset:(double)arg2;
- (id)initWithUserSession:(id)arg1 mediaSender:(id)arg2 parameterProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
