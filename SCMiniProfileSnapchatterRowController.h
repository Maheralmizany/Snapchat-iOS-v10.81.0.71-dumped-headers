//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

@class NSIndexPath, SCLazy, SCMiniProfileSnapchatterActionHandler, SCSnapchatter, SCStoriesThumbnailInfo, SCUserSession;
@protocol NavigationDelegate, SCLegacyItemDownloading, SCStartChatDelegate;

@interface SCMiniProfileSnapchatterRowController : SCMiniProfileRowController
{
    SCSnapchatter *_snapchatter;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_friendScoreProvider;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    NSIndexPath *_indexPath;
    long long _addSource;
    SCUserSession *_userSession;
    SCLazy *_storiesMediaCoordinator;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCMiniProfileSnapchatterActionHandler *_actionHandler;
    SCLazy *_storiesDataProvider;
    SCStoriesThumbnailInfo *_storiesThumbnail;
    _Bool _hasUnviewedStories;
}

- (void).cxx_destruct;
- (void)_fetchFriendStoryAndReloadIfNecessary;
- (id)_SCMiniProfileSnapchatterCollectionViewCellViewModel;
- (void)didSelectCell;
- (_Bool)shouldSelectCell;
- (void)willDisplayCell:(id)arg1;
- (double)cellHeight;
- (Class)cellClass;
- (id)initWithSnapchatter:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3 friendScoreProvider:(id)arg4 indexPath:(id)arg5 addSource:(long long)arg6 userSession:(id)arg7 storiesDataProvider:(id)arg8 storiesMediaCoordinator:(id)arg9 startChatDelegate:(id)arg10 navigationDelegate:(id)arg11 presentingViewController:(id)arg12;

@end

