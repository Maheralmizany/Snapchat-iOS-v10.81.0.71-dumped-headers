//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedDebugViewControllerDelegate-Protocol.h"
#import "SCImpalaPublicProfileActionHandling-Protocol.h"
#import "SCImpalaPublicProfileDebugActionHandling-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"

@class IMPBusinessProfile, NSString, SCImpalaPublicProfileLegacySendToWorkflowDelegate, SCImpalaPublicProfileSendToDelegate, SCSendToTransitionProvider, SCUserFeatureLauncher, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCImpalaPublicProfileActionHandler : NSObject <SCReportPageViewControllerDelegate, SCDiscoverFeedDebugViewControllerDelegate, SCImpalaPublicProfileActionHandling, SCImpalaPublicProfileDebugActionHandling>
{
    id <NavigationDelegate> _navigationDelegate;
    SCUserFeatureLauncher *_legacySendToLauncher;
    SCImpalaPublicProfileSendToDelegate *_sendToDelegateImpl;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCImpalaPublicProfileLegacySendToWorkflowDelegate *_legacySendToWorkflowDelegateImpl;
    IMPBusinessProfile *_reportingBusinessProfile;
    SCUserSession *_userSession;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)discoverFeedDebugViewControllerNeedsToDismiss:(id)arg1 animated:(_Bool)arg2;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)_presentHideAlertAfterReportForBusinessProfile:(id)arg1;
- (void)showDebugHtmlWithHtml:(id)arg1;
- (void)showDebugWithEncodedBusinessProfile:(id)arg1;
- (void)showSignalsWithEncodedBusinessProfile:(id)arg1;
- (void)showInsightsWithEncodedBusinessProfile:(id)arg1;
- (void)reportHighlightTileWithEncodedBusinessProfile:(id)arg1 highlightId:(id)arg2 highlightVersion:(id)arg3;
- (void)hideProfileWithEncodedBusinessProfile:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)reportTileWithEncodedBusinessProfile:(id)arg1;
- (void)reportProfileWithEncodedBusinessProfile:(id)arg1;
- (void)sendProfileWithEncodedBusinessProfile:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 navigationDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

