//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCDataHandlerCache <NSObject>
- (void)fetchDataWithCompletion:(void (^)(id, NSString *, NSError *))arg1;
- (void)storeData:(id)arg1 metadata:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end
