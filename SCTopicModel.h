//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCTopicModel : NSObject <NSCopying, NSCoding>
{
    _Bool _suggestedFromServer;
    NSString *_hashtag;
    long long _suggestedReason;
}

@property(readonly, nonatomic) _Bool suggestedFromServer; // @synthesize suggestedFromServer=_suggestedFromServer;
@property(readonly, nonatomic) long long suggestedReason; // @synthesize suggestedReason=_suggestedReason;
@property(readonly, copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHashtag:(id)arg1 suggestedReason:(long long)arg2 suggestedFromServer:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

