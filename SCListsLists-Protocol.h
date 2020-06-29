//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRPCProtoCall, SCListsListsCreateRequest, SCListsListsDeleteRequest, SCListsListsFetchRequest, SCListsListsUpdateRequest;

@protocol SCListsLists <NSObject>
- (GRPCProtoCall *)RPCToDeleteListsWithRequest:(SCListsListsDeleteRequest *)arg1 handler:(void (^)(SCListsListsDeleteResponse *, NSError *))arg2;
- (void)deleteListsWithRequest:(SCListsListsDeleteRequest *)arg1 handler:(void (^)(SCListsListsDeleteResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToUpdateListsWithRequest:(SCListsListsUpdateRequest *)arg1 handler:(void (^)(SCListsListsUpdateResponse *, NSError *))arg2;
- (void)updateListsWithRequest:(SCListsListsUpdateRequest *)arg1 handler:(void (^)(SCListsListsUpdateResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToFetchListsWithRequest:(SCListsListsFetchRequest *)arg1 handler:(void (^)(SCListsListsFetchResponse *, NSError *))arg2;
- (void)fetchListsWithRequest:(SCListsListsFetchRequest *)arg1 handler:(void (^)(SCListsListsFetchResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToCreateListsWithRequest:(SCListsListsCreateRequest *)arg1 handler:(void (^)(SCListsListsCreateResponse *, NSError *))arg2;
- (void)createListsWithRequest:(SCListsListsCreateRequest *)arg1 handler:(void (^)(SCListsListsCreateResponse *, NSError *))arg2;
@end

