//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol SCCommerceStoreInfoFetching
- (void)getStoreData:(NSString *)arg1 completionBlock:(void (^)(SCCommerceStoreDataModel *, NSError *))arg2;
- (void)getProductSet:(NSString *)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 query:(NSString *)arg4 completionBlock:(void (^)(SCCommerceProductSet *, NSError *))arg5;
- (void)getProductInfo:(NSString *)arg1 completionBlock:(void (^)(SCCommerceProductInfo *, NSError *))arg2;
@end

