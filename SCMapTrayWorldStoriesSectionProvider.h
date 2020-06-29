//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapTrayHighlightableBaseSectionProvider.h"

#import "SCMapCarouselPoiPlayer-Protocol.h"

@class NSString, SCMapTrayWorldStoriesDataLoader, SCXRenderLayer, UIView;
@protocol SCImageDownloading, SCMapTraySectionProviderDelegate, SCMapTrayStorySectionProviderDelegate><SCMapTrayCameraControllingSectionProviderDelegate;

@interface SCMapTrayWorldStoriesSectionProvider : SCMapTrayHighlightableBaseSectionProvider <SCMapCarouselPoiPlayer>
{
    SCMapTrayWorldStoriesDataLoader *_storiesLoader;
    id <SCImageDownloading> _imageDownloader;
    SCXRenderLayer *_mapRenderLayer;
    UIView *_mapView;
    _Bool _renderLayerWasIgnoringSpriteCollisions;
    id <SCMapTraySectionProviderDelegate> delegate;
    id <SCMapTrayStorySectionProviderDelegate><SCMapTrayCameraControllingSectionProviderDelegate> _trayWorldStoriesDelegate;
}

@property(nonatomic) __weak id <SCMapTrayStorySectionProviderDelegate><SCMapTrayCameraControllingSectionProviderDelegate> trayWorldStoriesDelegate; // @synthesize trayWorldStoriesDelegate=_trayWorldStoriesDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)mapStoryIconView:(id)arg1 didAskToPlayMapStorywithPoiId:(id)arg2;
- (id)highlightIdentifierForRow:(unsigned long long)arg1;
- (id)headerText;
- (double)heightForCellAtRow:(unsigned long long)arg1 type:(unsigned long long)arg2 width:(double)arg3;
- (void)configureCell:(id)arg1 type:(unsigned long long)arg2 atRow:(unsigned long long)arg3;
- (Class)cellClassForType:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (id)dataHandler;
- (id)cameraForRow:(unsigned long long)arg1;
- (void)handleHighlightLost;
- (void)handleHighlightedRow:(unsigned long long)arg1;
- (void)_informDelegateToHighlightAtRow:(unsigned long long)arg1;
- (id)initWithStoriesLoader:(id)arg1 imageDownloader:(id)arg2 mapViewport:(id)arg3 mapView:(id)arg4 mapRenderLayer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

