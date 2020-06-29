//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCBitmojiSelfieFetcher, SCImageDownloading;

@interface SCProfilePictureRenderStyle : NSObject
{
    _Bool _showBitmoji;
    _Bool _showNetworkThumbnail;
    long long _thumbnailStyle;
    long long _emptyStateStyle;
    id <SCBitmojiSelfieFetcher> _bitmojiSelfieFetcher;
    NSString *_thumbnailUrl;
    id <SCImageDownloading> _imageDownloader;
}

+ (id)networkThumbnailWithThumbnailStyle:(long long)arg1 thumbnailUrl:(id)arg2 imageDownloader:(id)arg3;
+ (id)standardWithThumbnailStyle:(long long)arg1 emptyStateStyle:(long long)arg2 bitmojiSelfieFetcher:(id)arg3;
+ (id)standardWithThumbnailStyle:(long long)arg1 bitmojiSelfieFetcher:(id)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(nonatomic) _Bool showNetworkThumbnail; // @synthesize showNetworkThumbnail=_showNetworkThumbnail;
@property(retain, nonatomic) id <SCBitmojiSelfieFetcher> bitmojiSelfieFetcher; // @synthesize bitmojiSelfieFetcher=_bitmojiSelfieFetcher;
@property(nonatomic) _Bool showBitmoji; // @synthesize showBitmoji=_showBitmoji;
@property(nonatomic) long long emptyStateStyle; // @synthesize emptyStateStyle=_emptyStateStyle;
@property(nonatomic) long long thumbnailStyle; // @synthesize thumbnailStyle=_thumbnailStyle;
- (void).cxx_destruct;

@end

