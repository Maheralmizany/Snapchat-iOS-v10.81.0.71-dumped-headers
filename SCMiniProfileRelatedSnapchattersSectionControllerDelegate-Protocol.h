//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Friend, SCMiniProfileStoryRelatedSnapchattersSectionController, SCStoriesSummaryInfo, UIView;

@protocol SCMiniProfileRelatedSnapchattersSectionControllerDelegate <NSObject>
- (void)relatedSnapchattersSectionController:(SCMiniProfileStoryRelatedSnapchattersSectionController *)arg1 didLongPressOnFriend:(Friend *)arg2 originalFriend:(Friend *)arg3;
- (void)relatedSnapchattersSectionController:(SCMiniProfileStoryRelatedSnapchattersSectionController *)arg1 didTapPlayFriendStoriesSummary:(SCStoriesSummaryInfo *)arg2 originalFriend:(Friend *)arg3 withBaseView:(UIView *)arg4;
- (void)relatedSnapchattersSectionController:(SCMiniProfileStoryRelatedSnapchattersSectionController *)arg1 didTapAddFriend:(Friend *)arg2 originalFriend:(Friend *)arg3;
@end

