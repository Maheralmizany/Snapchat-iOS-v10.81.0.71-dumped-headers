//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSCrashInstallationSnapAir.h"

@class KSCrash, NSString;
@protocol KSCrashReportUploadManager;

@interface KSCrashInstallationSnapAirAppExtension : KSCrashInstallationSnapAir
{
    NSString *_basePath;
    id <KSCrashReportUploadManager> _manager;
    KSCrash *_handler;
}

- (void).cxx_destruct;
- (void)setUserInfo:(id)arg1;
- (const char *)_getReportsPath;
- (void)deleteAllReports;
- (id)reportWithIntID:(long long)arg1 appName:(const char *)arg2;
- (id)allReportsForApp:(const char *)arg1;
- (void)sendAllReportsWithAppName:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)install;
- (id)initWithBasePath:(id)arg1 ReportUploadManager:(id)arg2;

@end

