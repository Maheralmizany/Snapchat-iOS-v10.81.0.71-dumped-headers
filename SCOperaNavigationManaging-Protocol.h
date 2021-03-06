//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaScrollViewDelegate-Protocol.h"

@class SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaScrollView, UIGestureRecognizer;
@protocol SCOperaNavigationDataProviding, SCOperaNavigationManagingDelegate;

@protocol SCOperaNavigationManaging <SCOperaScrollViewDelegate>
@property(nonatomic) unsigned long long scrollRelativePosition;
@property(nonatomic) __weak SCOperaScrollView *operaScrollView;
@property(readonly, nonatomic) __weak id <SCOperaNavigationDataProviding> dataProvider;
@property(readonly, nonatomic) __weak id <SCOperaNavigationManagingDelegate> delegate;
- (void)didFinishLayoutPageViewControllersForCurrentViewModel;
- (_Bool)shouldBeginDismissingWithDirection:(long long)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)isAnimatingScrolling;
- (void)navigateToAttachmentAnimated:(_Bool)arg1;
- (void)navigateToParentAnimated:(_Bool)arg1;
- (void)navigateToNextGroupAnimated:(_Bool)arg1;
- (void)navigateToPreviousGroupAnimated:(_Bool)arg1;
- (id)initWithDelegate:(id <SCOperaNavigationManagingDelegate>)arg1 dataProvider:(id <SCOperaNavigationDataProviding>)arg2 configuration:(SCOperaConfiguration *)arg3 eventAnnouncer:(SCOperaEventListenerAnnouncer *)arg4;
@end

