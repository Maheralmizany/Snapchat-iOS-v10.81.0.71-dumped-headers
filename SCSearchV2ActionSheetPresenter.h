//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOpenUnifiedProfileActionHandlerDelegate-Protocol.h"
#import "SCSearchV2ActionSheetPresenting-Protocol.h"

@class NSString, SCLazy, UIViewController;
@protocol SCPageNameLogging, SCSearchV2ChatPresenting;

@interface SCSearchV2ActionSheetPresenter : NSObject <SCOpenUnifiedProfileActionHandlerDelegate, SCSearchV2ActionSheetPresenting>
{
    SCLazy *_actionHandler;
    SCLazy *_snapchattersDataFetcher;
    id <SCSearchV2ChatPresenting> _chatPresenter;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 userId:(id)arg3 deepLinkURL:(id)arg4;
- (void)presentActionSheetForGroupWithGroupId:(id)arg1;
- (void)presentActionSheetForUserWithUser:(id)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithUserSession:(id)arg1 snapchattersDataFetcher:(id)arg2 chatPresenter:(id)arg3 navigationDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

