//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCFeatureTeachingTooltips, SCTeachingTooltip;

@protocol SCFeatureTeachingTooltipsDelegate <NSObject>
- (_Bool)teachingTooltipsShouldDisplay:(id <SCFeatureTeachingTooltips>)arg1 tooltip:(id <SCTeachingTooltip>)arg2;

@optional
- (void)teachingTooltipsDidUpdateVisibility:(id <SCFeatureTeachingTooltips>)arg1 tooltip:(id <SCTeachingTooltip>)arg2;
@end

