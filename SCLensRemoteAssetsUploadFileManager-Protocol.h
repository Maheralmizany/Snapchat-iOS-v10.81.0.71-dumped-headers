//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLensUploadAssetInfo;

@protocol SCLensRemoteAssetsUploadFileManager <NSObject>
- (void)uploadOperationDidInvalidateAssetWithInfo:(SCLensUploadAssetInfo *)arg1;
- (_Bool)assetExistsWithInfo:(SCLensUploadAssetInfo *)arg1;
- (void)finishedUploadingToLensAssetSystemAssetWithInfo:(SCLensUploadAssetInfo *)arg1;
- (void)enqueueUploadTaskWithAssetInfo:(SCLensUploadAssetInfo *)arg1;
@end

