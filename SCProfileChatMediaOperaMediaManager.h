//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaGifProvider-Protocol.h"
#import "SCOperaMediaManager-Protocol.h"

@class NSString;
@protocol SCLegacyItemDownloading, SCProfileChatMediaOperaGroupIdToGroupDataModelIndexable;

@interface SCProfileChatMediaOperaMediaManager : NSObject <SCOperaMediaManager, SCOperaGifProvider>
{
    id <SCLegacyItemDownloading> _mediaDownloader;
    id <SCProfileChatMediaOperaGroupIdToGroupDataModelIndexable> _profileChatMediaOperaDataSource;
}

- (void).cxx_destruct;
- (void)gifForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetVideoAssetForKey:(id)arg1;
- (id)videoAssetForKey:(id)arg1;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMediaDownloader:(id)arg1 profileChatMediaOperaDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

