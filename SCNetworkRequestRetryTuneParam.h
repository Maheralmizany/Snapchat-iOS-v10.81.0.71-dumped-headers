//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNetworkRequestRetryTuneParam : NSObject
{
    int _retryAttempt;
    long long _retryIntervalInMillis;
    long long _retryPolicy;
}

@property(readonly, nonatomic) long long retryPolicy; // @synthesize retryPolicy=_retryPolicy;
@property(readonly, nonatomic) long long retryIntervalInMillis; // @synthesize retryIntervalInMillis=_retryIntervalInMillis;
@property(readonly, nonatomic) int retryAttempt; // @synthesize retryAttempt=_retryAttempt;
- (id)initWithRetryAttempt:(int)arg1 retryIntervalInMillis:(int)arg2 retryPolicy:(long long)arg3;

@end

