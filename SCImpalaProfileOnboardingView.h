//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerView.h"

@class SCComposerScrollView, SCImpalaProfileOnboardingViewModel;
@protocol SCImpalaProfileOnboardingViewActionHandler;

@interface SCImpalaProfileOnboardingView : SCComposerView
{
}

@property(nonatomic) __weak id <SCImpalaProfileOnboardingViewActionHandler> actionHandler;
@property(readonly, nonatomic) SCComposerScrollView *scrollView;
@property(retain, nonatomic) SCImpalaProfileOnboardingViewModel *viewModel;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
- (id)componentPath;
- (id)init;

@end

