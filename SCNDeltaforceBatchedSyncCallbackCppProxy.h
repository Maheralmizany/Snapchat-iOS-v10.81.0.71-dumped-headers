//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNDeltaforceBatchedSyncCallback-Protocol.h"

@interface SCNDeltaforceBatchedSyncCallbackCppProxy : NSObject <SCNDeltaforceBatchedSyncCallback>
{
    struct Handle<std::__1::shared_ptr<snap::deltaforce::BatchedSyncCallback>, std::__1::shared_ptr<snap::deltaforce::BatchedSyncCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
- (id)initWithCpp:(const shared_ptr_73fe1eee *)arg1;

@end

