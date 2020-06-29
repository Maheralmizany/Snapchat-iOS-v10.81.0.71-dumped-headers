//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SIGDialogDelegate-Protocol.h"

@class NSString, SCDeleteStorySnapScope, SCLegacyStoriesServices, SCUserFeatureConfigurationServices, SIGAlertDialog;
@protocol SCDeleteStorySnapScopeDelegate;

@interface SCDeleteStorySnapScopeEntryPoint : SCEntryPoint <SIGDialogDelegate>
{
    SIGAlertDialog *_deleteAlert;
    id <SCDeleteStorySnapScopeDelegate> _delegate;
    SCDeleteStorySnapScope *_deleteStorySnapScope;
    SCLegacyStoriesServices *_legacyStoriesServices;
    SCUserFeatureConfigurationServices *_userFeatureConfigurationServices;
}

@property(nonatomic) __weak SCUserFeatureConfigurationServices *userFeatureConfigurationServices; // @synthesize userFeatureConfigurationServices=_userFeatureConfigurationServices;
@property(nonatomic) __weak SCLegacyStoriesServices *legacyStoriesServices; // @synthesize legacyStoriesServices=_legacyStoriesServices;
@property(nonatomic) __weak SCDeleteStorySnapScope *deleteStorySnapScope; // @synthesize deleteStorySnapScope=_deleteStorySnapScope;
- (void).cxx_destruct;
- (void)dialogDidDismiss:(id)arg1;
- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
