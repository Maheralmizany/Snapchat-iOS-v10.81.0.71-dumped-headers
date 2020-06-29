//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCEventAnnouncing-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSectionBasedCollectionViewUpdaterDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCDiscoverFeedManagementSettingConfig, SCDiscoverFeedOnboardingDataCoordinator, SCEventListenerAnnouncer, SCExperimentManager, SCSectionBasedCollectionViewUpdater, SIGLabel, UICollectionView;
@protocol SCActionHandling, SCDiscoverFeedDataMutating, SCEventListener, SCImageDownloading, SCSectionDataProviding;

@interface SCDiscoverFeedManagementSettingFullScreenViewController : SIGSubscreenViewController <SCEventAnnouncing, SCSectionBasedCollectionViewUpdaterDelegate, UITextFieldDelegate, SCPageNameLogging>
{
    SCDiscoverFeedManagementSettingConfig *_config;
    id <SCImageDownloading> _imageDownloader;
    CDUnknownBlockType _presentPublicUserProfileBlock;
    CDUnknownBlockType _impalaShowProfileActionHandlerProvider;
    CDUnknownBlockType _impalaPublisherProfileActionHandlerProvider;
    id <SCDiscoverFeedDataMutating> _discoverFeedDataMutator;
    CDUnknownBlockType _requestNotificationPermissionsBlock;
    CDUnknownBlockType _displayOptInNotificationPromptBlock;
    SCDiscoverFeedOnboardingDataCoordinator *_onboardingDataCoordinator;
    SCExperimentManager *_experimentManager;
    id <SCSectionDataProviding> _collectionViewDataProvider;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    id <SCActionHandling> _actionHandler;
    double _previousStatusBarYOffset;
    id <SCEventListener> _discoverFeedEventsController;
    SCEventListenerAnnouncer *_eventAnnouncer;
    UICollectionView *_contentCollectionView;
    SIGLabel *_subtitleLabel;
    SIGLabel *_headerButton;
    _Bool _isEditingHeaderButton;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_didTapEditButton:(id)arg1;
- (id)_headerButton:(unsigned long long)arg1;
- (id)_subtitleLabel:(id)arg1;
- (id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)pageViewName;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewDidLoad;
- (void)loadView;
- (id)loadScrollView;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDiscoverFeedManagementSettingConfig:(id)arg1 imageDownloader:(id)arg2 presentPublicUserProfileBlock:(CDUnknownBlockType)arg3 impalaShowProfileActionHandlerProvider:(CDUnknownBlockType)arg4 impalaPublisherProfileActionHandlerProvider:(CDUnknownBlockType)arg5 discoverFeedDataMutator:(id)arg6 requestNotificationPermissionsBlock:(CDUnknownBlockType)arg7 displayOptInNotificationPromptBlock:(CDUnknownBlockType)arg8 onboardingDataCoordinator:(id)arg9 discoverFeedEventsController:(id)arg10 experimentManager:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

