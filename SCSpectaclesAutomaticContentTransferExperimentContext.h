//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSpectaclesAutomaticContentTransferExperimentContext : SCExperimentContext
{
    _Bool _backgroundWifiTransferEnabled;
    _Bool _backgroundBTCTransferPictureEnabled;
    _Bool _backgroundBTCTransferHdVideoEnabled;
    _Bool _automaticBTCTransferWithBatteryThresholdEnabled;
    long long _backgroundTransferBatteryThreshold;
}

@property(readonly, nonatomic) long long backgroundTransferBatteryThreshold; // @synthesize backgroundTransferBatteryThreshold=_backgroundTransferBatteryThreshold;
@property(readonly, nonatomic) _Bool automaticBTCTransferWithBatteryThresholdEnabled; // @synthesize automaticBTCTransferWithBatteryThresholdEnabled=_automaticBTCTransferWithBatteryThresholdEnabled;
@property(readonly, nonatomic) _Bool backgroundBTCTransferHdVideoEnabled; // @synthesize backgroundBTCTransferHdVideoEnabled=_backgroundBTCTransferHdVideoEnabled;
@property(readonly, nonatomic) _Bool backgroundBTCTransferPictureEnabled; // @synthesize backgroundBTCTransferPictureEnabled=_backgroundBTCTransferPictureEnabled;
@property(readonly, nonatomic) _Bool backgroundWifiTransferEnabled; // @synthesize backgroundWifiTransferEnabled=_backgroundWifiTransferEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

