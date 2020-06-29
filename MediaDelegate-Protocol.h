//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Media, NSError, NSHTTPURLResponse, SCRequest;

@protocol MediaDelegate <NSObject>
- (_Bool)isSpectaclesImage;
- (_Bool)isImage;
- (_Bool)isVideoStreaming;
- (_Bool)isSpectaclesVideo;
- (_Bool)isVideoWithSound;
- (_Bool)isVideo;

@optional
- (void)didStartDownload:(Media *)arg1;
- (void)fetchMediaResponseHandlerCustom:(Media *)arg1 request:(SCRequest *)arg2 response:(NSHTTPURLResponse *)arg3 error:(NSError *)arg4;
- (void)fetchMediaDidSucceedForMedia:(Media *)arg1 isFromCache:(_Bool)arg2;
- (void)fetchMediaDidSucceedForMedia:(Media *)arg1;
- (void)fetchMediaBadRequestForMedia:(Media *)arg1;
- (void)fetchMediaNotFoundForMedia:(Media *)arg1;
- (void)fetchMediaIsGoneForMedia:(Media *)arg1;
- (void)fetchMediaDidFailForMedia:(Media *)arg1 error:(NSError *)arg2;
- (void)fetchMediaIsLoadingForMedia:(Media *)arg1;
- (void)fetchMediaIsLoadingForMedia:(Media *)arg1 userInitiated:(_Bool)arg2;
@end

