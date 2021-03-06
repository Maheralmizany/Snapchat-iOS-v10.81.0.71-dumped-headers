//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, VLKAmbaRequest;

@protocol SCSpectaclesNetworkRequestProvider <NSObject>
+ (id)lagunaPairingRequestWithAmbaRequest:(VLKAmbaRequest *)arg1;
+ (id)stereoCalibrationDataRequest;
+ (id)analyticsFilesDeleteRequest;
+ (id)analyticsFilesGetWithFilename:(NSString *)arg1 range:(struct _NSRange)arg2;
+ (id)analyticsFilesListRequest;
+ (id)shareWifiCredentialsStatusRequest;
+ (id)shareWifiCredentialsRequest;
+ (id)gpsWriteRequest:(NSData *)arg1;
+ (id)firmwareWriteRequest:(NSData *)arg1 start:(unsigned long long)arg2;
+ (id)crashLogFileRequestWithFilename:(NSString *)arg1 range:(struct _NSRange)arg2;
+ (id)crashLogFileListRequest;
+ (id)startAsNeededDeletionRequest;
+ (id)deletionRequestForContentNamed:(NSString *)arg1 includeHd:(_Bool)arg2;
+ (id)markTransferredRequestForContentNamed:(NSString *)arg1 includeHd:(_Bool)arg2;
+ (id)batchReadRequestWithFilename:(NSString *)arg1 range:(struct _NSRange)arg2 chunkSize:(unsigned long long)arg3 allowDataPacket:(_Bool)arg4;
+ (id)readRequestWithFilename:(NSString *)arg1;
+ (id)mediaListRequest;
+ (id)requestByBatchingRequests:(NSArray *)arg1;
@end

