//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCLensCommandProcessingInfoConfiguration : NSObject
{
    _Bool _cacheTrackingData;
    unsigned long long _inputSource;
    CDStruct_1b6d18a9 _timeStamp;
}

+ (id)newUcoAnimationFrozenConfiguration;
@property(readonly, nonatomic) _Bool cacheTrackingData; // @synthesize cacheTrackingData=_cacheTrackingData;
@property(readonly, nonatomic) unsigned long long inputSource; // @synthesize inputSource=_inputSource;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timeStamp; // @synthesize timeStamp=_timeStamp;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 inputSource:(unsigned long long)arg2 cacheTrackingData:(_Bool)arg3;

@end

