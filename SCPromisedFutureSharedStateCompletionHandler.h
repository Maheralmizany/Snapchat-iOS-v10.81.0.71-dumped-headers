//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SCPerforming;

@interface SCPromisedFutureSharedStateCompletionHandler : NSObject
{
    id <SCPerforming> _performer;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_lock;
}

- (void).cxx_destruct;
- (void)completeWithValue:(id)arg1 error:(id)arg2;
- (id)initWithPerformer:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
