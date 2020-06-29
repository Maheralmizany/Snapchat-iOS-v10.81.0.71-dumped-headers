//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaInterstitialLayer-Protocol.h"

@class NSString, SCOperaPage, SCStoryThumbnailViewModel;
@protocol SCImageDownloading, SCOperaInterstitialLayerThumbnailViewProvider;

@interface SCOperaOptOutInterstitialLayer : NSObject <SCOperaInterstitialLayer>
{
    SCOperaPage *_page;
    id <SCOperaInterstitialLayerThumbnailViewProvider> _thumbnailViewProvider;
    NSString *_thumbnailViewProviderIdentifier;
    NSString *_title;
    unsigned long long _titleNumberOfLines;
    NSString *_primarySubtitle;
    NSString *_primarySubtitleSuffix;
    NSString *_secondarySubtitle;
    double _pieSliceRatio;
    SCStoryThumbnailViewModel *_storyThumbnailViewModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) SCStoryThumbnailViewModel *storyThumbnailViewModel; // @synthesize storyThumbnailViewModel=_storyThumbnailViewModel;
@property(readonly, nonatomic) double pieSliceRatio; // @synthesize pieSliceRatio=_pieSliceRatio;
@property(readonly, copy, nonatomic) NSString *secondarySubtitle; // @synthesize secondarySubtitle=_secondarySubtitle;
@property(readonly, copy, nonatomic) NSString *primarySubtitleSuffix; // @synthesize primarySubtitleSuffix=_primarySubtitleSuffix;
@property(readonly, copy, nonatomic) NSString *primarySubtitle; // @synthesize primarySubtitle=_primarySubtitle;
@property(readonly, nonatomic) unsigned long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *thumbnailViewProviderIdentifier; // @synthesize thumbnailViewProviderIdentifier=_thumbnailViewProviderIdentifier;
@property(readonly, nonatomic) id <SCOperaInterstitialLayerThumbnailViewProvider> thumbnailViewProvider; // @synthesize thumbnailViewProvider=_thumbnailViewProvider;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
