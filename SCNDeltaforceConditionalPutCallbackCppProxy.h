//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNDeltaforceConditionalPutCallback-Protocol.h"

@interface SCNDeltaforceConditionalPutCallbackCppProxy : NSObject <SCNDeltaforceConditionalPutCallback>
{
    struct Handle<std::__1::shared_ptr<snap::deltaforce::ConditionalPutCallback>, std::__1::shared_ptr<snap::deltaforce::ConditionalPutCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
- (id)initWithCpp:(const shared_ptr_46e015e9 *)arg1;

@end

