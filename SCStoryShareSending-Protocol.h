//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSObject, SCPlatformAnalyticsDataModel, SCSearchSnapShareDataModel, SCSearchStoryShareDataModel, SCUserStoryShareDataModel;
@protocol OS_dispatch_queue;

@protocol SCStoryShareSending
- (void)sendSearchSnapShareMessage:(SCSearchSnapShareDataModel *)arg1 conversations:(NSArray *)arg2 platformAnalytics:(SCPlatformAnalyticsDataModel *)arg3 additionalTextPlatformAnalytics:(SCPlatformAnalyticsDataModel *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionHandler:(void (^)(long long))arg6;
- (void)sendSearchStoryShareMessage:(SCSearchStoryShareDataModel *)arg1 conversations:(NSArray *)arg2 platformAnalytics:(SCPlatformAnalyticsDataModel *)arg3 additionalTextPlatformAnalytics:(SCPlatformAnalyticsDataModel *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionHandler:(void (^)(long long))arg6;
- (void)sendUserStoryShareMessage:(SCUserStoryShareDataModel *)arg1 conversations:(NSArray *)arg2 platformAnalytics:(SCPlatformAnalyticsDataModel *)arg3 additionalTextPlatformAnalytics:(SCPlatformAnalyticsDataModel *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionHandler:(void (^)(long long))arg6;
@end
