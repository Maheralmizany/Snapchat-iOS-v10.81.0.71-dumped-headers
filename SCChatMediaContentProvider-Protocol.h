//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, SOJUSnapMetadata;

@protocol SCChatMediaContentProvider <NSObject>
- (SOJUSnapMetadata *)snapMetadata;
- (NSData *)miniThumbnailData;
- (NSString *)creatorAttribution;
- (_Bool)isInfiniteDuration;
- (NSString *)venueId;
- (NSString *)snapAttachmentUrl;
- (NSString *)chatIV;
- (NSString *)chatKey;
- (NSString *)chatMediaID;
- (double)duration;
- (_Bool)isZipped;
- (double)height;
- (double)width;
- (long long)mediaContentType;
- (_Bool)needsToBeUploaded;
- (void)prepareDataToUploadForMediaId:(NSString *)arg1 completionHandler:(void (^)(NSData *))arg2;
@end

