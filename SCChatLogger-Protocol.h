//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, SCChatMessageDataModel, SCChatMessageV3, SCPlatformAnalyticsBatchContainer, SCPlatformAnalyticsDataModel, SCPlatformAnalyticsMediaViewInfo;
@protocol SCChatMessage;

@protocol SCChatLogger <NSObject>
- (void)logMuteStoryWithStoryType:(long long)arg1 isMuted:(_Bool)arg2;
- (void)logChatMediaLoadLifeCycle:(NSString *)arg1 stepName:(NSString *)arg2;
- (void)logChatMediaSendEnd:(NSString *)arg1 success:(_Bool)arg2;
- (void)logSentMessage:(id <SCChatMessage>)arg1 success:(_Bool)arg2;
- (void)logSCAChatScreenshot:(SCChatMessageV3 *)arg1;
- (void)logSCAChatEraseModeUpdate:(unsigned long long)arg1;
- (void)logSCADataModelChatUnsave:(SCChatMessageDataModel *)arg1;
- (void)logSCADataModelChatSave:(SCChatMessageDataModel *)arg1;
- (void)logSCADataModelChatErase:(SCChatMessageDataModel *)arg1;
- (void)logSCAChatUnsave:(id <SCChatMessage>)arg1;
- (void)logSCAChatSave:(id <SCChatMessage>)arg1;
- (void)logSCAChatErase:(id <SCChatMessage>)arg1;
- (void)registerPlatformAnalyticsBatchTaskUUID:(NSString *)arg1;
- (void)logSCAChatDirectSnapViewForMemoryStoryWithMessage:(id <SCChatMessage>)arg1 mediaViewInfo:(SCPlatformAnalyticsMediaViewInfo *)arg2;
- (void)logSCAChatSnapViewWithMessage:(id <SCChatMessage>)arg1 mediaViewInfo:(SCPlatformAnalyticsMediaViewInfo *)arg2;
- (void)logSCAChatViewForMessage:(id <SCChatMessage>)arg1 releaseTimestamp:(NSDate *)arg2;
- (void)logSCAChatSend:(id <SCChatMessage>)arg1 platformAnalyticsContainer:(SCPlatformAnalyticsBatchContainer *)arg2;
- (void)logSCAChatSend:(id <SCChatMessage>)arg1 platformAnalytics:(SCPlatformAnalyticsDataModel *)arg2;
@end

