//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCReceiveMessageBridgedTimestamp : NSObject <NSCopying, NSCoding>
{
    NSString *_conversationId;
    long long _step;
    double _startTimestampSeconds;
    double _endTimestampSeconds;
    long long _result;
}

@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) double endTimestampSeconds; // @synthesize endTimestampSeconds=_endTimestampSeconds;
@property(readonly, nonatomic) double startTimestampSeconds; // @synthesize startTimestampSeconds=_startTimestampSeconds;
@property(readonly, nonatomic) long long step; // @synthesize step=_step;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversationId:(id)arg1 step:(long long)arg2 startTimestampSeconds:(double)arg3 endTimestampSeconds:(double)arg4 result:(long long)arg5;
- (id)initWithCoder:(id)arg1;

@end

