//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

@class SCMiniProfileRowController;

@interface SCMiniProfileSnapchatterIdentitySectionController : SCMiniProfileSectionController
{
    _Bool _showMore;
    SCMiniProfileRowController *_rowController;
}

- (void).cxx_destruct;
- (void)setShowsMore:(_Bool)arg1 animated:(_Bool)arg2;
- (id)rowControllerAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (double)extraBottomInsetSpacing;
- (id)initWithTempSnapchatter:(id)arg1 tempSnapchatterDataCoordinator:(id)arg2 userInfoProvider:(id)arg3 addSource:(long long)arg4 userSession:(id)arg5;
- (id)initWithSnapchatter:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3 friendScoreProvider:(id)arg4 addSource:(long long)arg5 userSession:(id)arg6 storiesDataProvider:(id)arg7 storiesMediaCoordinator:(id)arg8 startChatDelegate:(id)arg9 navigationDelegate:(id)arg10 presentingViewController:(id)arg11;

@end
