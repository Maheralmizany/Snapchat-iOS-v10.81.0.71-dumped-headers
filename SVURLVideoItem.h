//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SVVideoItem-Protocol.h"

@class AVAsset, AVVideoComposition, NSString, NSURL;

@interface SVURLVideoItem : NSObject <SVVideoItem>
{
    unsigned long long svDebugIndex;
    NSURL *_svURL;
    AVAsset *_svAsset;
    AVVideoComposition *svVideoComposition;
    AVAsset *_asset;
    CDStruct_1b6d18a9 svLastPlaybackTime;
}

@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) CDStruct_1b6d18a9 svLastPlaybackTime; // @synthesize svLastPlaybackTime;
@property(nonatomic) __weak AVVideoComposition *svVideoComposition; // @synthesize svVideoComposition;
@property(nonatomic) __weak AVAsset *svAsset; // @synthesize svAsset=_svAsset;
@property(readonly, nonatomic) NSURL *svURL; // @synthesize svURL=_svURL;
@property(nonatomic) unsigned long long svDebugIndex; // @synthesize svDebugIndex;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
