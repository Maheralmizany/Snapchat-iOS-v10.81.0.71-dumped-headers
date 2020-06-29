//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCUnifiedProfileSagaOperaPresenter, SCUserSession, UIViewController;
@protocol SCLegacyItemDownloading, SCPageNameLogging, SCProfileChatMediaOperaBaseViewProviding;

@interface SCUnifiedProfileFriendshipFlashbackActionHandler : NSObject <SCActionHandling>
{
    SCUserSession *_userSession;
    NSString *_sessionId;
    id <SCLegacyItemDownloading> _mediaDownloader;
    SCUnifiedProfileSagaOperaPresenter *_sagaOperaPresenter;
    id <SCProfileChatMediaOperaBaseViewProviding> _baseViewProvider;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCProfileChatMediaOperaBaseViewProviding> baseViewProvider; // @synthesize baseViewProvider=_baseViewProvider;
- (void).cxx_destruct;
- (void)_presentFriendshipFlashback:(id)arg1 baseView:(id)arg2 operaBaseViewProvider:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 sessionId:(id)arg2 mediaDownloader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

