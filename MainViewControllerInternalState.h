//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCCapturerToken, SCFailedStoryPostTooltipController, SCHovaOverscrollController, SCLazy, SCScopeExposer, SCScopedAccess, SCSpringAnimationHeartbeat, SCStatusBarLabelController, SCUnifiedProfileTransitionCoordinator, SCUserSession;
@protocol SCMapPresenter;

@interface MainViewControllerInternalState : NSObject
{
    _Bool _didExitFromTap;
    _Bool _skipLoadingMiddleVC;
    _Bool _isObserving;
    _Bool _didOpenFromNotification;
    _Bool _didLogOut;
    _Bool _viewDidLoad;
    SCUserSession *_userSession;
    SCCapturerToken *_token;
    SCSpringAnimationHeartbeat *_springAnimationHeartbeat;
    id <SCMapPresenter> _mapPresenter;
    SCScopeExposer *_discoverFeedScopeExposer;
    SCScopeExposer *_friendsFeedScopeExposer;
    SCScopeExposer *_cameraScopeExposer;
    SCScopeExposer *_searchV2ScopeExposer;
    SCScopeExposer *_mapScopeExposer;
    NSArray *_allViewControllers;
    NSArray *_hovaViewControllers;
    SCScopedAccess *_scopedLazyFriendsFeedDataCoordinator;
    SCStatusBarLabelController *_statusBarLabelController;
    SCHovaOverscrollController *_overscrollController;
    SCUnifiedProfileTransitionCoordinator *_profileTransitionCoordinator;
    SCFailedStoryPostTooltipController *_failedStoryTooltipController;
    double _lastWillEnterForeground;
    SCLazy *_addFriendsPresenter;
    struct _NSRange _visibleViewControllerRange;
}

@property(nonatomic) _Bool viewDidLoad; // @synthesize viewDidLoad=_viewDidLoad;
@property(nonatomic) _Bool didLogOut; // @synthesize didLogOut=_didLogOut;
@property(retain, nonatomic) SCLazy *addFriendsPresenter; // @synthesize addFriendsPresenter=_addFriendsPresenter;
@property(nonatomic) double lastWillEnterForeground; // @synthesize lastWillEnterForeground=_lastWillEnterForeground;
@property(nonatomic) _Bool didOpenFromNotification; // @synthesize didOpenFromNotification=_didOpenFromNotification;
@property(retain, nonatomic) SCFailedStoryPostTooltipController *failedStoryTooltipController; // @synthesize failedStoryTooltipController=_failedStoryTooltipController;
@property(retain, nonatomic) SCUnifiedProfileTransitionCoordinator *profileTransitionCoordinator; // @synthesize profileTransitionCoordinator=_profileTransitionCoordinator;
@property(retain, nonatomic) SCHovaOverscrollController *overscrollController; // @synthesize overscrollController=_overscrollController;
@property(retain, nonatomic) SCStatusBarLabelController *statusBarLabelController; // @synthesize statusBarLabelController=_statusBarLabelController;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(retain, nonatomic) SCScopedAccess *scopedLazyFriendsFeedDataCoordinator; // @synthesize scopedLazyFriendsFeedDataCoordinator=_scopedLazyFriendsFeedDataCoordinator;
@property(retain, nonatomic) NSArray *hovaViewControllers; // @synthesize hovaViewControllers=_hovaViewControllers;
@property(retain, nonatomic) NSArray *allViewControllers; // @synthesize allViewControllers=_allViewControllers;
@property(nonatomic) struct _NSRange visibleViewControllerRange; // @synthesize visibleViewControllerRange=_visibleViewControllerRange;
@property(nonatomic) __weak SCScopeExposer *mapScopeExposer; // @synthesize mapScopeExposer=_mapScopeExposer;
@property(nonatomic) __weak SCScopeExposer *searchV2ScopeExposer; // @synthesize searchV2ScopeExposer=_searchV2ScopeExposer;
@property(nonatomic) __weak SCScopeExposer *cameraScopeExposer; // @synthesize cameraScopeExposer=_cameraScopeExposer;
@property(nonatomic) __weak SCScopeExposer *friendsFeedScopeExposer; // @synthesize friendsFeedScopeExposer=_friendsFeedScopeExposer;
@property(nonatomic) __weak SCScopeExposer *discoverFeedScopeExposer; // @synthesize discoverFeedScopeExposer=_discoverFeedScopeExposer;
@property(retain, nonatomic) id <SCMapPresenter> mapPresenter; // @synthesize mapPresenter=_mapPresenter;
@property(nonatomic) _Bool skipLoadingMiddleVC; // @synthesize skipLoadingMiddleVC=_skipLoadingMiddleVC;
@property(retain, nonatomic) SCSpringAnimationHeartbeat *springAnimationHeartbeat; // @synthesize springAnimationHeartbeat=_springAnimationHeartbeat;
@property(nonatomic) _Bool didExitFromTap; // @synthesize didExitFromTap=_didExitFromTap;
@property(retain, nonatomic) SCCapturerToken *token; // @synthesize token=_token;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;

@end

