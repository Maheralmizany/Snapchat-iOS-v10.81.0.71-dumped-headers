//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsDeviceAdapter-Protocol.h"

@class NSString;

@interface SCSnapAdsDeviceInfoProvider : NSObject <SCSnapAdsDeviceAdapter>
{
    struct CGSize _screenSize;
}

- (id)getDiskDataWithDiskCachingEnabled:(_Bool)arg1;
- (id)getBatteryData;
- (id)getDownloadBandwidthBytesPerSecond;
- (id)getCarrierMCCAndMNC;
- (id)getCarrierName;
- (id)getDeviceLanguage;
- (id)getDeviceModel;
- (id)getOSVersion;
- (id)getConnectivity;
- (long long)getConnectivityType;
- (_Bool)isTablet;
- (_Bool)isDeviceAudible;
- (double)getScreenWidthInPixels;
- (double)getScreenHeightInPixels;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

