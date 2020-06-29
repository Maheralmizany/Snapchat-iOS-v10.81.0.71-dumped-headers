//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltip.h"

@class SCFeatureSettingsService, UICollectionView, UICollectionViewCell;

@interface SCNewUserOnboardingStoryTooltip : SCOnboardingTooltip
{
    UICollectionView *_collectionView;
    UICollectionViewCell *_cell;
    SCFeatureSettingsService *_featureSettingsService;
}

- (void).cxx_destruct;
- (void)_updateCell;
- (void)_updatePosition;
- (id)_tooltipTextFont;
- (id)_tooltipBackgroundColor;
- (id)_tooltipTextColor;
- (id)_tooltipText;
- (id)_tooltipAppearance;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
- (void)willShow;
- (_Bool)shouldShow;
- (id)initWithParentView:(id)arg1 userSession:(id)arg2;

@end
