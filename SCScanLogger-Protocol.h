//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol SCScanLogger <NSObject>
- (void)logScanResultsActionForUtilityLensId:(NSString *)arg1 action:(long long)arg2 requestId:(NSString *)arg3;
- (void)logScanResultsOnScreenForUtilityLensId:(NSString *)arg1 requestId:(NSString *)arg2;
- (void)logScanResultsQueryingWithUtilityLensIds:(NSSet *)arg1 requestId:(NSString *)arg2 scanSource:(long long)arg3;
@end

