//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, SCGallerySnapsTabDataSource, SCMemoriesFeaturedStoriesSectionViewModel;

@protocol SCGallerySnapsTabDataSourceDelegate
- (void)gallerySnapsTabDataSource:(SCGallerySnapsTabDataSource *)arg1 didUpdateMomentViewModels:(NSArray *)arg2;
- (void)gallerySnapsTabDataSource:(SCGallerySnapsTabDataSource *)arg1 didUpdateFeaturedStoriesViewModel:(SCMemoriesFeaturedStoriesSectionViewModel *)arg2;
- (void)gallerySnapsTabDataSource:(SCGallerySnapsTabDataSource *)arg1 didUpdateLoadingStatus:(_Bool)arg2;

@optional
- (void)gallerySnapsTabDataSourceDidCompleteClusterSnaps:(SCGallerySnapsTabDataSource *)arg1;
@end
