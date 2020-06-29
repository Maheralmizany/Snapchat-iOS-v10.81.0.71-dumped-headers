//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesTask.h"

@class NSArray, NSString;
@protocol SCSpectaclesContentMetadata;

@interface SCSpectaclesTaskMetadata : SCSpectaclesTask
{
    NSString *_contentName;
    id <SCSpectaclesContentMetadata> _metadata;
    NSArray *_mediaList;
}

@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(retain, nonatomic) id <SCSpectaclesContentMetadata> metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *contentName; // @synthesize contentName=_contentName;
- (void).cxx_destruct;
- (id)_mediaInfoForFileType:(unsigned long long)arg1;
- (id)pictureFile;
- (id)imuFile;
- (id)hdVideoFile;
- (id)sdVideoFile;
- (id)thumbnailFile;
- (id)metadataFile;
- (_Bool)supportsBatchingOnTransferChannel:(long long)arg1;
- (_Bool)handleResponse:(id)arg1;
- (id)nextRequest:(long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isFinished;
- (unsigned long long)type;
- (id)initWithContentName:(id)arg1 mediaList:(id)arg2;

@end

