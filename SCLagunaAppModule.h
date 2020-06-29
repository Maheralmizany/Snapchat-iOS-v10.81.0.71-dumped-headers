//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceOperaPresenterDelegate-Protocol.h"
#import "SCInformationSettingsViewControllerDelegate-Protocol.h"
#import "SCSpectaclesCommonViewControllersFactory-Protocol.h"
#import "SCSpectaclesUrlViewControllerFactory-Protocol.h"

@class NSString, SCCommerceOperaPresenter, SCSessionRequestManager;
@protocol SCSpectaclesUrlViewControllerDelegate;

@interface SCLagunaAppModule : NSObject <SCInformationSettingsViewControllerDelegate, SCCommerceOperaPresenterDelegate, SCSpectaclesUrlViewControllerFactory, SCSpectaclesCommonViewControllersFactory>
{
    SCCommerceOperaPresenter *_commercePresenter;
    SCSessionRequestManager *_requestManager;
    id <SCSpectaclesUrlViewControllerDelegate> _urlViewControllerDelegate;
}

+ (id)sharedModule;
@property(nonatomic) __weak id <SCSpectaclesUrlViewControllerDelegate> urlViewControllerDelegate; // @synthesize urlViewControllerDelegate=_urlViewControllerDelegate;
@property(nonatomic) __weak SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
- (void).cxx_destruct;
- (void)dismissInformationSettingsView:(id)arg1;
- (void)commerceOperaViewerDidDisappear:(id)arg1 additionalInfo:(id)arg2 wasBackgrounded:(_Bool)arg3;
- (void)presentSpectaclesSnapStoreViewControllerWithUserSession:(id)arg1 originViewController:(id)arg2 deepLinkURL:(id)arg3;
- (id)newLagunaPairingViewControllerWithUserSession:(id)arg1 delegate:(id)arg2 source:(unsigned long long)arg3;
- (id)newSpectaclesReportIssueViewController;
- (id)newViewControllerWithUrl:(id)arg1 delegate:(id)arg2;
- (id)newSpectaclesSettingsViewControllerWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
