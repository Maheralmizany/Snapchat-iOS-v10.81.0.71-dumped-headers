//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyItemDownloaderHandling-Protocol.h"

@class NSString;
@protocol NSCopying, OS_dispatch_queue, SCCanceling, SCLegacyItemDownloaderHandlerDelegate;

@interface SCLegacyItemDownloaderHandler : NSObject <SCLegacyItemDownloaderHandling>
{
    _Bool _cancelled;
    id <SCLegacyItemDownloaderHandlerDelegate> _delegate;
    id <SCCanceling> _cancelableItem;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _failure;
    NSObject<NSCopying> *_item;
    NSString *_requestKey;
}

@property(copy, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(readonly, nonatomic) NSObject<NSCopying> *item; // @synthesize item=_item;
@property(readonly, copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) id <SCCanceling> cancelableItem; // @synthesize cancelableItem=_cancelableItem;
@property(nonatomic) __weak id <SCLegacyItemDownloaderHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dispose;
- (void)cancel;
- (id)initWithCancelableItem:(id)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 item:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

