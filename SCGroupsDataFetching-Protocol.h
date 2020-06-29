//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, SCChatGroup;

@protocol SCGroupsDataFetching
- (id <SCChatGroup>)getGroupWithId:(NSString *)arg1;
- (NSArray *)getNewGroups;
- (NSArray *)getRecentGroups;
- (NSDictionary *)getAllGroupsDict;
- (NSArray *)getAllGroups;
- (void)getAllGroupsWithCompletion:(void (^)(NSDictionary *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)getGroupByParticipants:(NSArray *)arg1 completion:(void (^)(id <SCChatGroup>))arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)getGroupById:(NSString *)arg1 completion:(void (^)(id <SCChatGroup>))arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end

