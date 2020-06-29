//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCustomStoriesServices, SCCustomStoryCreationScope, SCCustomStoryCreationWorkflow, SCLegacySnapchatterServices, SCScopeExposer, SCStoriesMetricServices, SCUserSessionScope;

@interface SCCustomStoryCreationEntryPoint : SCEntryPoint
{
    SCCustomStoryCreationWorkflow *_workflow;
    SCCustomStoryCreationScope *_customStoryCreationScope;
    SCUserSessionScope *_userSessionScope;
    SCCustomStoriesServices *_customStoriesServices;
    SCStoriesMetricServices *_storiesMetricServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCScopeExposer *_recipientPickerScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *recipientPickerScopeExposer; // @synthesize recipientPickerScopeExposer=_recipientPickerScopeExposer;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCStoriesMetricServices *storiesMetricServices; // @synthesize storiesMetricServices=_storiesMetricServices;
@property(nonatomic) __weak SCCustomStoriesServices *customStoriesServices; // @synthesize customStoriesServices=_customStoriesServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCCustomStoryCreationScope *customStoryCreationScope; // @synthesize customStoryCreationScope=_customStoryCreationScope;
- (void).cxx_destruct;
- (void)begin;

@end

