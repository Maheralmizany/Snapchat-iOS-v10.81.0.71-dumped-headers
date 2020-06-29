//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFeedTableLoadingViewDelegate-Protocol.h"
#import "SCFindFriendsCTADelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCLazy, SCUserSession;
@protocol SCFeedLoadingViewProtocol, SCFeedTableFooterViewDelegate, SCFindFriendsCTA;

@interface SCFeedTableFooterView : UIView <SCFindFriendsCTADelegate, SCFeedTableLoadingViewDelegate, SCSnapchattersDataRequestListener>
{
    SCUserSession *_userSession;
    SCLazy *_friendsFeedLoadingStatusManager;
    id <SCFeedTableFooterViewDelegate> _delegate;
    UIView<SCFindFriendsCTA> *_addContactsView;
    UIView<SCFeedLoadingViewProtocol> *_loadingView;
}

@property(readonly, nonatomic) UIView<SCFeedLoadingViewProtocol> *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) UIView<SCFindFriendsCTA> *addContactsView; // @synthesize addContactsView=_addContactsView;
@property(nonatomic) __weak id <SCFeedTableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)forceLoadMoreConversations;
- (void)addContactsButtonClickedWithTransitionStartingFrame:(struct CGRect)arg1;
- (_Bool)showingAddContactsView;
- (_Bool)showingLoadingView;
- (_Bool)shouldShowAddContactsView;
- (_Bool)shouldShowLoadingView;
- (void)updateAddContactsViewElements;
- (void)forceRemovalAddContactsView;
- (void)updateAddContactsViewIfPossible;
- (void)updateLoadingViewIfPossible;
- (void)updateSubviews;
- (id)initWithUserSession:(id)arg1 friendsFeedLoadingStatusManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
