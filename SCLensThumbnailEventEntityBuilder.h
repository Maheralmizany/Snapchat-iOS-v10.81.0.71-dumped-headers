//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLensThumbnailEventEntityBuilder : NSObject
{
    NSString *_lensId;
    long long _lensIndex;
    double _onScreenTimeNotReady;
    double _onScreenTimeTotal;
}

+ (id)withLensThumbnailEventEntity:(id)arg1;
- (void).cxx_destruct;
- (id)setOnScreenTimeTotal:(double)arg1;
- (id)setOnScreenTimeNotReady:(double)arg1;
- (id)setLensIndex:(long long)arg1;
- (id)setLensId:(id)arg1;
- (id)build;

@end
