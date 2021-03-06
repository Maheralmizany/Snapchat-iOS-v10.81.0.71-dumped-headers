//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDeepLinkSharing-Protocol.h"
#import "SCLegacySendToWorkflowDelegate-Protocol.h"
#import "SCSendPreviewURLViewModelDelegate-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSString, NSURL, SCArroyoGroupFilterer, SCLegacySendToUIContainer, SCScopedAccess, SCSendToTransitionProvider, SCUserSession, UIImage, UIViewController;
@protocol SCDeeplinkShareControllerDelegate, SCSendToScreen, SCTextSending;

@interface SCDeeplinkShareController : NSObject <SCSendToDelegate, SCSendPreviewURLViewModelDelegate, SCSendToNavigationDelegate, SCLegacySendToWorkflowDelegate, SCDeepLinkSharing>
{
    SCUserSession *_userSession;
    UIViewController<SCSendToScreen> *_sendViewController;
    NSURL *_deeplinkURL;
    UIImage *_attachedImage;
    NSString *_sendingText;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    unsigned long long _deepLinkType;
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    id <SCTextSending> _textSender;
    _Bool _statusBarHiddenPrevious;
    long long _previousStatusBarStyle;
    SCScopedAccess *_legacySendToLauncher;
    SCLegacySendToUIContainer *_legacySendToUIContainer;
    id <SCDeeplinkShareControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCDeeplinkShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didDismissSendViewController;
- (void)legacySendToScopeWillSend:(id)arg1 sendToSelection:(id)arg2;
- (void)legacySendToScopeDidDismiss:(id)arg1 selectedItems:(id)arg2;
- (void)didUpdateUrlSummary:(id)arg1;
- (void)_handleShareDeeplinkComplete:(_Bool)arg1;
- (void)_sendDeeplinkShareToRecipients:(id)arg1 groups:(id)arg2 additionalText:(id)arg3;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 groups:(id)arg5 appStories:(id)arg6 additionalText:(id)arg7;
- (void)dismissSendViewController:(id)arg1;
- (void)_launchLegacySendToScopeFromViewController:(id)arg1 previewViewModel:(id)arg2;
- (void)_sendToFromViewController:(id)arg1 previewViewModel:(id)arg2;
- (void)sendToFromViewController:(id)arg1 deepLinkType:(unsigned long long)arg2 url:(id)arg3 attachedImage:(id)arg4;
- (void)sendToFromViewController:(id)arg1 lens:(id)arg2;
- (id)initWithUserSession:(id)arg1 deeplinkURL:(id)arg2 attachedImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

