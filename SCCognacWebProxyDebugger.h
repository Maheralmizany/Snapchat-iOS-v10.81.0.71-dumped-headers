//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCCognacWebProxyDebugger : NSObject
{
    NSString *_loadingAppId;
    double _loadingAppStartLoadingTime;
}

- (void).cxx_destruct;
- (void)didFinishLoadingAppWithAppId:(id)arg1 appName:(id)arg2;
- (void)didStartLoadingAppWithAppId:(id)arg1 appName:(id)arg2;
- (void)didStartPreloadingAppWithAppName:(id)arg1;
- (void)showDebugBannerWithText:(id)arg1;

@end

