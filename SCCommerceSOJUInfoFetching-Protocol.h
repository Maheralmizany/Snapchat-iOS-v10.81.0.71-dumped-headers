//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol SCCommerceSOJUInfoFetching
- (void)getProductsWithStoreInfo:(NSString *)arg1 categoryId:(NSString *)arg2 completionBlock:(void (^)(SOJUCommerceProductInfoList *, NSError *))arg3;
- (void)getProductsWithStoreInfo:(NSString *)arg1 categoryId:(NSString *)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 query:(NSString *)arg5 completionBlock:(void (^)(SOJUCommerceProductInfoList *, NSError *))arg6;
- (void)getStoreSOJU:(NSString *)arg1 completionBlock:(void (^)(SOJUCommerceStoreInfo *, NSError *))arg2;
- (void)getProductSOJU:(NSString *)arg1 completionBlock:(void (^)(SOJUCommerceProductInfo *, NSError *))arg2;
@end

