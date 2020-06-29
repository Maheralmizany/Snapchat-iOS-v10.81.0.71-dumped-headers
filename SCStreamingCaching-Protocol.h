//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCStreamingCaching <NSObject>
- (void)removeAllObjects;
- (void)setObject:(id)arg1 dataEncoding:(NSData * (^)(id))arg2 forKey:(NSString *)arg3 expiration:(NSDate *)arg4 block:(void (^)(NSString *, id))arg5;
- (void)objectForKey:(NSString *)arg1 dataDecoding:(id (^)(NSData *))arg2 block:(void (^)(NSString *, id))arg3;
@end
