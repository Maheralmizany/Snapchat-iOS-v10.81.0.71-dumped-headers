//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, SCRecipientListsCreateListsDataRequest, SCRecipientListsDeleteListsDataRequest, SCRecipientListsFetchAllListsDataRequest, SCRecipientListsUpdateListsDataRequest;
@protocol OS_dispatch_queue;

@protocol SCRecipientListsNetworkServiceCoordinating
- (void)processDeleteListsDataRequest:(SCRecipientListsDeleteListsDataRequest *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(int, NSError *))arg4;
- (void)processUpdateListsDataRequest:(SCRecipientListsUpdateListsDataRequest *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(int, NSError *))arg4;
- (void)processCreateListsDataRequest:(SCRecipientListsCreateListsDataRequest *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 successBlock:(void (^)(NSArray *, _Bool))arg3 failureBlock:(void (^)(int, NSError *))arg4;
- (void)processFetchAllListsDataRequest:(SCRecipientListsFetchAllListsDataRequest *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 successBlock:(void (^)(NSArray *, _Bool))arg3 failureBlock:(void (^)(int, NSError *))arg4;
@end

