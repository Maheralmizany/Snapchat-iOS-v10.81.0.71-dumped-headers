//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCUserScoreInfo : NSObject <NSCopying, NSCoding>
{
    unsigned long long _sentCount;
    unsigned long long _receivedCount;
    unsigned long long _totalScore;
}

@property(readonly, nonatomic) unsigned long long totalScore; // @synthesize totalScore=_totalScore;
@property(readonly, nonatomic) unsigned long long receivedCount; // @synthesize receivedCount=_receivedCount;
@property(readonly, nonatomic) unsigned long long sentCount; // @synthesize sentCount=_sentCount;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSentCount:(unsigned long long)arg1 receivedCount:(unsigned long long)arg2 totalScore:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;

@end

