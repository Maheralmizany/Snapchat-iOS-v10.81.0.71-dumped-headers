//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCFriendUnifiedProfileConfiguration : NSObject <NSCopying>
{
    _Bool _disableChatInputBar;
    _Bool _disableMap;
    long long _nonFriendAddSourceType;
}

@property(readonly, nonatomic) long long nonFriendAddSourceType; // @synthesize nonFriendAddSourceType=_nonFriendAddSourceType;
@property(readonly, nonatomic) _Bool disableMap; // @synthesize disableMap=_disableMap;
@property(readonly, nonatomic) _Bool disableChatInputBar; // @synthesize disableChatInputBar=_disableChatInputBar;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisableChatInputBar:(_Bool)arg1 disableMap:(_Bool)arg2 nonFriendAddSourceType:(long long)arg3;

@end

