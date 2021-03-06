//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSABaseComponent.h"

@interface LSATrackingSerializationComponent : LSABaseComponent
{
    struct shared_ptr<LS::TrackingSerializer> _trackingSerializer;
    struct shared_ptr<LS::TrackingDataPlayer> _trackingDataPlayer;
    struct shared_ptr<LS::NftTrackingDataEmulator> _nftTrackingDataEmulator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (id)initWithPerformer:(id)arg1;
- (void)_addTrackingDataProvider:(weak_ptr_b256677b)arg1;
- (void)clearRecordedMarkerTrackingData;
- (void)setRecordedMarkerTrackingDataWithPath:(id)arg1;
- (void)clearRecordedTrackingData;
- (void)setRecordedTrackingDataWithPath:(id)arg1;
- (void)resetAndWriteTrackingData:(id)arg1;
- (void)setShouldSerializeTrackingData:(_Bool)arg1;

@end

