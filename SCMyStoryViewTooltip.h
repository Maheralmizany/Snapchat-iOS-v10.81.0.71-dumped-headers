//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltip.h"

@class SCScopedAccess, User;
@protocol NavigationDelegate, NavigationPageState;

@interface SCMyStoryViewTooltip : SCOnboardingTooltip
{
    User *_user;
    SCScopedAccess *_scopedStories;
    id <NavigationPageState> _navigationPageState;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (id)_toolTipBackgroundColorWhite;
- (id)_toolTipTextColorBlack;
- (id)_toolTipText;
- (id)_toolTipAppearance;
- (_Bool)_canShowOnCameraPage;
- (_Bool)_userHasMoreThanOneStoryViews;
- (_Bool)needsToBeCompleted;
- (void)markCompleted;
- (void)show;
- (void)willShow;
- (_Bool)shouldShow;
- (id)initWithParentView:(id)arg1 navigationDelegate:(id)arg2 navigationPageState:(id)arg3 scopedStories:(id)arg4;

@end

