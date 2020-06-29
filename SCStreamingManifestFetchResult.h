//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SCStreamingManifestFetchResult : NSObject <NSCopying>
{
    NSData *_mainManifestData;
    NSData *_videoMediaManifestData;
    NSData *_audioMediaManifestData;
    NSData *_iframeMediaManifestData;
}

@property(readonly, copy, nonatomic) NSData *iframeMediaManifestData; // @synthesize iframeMediaManifestData=_iframeMediaManifestData;
@property(readonly, copy, nonatomic) NSData *audioMediaManifestData; // @synthesize audioMediaManifestData=_audioMediaManifestData;
@property(readonly, copy, nonatomic) NSData *videoMediaManifestData; // @synthesize videoMediaManifestData=_videoMediaManifestData;
@property(readonly, copy, nonatomic) NSData *mainManifestData; // @synthesize mainManifestData=_mainManifestData;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMainManifestData:(id)arg1 videoMediaManifestData:(id)arg2 audioMediaManifestData:(id)arg3 iframeMediaManifestData:(id)arg4;

@end

