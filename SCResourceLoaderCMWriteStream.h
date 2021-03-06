//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerWriteStream-Protocol.h"

@class AVAssetResourceLoadingRequest, NSData, NSString, SCNContentManagerCancelableId;
@protocol SCPerforming;

@interface SCResourceLoaderCMWriteStream : NSObject <SCNContentManagerWriteStream>
{
    AVAssetResourceLoadingRequest *_loadingRequest;
    NSData *_firstChunk;
    NSString *_mediaId;
    unsigned long long _contentLength;
    CDUnknownBlockType _completion;
    id <SCPerforming> _queue;
    _Bool _initialized;
    unsigned long long _bytesReceived;
    int _state;
    SCNContentManagerCancelableId *_cancelableId;
    long long _requestedLength;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)_finishRequestAndCallback;
- (_Bool)_isWriteStreamInProgress;
- (void)_updateBytesReceievedWithLength:(unsigned long long)arg1;
- (void)_handleBytes:(long long)arg1 dataBytes:(id)arg2;
- (void)_handleError:(long long)arg1 message:(id)arg2;
- (void)_putBytesHelper:(long long)arg1 dataBytes:(id)arg2;
- (void)cancelForContentResult:(id)arg1 playerCanceled:(_Bool)arg2;
- (void)free;
- (void)setError:(long long)arg1 message:(id)arg2;
- (void)putBytes:(long long)arg1 dataBytes:(id)arg2;
- (void)initStreamForContentResult:(id)arg1;
- (id)initWithLoadingRequest:(id)arg1 firstChunk:(id)arg2 mediaId:(id)arg3 contentLength:(unsigned long long)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end

