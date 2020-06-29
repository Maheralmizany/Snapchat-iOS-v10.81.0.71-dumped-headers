//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapchattersIncomingFriendInfo : NSObject <NSCopying>
{
    _Bool _isFriendRequestIgnored;
    _Bool _isFriendRequestViewed;
    NSString *_addSource;
    double _addedByFriendTimestamp;
}

@property(readonly, nonatomic) _Bool isFriendRequestViewed; // @synthesize isFriendRequestViewed=_isFriendRequestViewed;
@property(readonly, nonatomic) _Bool isFriendRequestIgnored; // @synthesize isFriendRequestIgnored=_isFriendRequestIgnored;
@property(readonly, nonatomic) double addedByFriendTimestamp; // @synthesize addedByFriendTimestamp=_addedByFriendTimestamp;
@property(readonly, copy, nonatomic) NSString *addSource; // @synthesize addSource=_addSource;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddSource:(id)arg1 addedByFriendTimestamp:(double)arg2 isFriendRequestIgnored:(_Bool)arg3 isFriendRequestViewed:(_Bool)arg4;

@end

