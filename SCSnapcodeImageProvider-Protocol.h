//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSObject, SCSnapcodeUserInfo;
@protocol OS_dispatch_queue;

@protocol SCSnapcodeImageProvider
- (void)snapcodeImageForSnapcodeUserInfo:(SCSnapcodeUserInfo *)arg1 contexts:(NSArray *)arg2 width:(double)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(UIImage *))arg5;
@end

