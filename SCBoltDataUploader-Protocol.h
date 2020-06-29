//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;
@protocol SCPerforming;

@protocol SCBoltDataUploader <NSObject>
- (void)uploadData:(NSData *)arg1 uniqueMediaId:(NSString *)arg2 callbackPerformer:(id <SCPerforming>)arg3 successBlock:(void (^)(NSData *, NSURL *))arg4 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg5;
- (void)prefetchIfNeeded;
@end
