//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCOnDemandGeofilterVideoContainerViewDelegate-Protocol.h"

@class NSString, SCHeader, SCLoadingIndicatorView, SCOnDemandGeofilterPillButton, SCOnDemandGeofilterVideoContainerView, UILabel;
@protocol SCOnDemandGeofilterLayoutProvider;

@interface SCOnDemandGeofilterNewUserViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, SCOnDemandGeofilterVideoContainerViewDelegate, SCOnDemandGeofilterDataControllerListener>
{
    SCLoadingIndicatorView *_activityIndicator;
    SCOnDemandGeofilterVideoContainerView *_videoContainerView;
    SCHeader *_header;
    UILabel *_introTextLabel;
    SCOnDemandGeofilterPillButton *_continueButton;
    NSString *_cafeVideoUrl;
    NSString *_weddingVideoUrl;
    NSString *_birthdayVideoUrl;
    id <SCOnDemandGeofilterLayoutProvider> _layoutProvider;
}

- (void).cxx_destruct;
- (void)_logAndDismissViewController;
- (id)_videoAssetFromServerConfig;
- (void)_didPressContinueButton;
- (struct CGRect)_containerViewFrame;
- (id)_newUserVideos;
- (void)videoIsReadyToPlay;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)viewDidAppear:(_Bool)arg1;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)leftSwipeSucceed;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithGeofilterSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

