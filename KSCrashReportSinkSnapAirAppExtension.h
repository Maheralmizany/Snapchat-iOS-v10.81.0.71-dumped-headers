//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSCrashReportSinkSnapAir.h"

@class NSString;

@interface KSCrashReportSinkSnapAirAppExtension : KSCrashReportSinkSnapAir
{
    NSString *_appName;
    NSString *_reportsPath;
}

- (void).cxx_destruct;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithKSCrashReportUploadManager:(id)arg1 reportsPath:(id)arg2 appName:(id)arg3;

@end
