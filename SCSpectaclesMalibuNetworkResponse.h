//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesNetworkResponse.h"

@class MLBAmbaResponse;

@interface SCSpectaclesMalibuNetworkResponse : SCSpectaclesNetworkResponse
{
    MLBAmbaResponse *_malibuResponse;
}

+ (unsigned long long)_convertShareWifiRequestStatus:(int)arg1;
+ (unsigned long long)_fileTypeFromMediaType:(int)arg1;
@property(readonly, nonatomic) MLBAmbaResponse *malibuResponse; // @synthesize malibuResponse=_malibuResponse;
- (void).cxx_destruct;
- (id)stereoCalibrationData;
- (unsigned long long)wifiSharingStatus;
- (id)logData;
- (id)logFileList;
- (id)metadata;
- (struct _NSRange)mediaDataRange;
- (id)mediaData;
- (id)mediaUUID;
- (id)mediaList;
- (unsigned long long)serializedSize;
- (long long)responseStatus;
- (id)initWithMalibuResponse:(id)arg1;

@end

