//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerTaskCompletionCallback-Protocol.h"

@interface SCNContentManagerTaskCompletionCallback : NSObject <SCNContentManagerTaskCompletionCallback>
{
    CDUnknownBlockType _callback;
    CDUnknownBlockType _successFailureCallback;
}

- (void).cxx_destruct;
- (void)done:(_Bool)arg1;
- (id)initWithSuccessFailureCallback:(CDUnknownBlockType)arg1;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end
