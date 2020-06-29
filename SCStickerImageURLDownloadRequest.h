//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStickerImageLoadRequest.h"

@class NSString;
@protocol SCCanceling;

@interface SCStickerImageURLDownloadRequest : SCStickerImageLoadRequest
{
    NSString *_stickerId;
    CDUnknownBlockType _completion;
    id <SCCanceling> _cancelable;
}

@property(retain, nonatomic) id <SCCanceling> cancelable; // @synthesize cancelable=_cancelable;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
- (void).cxx_destruct;
- (void)cancel;
- (void)begin;
- (id)initWithStickerId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

