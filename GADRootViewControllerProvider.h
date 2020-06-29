//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, UIViewController;

@interface GADRootViewControllerProvider : NSObject
{
    GADObserverCollection *_intermissionObservers;
    _Bool _intermissionInProgress;
    UIViewController *_nextViewController;
    UIViewController *_rootViewController;
}

@property(readonly, nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)registerIntermissionMessageSource:(id)arg1;
- (void)updateIntermissionInProgress:(_Bool)arg1;
@property(readonly, nonatomic) __weak UIViewController *topViewController;
- (void)updateViewController:(id)arg1;

@end

