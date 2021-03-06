//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeedHeaderPromptViewModelProviding-Protocol.h"

@class SCLazy;
@protocol SCPerforming;

@interface SCFeedHeaderPromptViewModelProvider : NSObject <SCFeedHeaderPromptViewModelProviding>
{
    SCLazy *_lazyPromptDataCoordinator;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_createPromptViewModelFromPromptSetting:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_fetchAvailablePromptViewModelWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchAvailablePromptViewModelWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithLazyPromptDataCoordinator:(id)arg1;

@end

