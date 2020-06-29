//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSRecursiveLock;

@interface SCAsyncBlockOperation : NSOperation
{
    CDUnknownBlockType _excutionBlock;
    _Bool _isCancelled;
    _Bool _isExecuting;
    _Bool _isFinished;
    NSRecursiveLock *_operationLock;
}

+ (id)asyncOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isCancelled;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)start;
- (void)main;
- (void)finish;
- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

