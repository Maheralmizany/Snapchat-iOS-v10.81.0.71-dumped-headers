//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCGalleryEntry, SCGalleryEntryThumbnailGenerating;

@protocol SCGalleryEntryThumbnailGeneratorProviding <NSObject>
- (id <SCGalleryEntryThumbnailGenerating>)thumbnailGeneratorWithGalleryEntry:(id <SCGalleryEntry>)arg1 targetSize:(struct CGSize)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 generationContext:(unsigned long long)arg4;

@optional
- (id <SCGalleryEntryThumbnailGenerating>)storyCellThumbnailGenerator:(id <SCGalleryEntry>)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2 generationContext:(unsigned long long)arg3;
@end

