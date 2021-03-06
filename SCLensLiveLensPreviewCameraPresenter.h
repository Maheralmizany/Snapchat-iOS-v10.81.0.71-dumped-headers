//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDismissToRootDelegate-Protocol.h"
#import "SCLensCaptureWorkflowDelegate-Protocol.h"
#import "SCLensLiveLensPreviewCameraPresenterProtocol-Protocol.h"

@class NSArray, NSString, SCLensLiveLensPreviewCameraPresenterConfiguration, SCLensLiveLensStrategyProvider, SCPredefinedLensMetadataStore, UIViewController;
@protocol SCLensCameraScreenDataProviderProtocol, SCLensCaptureWorkflow, SCLensCaptureWorkflowProvider, SCLensDataFetcher, SCLensLiveLensPreviewCameraPresenterDelegate, SCLensLiveLensPreviewReplyParameters;

@interface SCLensLiveLensPreviewCameraPresenter : NSObject <SCLensCaptureWorkflowDelegate, SCDismissToRootDelegate, SCLensLiveLensPreviewCameraPresenterProtocol>
{
    id <SCLensDataFetcher> _lensDataFetcher;
    SCLensLiveLensPreviewCameraPresenterConfiguration *_presenterConfiguration;
    id <SCLensCaptureWorkflowProvider> _captureWorkflowProvider;
    SCLensLiveLensStrategyProvider *_lensesStrategyProvider;
    NSArray *_lenses;
    id <SCLensLiveLensPreviewReplyParameters> _replyParameters;
    id <SCLensCaptureWorkflow> _captureWorkflow;
    UIViewController *_fromViewController;
    id <SCLensLiveLensPreviewCameraPresenterDelegate> delegate;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    SCPredefinedLensMetadataStore *_lensMetadataStore;
}

@property(retain, nonatomic) SCPredefinedLensMetadataStore *lensMetadataStore; // @synthesize lensMetadataStore=_lensMetadataStore;
@property(retain, nonatomic) id <SCLensCameraScreenDataProviderProtocol> lensDataProvider; // @synthesize lensDataProvider=_lensDataProvider;
@property(nonatomic) __weak id <SCLensLiveLensPreviewCameraPresenterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_handleDismissWorkflowWithDidSendSnap:(_Bool)arg1;
- (void)_activateLensesOnCamera:(id)arg1;
- (void)_requestToUpdateLensItemAfterUnlock;
- (id)_applicableContext;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)dismissCameraViewControllerWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateLenses:(id)arg1;
- (void)dismissCameraViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentCameraViewControllerFromViewController:(id)arg1 withLenses:(id)arg2 replyParameters:(id)arg3;
- (void)lensCaptureWorkflowDidSaveSnapToMemories;
- (void)lensCaptureWorkflowWillDismissWithDidSendSnap:(_Bool)arg1;
- (void)lensCaptureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (id)replyParameters;
- (id)initWithLensDataFetcherFactory:(id)arg1 loggingConfiguration:(id)arg2 captureWorkflowProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

