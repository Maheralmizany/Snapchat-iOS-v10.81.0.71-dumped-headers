//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensCreatorSubscriptionUpdateHandler-Protocol.h"
#import "SCLensInfoCardInteraction-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, SCLens, SCLensInfoCardActionFactory, SCLensInfoCardData, SCLensInfoCardInteractorDependencies, UIImage;
@protocol SCLensInfoCardContentPresentation, SCLensInfoCardRouting;

@interface SCLensInfoCardInteractor : NSObject <SCLensInfoCardInteraction, SCLensCreatorSubscriptionUpdateHandler, SCReportPageViewControllerDelegate>
{
    SCLensInfoCardInteractorDependencies *_dependencies;
    id <SCLensInfoCardContentPresentation> _presenter;
    id <SCLensInfoCardRouting> _router;
    SCLensInfoCardActionFactory *_lensInfoCardActionFactory;
    SCLensInfoCardData *_infoCardData;
    SCLens *_lens;
    UIImage *_iconImage;
    _Bool _isSubscribedOnCreator;
    unsigned long long _subscriptionPresentedIndex;
    NSMutableArray *_subscriptionOperations;
    _Bool _isLiveLensPreview;
    _Bool _isSourceLensCreatorPage;
}

- (void).cxx_destruct;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)didUpdateSubscriptionProvider:(id)arg1;
- (_Bool)_updateSubscriptonDataIfNeeded;
- (void)_handleCreatorSubscribtionResultWithSubscribing:(_Bool)arg1 error:(id)arg2;
- (void)_becomeCreatorSubscribed:(_Bool)arg1;
- (void)_tryToBecomeCreatorSubscribed:(_Bool)arg1;
- (void)_selectCurrentLensInCarousel;
- (CDUnknownBlockType)_creatorProfileDismissBlock;
- (void)_viewProfile;
- (void)_loadAndPresentIconImage;
- (id)_actionsFromInfoCardData:(id)arg1;
- (CDUnknownBlockType)_sendToFriendActionHandler;
- (CDUnknownBlockType)_copyLensLinkActionHandler;
- (CDUnknownBlockType)_moreLensesActionHandler;
- (CDUnknownBlockType)_viewProfileActionHandler;
- (CDUnknownBlockType)_subscribeToLensCreatorActionHandler;
- (CDUnknownBlockType)_removeLensActionHandler;
- (CDUnknownBlockType)_reportLensActionHandler;
- (_Bool)_shouldShowRemoveLens;
- (_Bool)_shouldBlockLensCreator;
- (_Bool)_shouldShowShareLensWithLensInfoCardData:(id)arg1;
- (_Bool)_shouldShowMoreLenses;
- (_Bool)_shouldShowViewProfile;
- (void)_representSubscriptionData;
- (void)_presentData;
- (void)_presentDefaultError;
- (void)didTapOutsideOfCard;
- (void)didTapOnFavorites;
- (void)didTapOnDone;
- (void)didTapOnCreator;
- (void)viewIsReadyForPresentation;
- (void)setRouter:(id)arg1;
- (void)setPresenter:(id)arg1;
- (id)initWithLens:(id)arg1 isLiveLensPreview:(_Bool)arg2 isSourceLensCreatorPage:(_Bool)arg3 dependencies:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
