//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableArray;
@protocol SCPerforming;

@interface SCReportLogs : NSObject
{
    NSMutableArray *_logsArray;
    NSDateFormatter *_timeStampFormat;
    id <SCPerforming> _performer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSDateFormatter *timeStampFormat; // @synthesize timeStampFormat=_timeStampFormat;
@property(retain, nonatomic) NSMutableArray *logsArray; // @synthesize logsArray=_logsArray;
- (void).cxx_destruct;
- (id)backupLogs;
- (void)logLine:(id)arg1;
- (id)init;

@end

