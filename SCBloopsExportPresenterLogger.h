//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCBloopsExportPresenterLogger : NSObject
{
    NSString *_bloopsAPIVersion;
}

- (void).cxx_destruct;
- (void)trackExportCompleteEventWithBloopsModel:(id)arg1 sectionAnalyticsId:(id)arg2 success:(_Bool)arg3 activityType:(id)arg4;
- (id)initWithBloopsAPIVersion:(id)arg1;

@end

