//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, SCPlatformAnalyticsSnapSendInfo, SDMSnapDoc;

@protocol SCSnapSending
- (void)sendSnapMessageWithSnapDoc:(SDMSnapDoc *)arg1 snapDocKey:(NSString *)arg2 conversations:(NSArray *)arg3 stories:(NSArray *)arg4 snapSendInfo:(SCPlatformAnalyticsSnapSendInfo *)arg5 enableSavingSnaps:(_Bool)arg6;
@end
