//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCFriendsFeedCall : NSObject <NSCopying>
{
    _Bool _isReceivedUnread;
    long long _callType;
    long long _callMediaType;
}

@property(readonly, nonatomic) long long callMediaType; // @synthesize callMediaType=_callMediaType;
@property(readonly, nonatomic) long long callType; // @synthesize callType=_callType;
@property(readonly, nonatomic) _Bool isReceivedUnread; // @synthesize isReceivedUnread=_isReceivedUnread;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsReceivedUnread:(_Bool)arg1 callType:(long long)arg2 callMediaType:(long long)arg3;

@end

