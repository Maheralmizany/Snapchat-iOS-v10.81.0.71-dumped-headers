//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdLensPerformanceMetrics-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdLensPerformanceMetrics : SCSojuMessage <SOJUAdLensPerformanceMetrics>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithAvgFps:(id)arg1 lensApplyDelayMillis:(id)arg2 frameProcessingTimeAvgMillis:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSNumber *avgFps; // @dynamic avgFps;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *frameProcessingTimeAvgMillis; // @dynamic frameProcessingTimeAvgMillis;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *lensApplyDelayMillis; // @dynamic lensApplyDelayMillis;
@property(readonly) Class superclass;

@end

