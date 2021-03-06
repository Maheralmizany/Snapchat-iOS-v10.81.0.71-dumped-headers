//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLegacySnapchatterServices, SCSelectionGroupServices, SCSelectionRecipientServices, SCSelectionStoryServices, SCServicesExposer, SCSortableSnapchatterServices, SCUserFeatureConfigurationServices, SCUserSessionScope, SCUserStorageServices;

@interface SCSendToDataServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCSortableSnapchatterServices *_sortableSnapchatterServices;
    SCSelectionGroupServices *_selectionGroupServices;
    SCSelectionRecipientServices *_selectionRecipientServices;
    SCSelectionStoryServices *_selectionStoryServices;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
    SCServicesExposer *_sendToDataServicesExposer;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
}

@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(retain, nonatomic) SCServicesExposer *sendToDataServicesExposer; // @synthesize sendToDataServicesExposer=_sendToDataServicesExposer;
@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCSelectionStoryServices *selectionStoryServices; // @synthesize selectionStoryServices=_selectionStoryServices;
@property(nonatomic) __weak SCSelectionRecipientServices *selectionRecipientServices; // @synthesize selectionRecipientServices=_selectionRecipientServices;
@property(nonatomic) __weak SCSelectionGroupServices *selectionGroupServices; // @synthesize selectionGroupServices=_selectionGroupServices;
@property(nonatomic) __weak SCSortableSnapchatterServices *sortableSnapchatterServices; // @synthesize sortableSnapchatterServices=_sortableSnapchatterServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_sendToDataPrefetcherWithReplySnapchatterObservableRepository:(id)arg1 lastSnapDataCoordinator:(id)arg2;
- (void)begin;

@end

