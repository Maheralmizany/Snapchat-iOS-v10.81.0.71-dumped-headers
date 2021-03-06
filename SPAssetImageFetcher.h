//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPImageFetcher-Protocol.h"

@class NSString, PHAsset, SPAssetImageSource, UIImage;
@protocol SPStringsProvider;

@interface SPAssetImageFetcher : NSObject <SPImageFetcher>
{
    _Bool _validateFFImage;
    NSString *_identifier;
    UIImage *_thumbnailImage;
    unsigned long long _type;
    id <SPStringsProvider> _stringsProvider;
    SPAssetImageSource *_imageSource;
    PHAsset *_phAsset;
}

@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(nonatomic) _Bool validateFFImage; // @synthesize validateFFImage=_validateFFImage;
@property(readonly, nonatomic) SPAssetImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)fetchSPImage:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1 thumbnailImage:(id)arg2 source:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

