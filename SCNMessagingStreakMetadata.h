//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNMessagingStreakMetadata : NSObject
{
    int _count;
    long long _expirationTimestampMs;
}

+ (id)StreakMetadataWithCount:(int)arg1 expirationTimestampMs:(long long)arg2;
@property(readonly, nonatomic) long long expirationTimestampMs; // @synthesize expirationTimestampMs=_expirationTimestampMs;
@property(readonly, nonatomic) int count; // @synthesize count=_count;
- (id)description;
- (id)initWithCount:(int)arg1 expirationTimestampMs:(long long)arg2;

@end

