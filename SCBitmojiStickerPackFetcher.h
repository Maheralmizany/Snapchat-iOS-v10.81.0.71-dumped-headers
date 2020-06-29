//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiStickerPackFetcher-Protocol.h"

@class NSString, SCBitmojiStickerPackKeyedArchiverSerializer, SCBitmojiStickerPackMetadataLoader, SCBitmojiStickerPackProvider, SCExperimentManager;
@protocol SCGraphene, SCPerforming, SCRequestManager;

@interface SCBitmojiStickerPackFetcher : NSObject <SCBitmojiStickerPackFetcher>
{
    id <SCPerforming> _performer;
    id <SCRequestManager> _requestManager;
    id <SCGraphene> _graphene;
    SCBitmojiStickerPackProvider *_packProvider;
    SCBitmojiStickerPackKeyedArchiverSerializer *_serializer;
    SCBitmojiStickerPackMetadataLoader *_metadataLoader;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)_fetchLegacyStickerPackMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchDeltaForceStickerPackMetadata:(id)arg1 existingMegaPackMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isMegaPackHometabPack:(id)arg1;
- (_Bool)_supportDeltaForceForStickerPack:(id)arg1 andStickerPackType:(unsigned long long)arg2;
- (void)_fetchStickerPackMetadataForMegaPack:(id)arg1 stickerPackType:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_fetchStickerPackMetadataForAllMegaPacks:(id)arg1 stickerPackType:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateStickerPacks:(id)arg1 stickerPackType:(unsigned long long)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithPackProvider:(id)arg1 serializer:(id)arg2 packMetadataLoader:(id)arg3 requestManager:(id)arg4 graphene:(id)arg5 experimentManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

