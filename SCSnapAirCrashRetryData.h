//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSnapAirCrashRetryData : NSObject
{
    long long _retryCount;
    long long _maxRetryCount;
    double _serverBackoff;
}

@property(nonatomic) double serverBackoff; // @synthesize serverBackoff=_serverBackoff;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (id)initWithRetryCount:(long long)arg1 maxRetryCount:(long long)arg2 serverBackoff:(double)arg3;

@end

