//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltip.h"

@class SCVerticalSwipeHintView;
@protocol SCLensExploreTooltipStatusProtocol;

@interface SCLensExplorerSwipeUpTooltip : SCOnboardingTooltip
{
    id <SCLensExploreTooltipStatusProtocol> _tooltipStatus;
    SCVerticalSwipeHintView *_hintView;
}

- (void).cxx_destruct;
- (id)hintView;
- (void)_playHideAnimation;
- (void)_playShowAnimation;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
- (void)hide;
- (void)show;
- (id)initWithParentView:(id)arg1 tooltipStatus:(id)arg2;

@end

