//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SCBehaviorSubject, SCDisposableObserverLifecycle, SCObservable, SCPrePromptPermissionCustomDialogView;

@interface SCPreRegistrationBlitzPrepromptNotificationViewController : UIViewController
{
    SCDisposableObserverLifecycle *_subscriptions;
    SCPrePromptPermissionCustomDialogView *_pageMainView;
    SCBehaviorSubject *_actions;
}

- (void).cxx_destruct;
- (void)_dontAllowButtonPressed;
- (void)_okButtonPressed;
@property(readonly, nonatomic) SCObservable *actions;
- (void)_setupPageMainView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end

