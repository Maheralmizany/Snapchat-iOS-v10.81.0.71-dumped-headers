//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSAttributedString, NSObject, NSString, SCNMessagingLocalMessageContent, SCPlatformAnalyticsDataModel;
@protocol OS_dispatch_queue;

@protocol SCTextSending
- (void)sendMessageWithContent:(SCNMessagingLocalMessageContent *)arg1 additionalText:(NSString *)arg2 additionalTextPlatformAnalytics:(SCPlatformAnalyticsDataModel *)arg3 conversations:(NSArray *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionHandler:(void (^)(long long))arg6;
- (void)sendURLTextMessage:(NSString *)arg1 additionalText:(NSString *)arg2 conversations:(NSArray *)arg3 platformAnalytics:(SCPlatformAnalyticsDataModel *)arg4 additionalTextPlatformAnalytics:(SCPlatformAnalyticsDataModel *)arg5 completionHandler:(void (^)(long long))arg6;
- (void)sendAttributedTextMessage:(NSAttributedString *)arg1 conversations:(NSArray *)arg2 platformAnalytics:(SCPlatformAnalyticsDataModel *)arg3 completionHandler:(void (^)(long long))arg4;
@end
