//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSpectaclesTimestampFrame : NSObject
{
    long long _startOfFrame;
    long long _endOfFrame;
}

@property(nonatomic) long long endOfFrame; // @synthesize endOfFrame=_endOfFrame;
@property(nonatomic) long long startOfFrame; // @synthesize startOfFrame=_startOfFrame;
- (id)encodedFrameWithTimestampOffset:(long long)arg1;
- (id)initWithTimestampFrame:(id)arg1 timestampOffset:(long long)arg2;
- (id)initWithFrame:(id)arg1 timestampOffset:(long long)arg2;

@end

