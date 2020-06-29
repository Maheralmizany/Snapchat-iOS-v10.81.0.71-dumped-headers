//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCADirectSnapCreate : SCAUserTrackedEvent
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setZslCapture:(_Bool)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)setWithZooming:(_Bool)arg1;
- (void)setSubpageName:(id)arg1;
- (void)setStickerCanvasId:(id)arg1;
- (void)setSpecsContentId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setSnapCreateTs:(id)arg1;
- (void)setServerRankingId:(id)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setRankingId:(id)arg1;
- (void)setNightModeState:(long long)arg1;
- (void)setMultiSnapCount:(long long)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setLowLightStatus:(long long)arg1;
- (void)setLightSensorValue:(double)arg1;
- (void)setLensSource:(long long)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setLensInfo:(id)arg1;
- (void)setLensIndexPos:(long long)arg1;
- (void)setLensIndexCount:(long long)arg1;
- (void)setLensBundleUrl:(id)arg1;
- (void)setLagunaUserAgent:(id)arg1;
- (void)setLagunaTransferBatchId:(id)arg1;
- (void)setLagunaDeviceId:(id)arg1;
- (void)setLagunaConnectivity:(long long)arg1;
- (void)setIsHdrEnabled:(_Bool)arg1;
- (void)setHandsFree:(_Bool)arg1;
- (void)setGridModeState:(long long)arg1;
- (void)setGhost_correspondent_id:(id)arg1;
- (void)setFriendshipStatus:(long long)arg1;
- (void)setFlashTriggerSource:(long long)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setFilterSponsor:(id)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterGeofence:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (void)setFaceBackCameraCount:(long long)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setCreativeKitMetadata:(id)arg1;
- (void)setCorrespondentType:(long long)arg1;
- (void)setCorrespondentId:(id)arg1;
- (void)setCellViewPosition:(long long)arg1;
- (void)setCaptureSource:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setCaption:(long long)arg1;
- (void)setCameraSdk:(id)arg1;
- (void)setCameraMode:(long long)arg1;
- (void)setCameraFlipActionPreCapture:(id)arg1;
- (void)setCameraApi:(id)arg1;
- (void)setCamera:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;
- (id)initWithSnapCommonLoggingParameters:(id)arg1;

@end
