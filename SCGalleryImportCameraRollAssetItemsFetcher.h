//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCGalleryPhotoLibraryFetcher, SCSentinel, SCUserSession;

@interface SCGalleryImportCameraRollAssetItemsFetcher : NSObject <SCUserSessionScoped>
{
    SCUserSession *_userSession;
    SCGalleryPhotoLibraryFetcher *_photoLibraryFetcher;
    SCSentinel *_invalidateSentinel;
    _Bool _fetching;
}

@property(readonly, nonatomic) _Bool fetching; // @synthesize fetching=_fetching;
- (void).cxx_destruct;
- (_Bool)_isInvalidated;
- (void)_completeFetchWithAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)fetchAssetItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

