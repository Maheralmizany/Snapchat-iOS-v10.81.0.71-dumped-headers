//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol SIGPresenter;

@protocol SIGPresenterObserver <NSObject>

@optional
- (void)presenter:(id <SIGPresenter>)arg1 didDismiss:(UIViewController *)arg2;
- (void)presenter:(id <SIGPresenter>)arg1 didPresent:(UIViewController *)arg2;
- (void)presenter:(id <SIGPresenter>)arg1 willDismiss:(UIViewController *)arg2;
- (void)presenter:(id <SIGPresenter>)arg1 willPresent:(UIViewController *)arg2;
@end

