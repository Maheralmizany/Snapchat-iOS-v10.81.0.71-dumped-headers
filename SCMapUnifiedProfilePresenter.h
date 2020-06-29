//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapProfilePresenter-Protocol.h"
#import "SCOpenUnifiedProfileActionHandlerDelegate-Protocol.h"

@class NSString, SCOpenUnifiedProfileActionHandler, SCUserSession;
@protocol NavigationDelegate, SCMapProfilePresenterDelegate;

@interface SCMapUnifiedProfilePresenter : NSObject <SCOpenUnifiedProfileActionHandlerDelegate, SCMapProfilePresenter>
{
    id <NavigationDelegate> _navigationDelegate;
    SCUserSession *_userSession;
    id <SCMapProfilePresenterDelegate> _delegate;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
}

- (void).cxx_destruct;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 userId:(id)arg3 deepLinkURL:(id)arg4;
- (void)presentProfileOnViewController:(id)arg1 person:(id)arg2 delegate:(id)arg3 hideMapSection:(_Bool)arg4;
- (id)initWithNavigationDelegate:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
