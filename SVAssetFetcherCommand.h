//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SVVideoItem;

@interface SVAssetFetcherCommand : NSObject
{
    id <SVVideoItem> _videoItem;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) id <SVVideoItem> videoItem; // @synthesize videoItem=_videoItem;
- (void).cxx_destruct;
- (id)initWithVideoItem:(id)arg1 assetFetcher:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

