//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerTaskCompletionCallback-Protocol.h"

@interface SCNContentManagerTaskCompletionCallbackCppProxy : NSObject <SCNContentManagerTaskCompletionCallback>
{
    struct Handle<std::__1::shared_ptr<snap::content_manager::TaskCompletionCallback>, std::__1::shared_ptr<snap::content_manager::TaskCompletionCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)done:(_Bool)arg1;
- (id)initWithCpp:(const shared_ptr_ed83fba8 *)arg1;

@end

