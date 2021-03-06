//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSData, NSDate, NSString, SCCloudSyncTriggerUserContext, SCLensSnap3DAssetMetadata, SCOverlayFormat, SOJUGallerySnapOverlay, UIImage;
@protocol SCPreviewVideoProvider;

@protocol SCMemoriesDataMutatingSharedStory <NSObject>
- (void)saveStoryVideoSnap:(NSData *)arg1 videoProvider:(id <SCPreviewVideoProvider>)arg2 sojuMediaType:(long long)arg3 servletMediaFormat:(NSString *)arg4 source:(unsigned long long)arg5 storySnapId:(NSString *)arg6 captureTimeUtc:(NSDate *)arg7 createTimeUtc:(NSDate *)arg8 orientation:(long long)arg9 overlayFormat:(SCOverlayFormat *)arg10 overlay:(SOJUGallerySnapOverlay *)arg11 location:(CLLocation *)arg12 isPrivate:(_Bool)arg13 entrySource:(long long)arg14 saveSource:(unsigned long long)arg15 isInfiniteDuration:(_Bool)arg16 isFromSavedMetadata:(_Bool)arg17 cameraFrontFacing:(_Bool)arg18 userContext:(SCCloudSyncTriggerUserContext *)arg19 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg20;
- (void)saveStoryImageSnap:(UIImage *)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(NSString *)arg3 source:(unsigned long long)arg4 captureTimeUtc:(NSDate *)arg5 createTimeUtc:(NSDate *)arg6 orientation:(long long)arg7 duration:(double)arg8 overlayFormat:(SCOverlayFormat *)arg9 overlay:(SOJUGallerySnapOverlay *)arg10 location:(CLLocation *)arg11 isPrivate:(_Bool)arg12 entrySource:(long long)arg13 saveSource:(unsigned long long)arg14 isInfiniteDuration:(_Bool)arg15 isFromSavedMetadata:(_Bool)arg16 cameraFrontFacing:(_Bool)arg17 snap3DAssetMetadata:(SCLensSnap3DAssetMetadata *)arg18 userContext:(SCCloudSyncTriggerUserContext *)arg19 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg20;
@end

