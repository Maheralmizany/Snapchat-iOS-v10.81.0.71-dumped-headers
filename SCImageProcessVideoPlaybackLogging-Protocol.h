//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCImageProcessVideoPlaybackLogging <NSObject>
- (void)setLoggingEnabled:(_Bool)arg1;
- (NSString *)playbackSessionId;
- (void)setIsLaguna:(_Bool)arg1;
- (void)setVideoDuration:(double)arg1;
- (void)logVideoPlaybackError:(long long)arg1;
- (void)logVideoPlaybackFirstFrame;
- (void)logVideoPlaybackSetup;
@end

