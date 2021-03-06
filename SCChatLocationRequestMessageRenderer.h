//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"
#import "SCLocationShareWithFriendControllerShareFlowDelegate-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"

@class NSString, SCChatSDKActionContext, SCChatSharedLocationView, SCLocationShareWithFriendController, SCMapPerson, SCMapPersonLocation, SCUserSession, UIImage;

@interface SCChatLocationRequestMessageRenderer : NSObject <SCMapPersonLocationsListener, SCLocationShareWithFriendControllerShareFlowDelegate, SCChatMessageRenderer>
{
    NSString *_senderUserId;
    NSString *_senderUsername;
    NSString *_selfUsername;
    NSString *_recipientUserId;
    NSString *_conversationId;
    NSString *_messageId;
    SCMapPerson *_aFriend;
    SCUserSession *_userSession;
    SCChatSharedLocationView *_currentContentView;
    SCMapPersonLocation *_selfLocation;
    UIImage *_selfBitmojiImage;
    unsigned long long _requestResponse;
    SCChatSDKActionContext *_actionContext;
    SCLocationShareWithFriendController *_shareLocationWithFriendController;
}

@property(retain, nonatomic) SCLocationShareWithFriendController *shareLocationWithFriendController; // @synthesize shareLocationWithFriendController=_shareLocationWithFriendController;
@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void).cxx_destruct;
- (void)locationShareWithFriendController:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)_fetchSelfBitmojiIfNeeded;
- (id)_firstNameToDisplay;
- (id)_friend;
- (_Bool)_isAlreadySharing;
- (_Bool)_canStartSharing;
- (_Bool)_senderIsSelf;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)_acceptRequest;
- (void)_ignoreRequest;
- (id)_reserializeDataWithResponse:(unsigned long long)arg1;
- (id)_locationResponseButtonsWithShareButtonTitle:(id)arg1;
- (id)_locationViewModel;
- (void)_updateViewContentIfPresented;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)willDisplayContentView:(id)arg1;
- (void)prepareContentViewForReuse:(id)arg1;
- (void)setupContentView:(id)arg1;
- (id)createContentView;
- (id)reuseIdentifier;
- (struct CGSize)sizeThatFits:(double)arg1;
- (id)initWithSenderId:(id)arg1 senderUsername:(id)arg2 recipientId:(id)arg3 conversationId:(id)arg4 messageId:(id)arg5 userSession:(id)arg6 requestResponse:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

