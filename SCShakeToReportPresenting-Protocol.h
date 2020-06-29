//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCShakeCaptureData, UINavigationController, UIViewController;
@protocol SCBetaShakeReportViewControllerDelegate, SCSIGShakeReportDelegate;

@protocol SCShakeToReportPresenting <NSObject>
- (void)presentReportViewControllerWithNavigationController:(UINavigationController *)arg1 delegate:(id <SCBetaShakeReportViewControllerDelegate>)arg2 mode:(long long)arg3;
- (void)presentSettingScreenSelectWithNavigationController:(UINavigationController *)arg1 mode:(long long)arg2;

@optional
- (void)presentReportScreenWithTopViewController:(UIViewController *)arg1 withCapturedData:(SCShakeCaptureData *)arg2 featureNames:(NSArray *)arg3 shakeId:(NSString *)arg4 reportType:(long long)arg5 reportSource:(long long)arg6 screenSelected:(NSString *)arg7 delegate:(id <SCSIGShakeReportDelegate>)arg8;
@end

