//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNGrpcRPCInfo;

@interface SCNGrpcUnaryMetricsInfo : NSObject
{
    _Bool _success;
    int _statusCode;
    SCNGrpcRPCInfo *_rpcInfo;
    long long _connectionTime;
    long long _networkTTFB;
    long long _responseTime;
    long long _requestSize;
    long long _responseSize;
}

+ (id)UnaryMetricsInfoWithRpcInfo:(id)arg1 connectionTime:(long long)arg2 networkTTFB:(long long)arg3 responseTime:(long long)arg4 requestSize:(long long)arg5 responseSize:(long long)arg6 success:(_Bool)arg7 statusCode:(int)arg8;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property(readonly, nonatomic) long long requestSize; // @synthesize requestSize=_requestSize;
@property(readonly, nonatomic) long long responseTime; // @synthesize responseTime=_responseTime;
@property(readonly, nonatomic) long long networkTTFB; // @synthesize networkTTFB=_networkTTFB;
@property(readonly, nonatomic) long long connectionTime; // @synthesize connectionTime=_connectionTime;
@property(readonly, nonatomic) SCNGrpcRPCInfo *rpcInfo; // @synthesize rpcInfo=_rpcInfo;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRpcInfo:(id)arg1 connectionTime:(long long)arg2 networkTTFB:(long long)arg3 responseTime:(long long)arg4 requestSize:(long long)arg5 responseSize:(long long)arg6 success:(_Bool)arg7 statusCode:(int)arg8;

@end

