//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNComposerAsset : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::composer::Asset>, std::__1::shared_ptr<snap::composer::Asset>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelResolve:(int)arg1;
- (int)resolve:(id)arg1;
- (_Bool)needResolve;
- (id)getLocalResource;
- (_Bool)isLocalResource;
- (double)measureHeight:(double)arg1 maxHeight:(double)arg2;
- (double)measureWidth:(double)arg1 maxHeight:(double)arg2;
- (id)getURL;
- (_Bool)isURL;
- (id)initWithCpp:(const shared_ptr_dde3d6d5 *)arg1;

@end

