//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCGalleryPhotoLibraryFetcher, SCMediaDrawerDataSourceListenerAnnouncer;
@protocol SCPerforming;

@interface SCMediaDrawerDataSource : NSObject
{
    id <SCPerforming> _performer;
    NSArray *_mediaList;
    SCMediaDrawerDataSourceListenerAnnouncer *_announcer;
    SCGalleryPhotoLibraryFetcher *_photoLibraryFetcher;
    _Bool _didFinishFetching;
}

@property(readonly, nonatomic) _Bool didFinishFetching; // @synthesize didFinishFetching=_didFinishFetching;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeMedia:(id)arg1;
- (id)_mediasFromPHAssets:(id)arg1;
- (void)_resetMediaListFromPHAssets:(id)arg1;
- (id)mediaList;
- (void)fetchMediaIfNeeded;
- (id)init;

@end

