//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString, SCSnapchatter;
@protocol OS_dispatch_queue;

@protocol SCRelevantSnapchatterSuggestionFetcher
- (void)removeSuggestedSnapchatter:(SCSnapchatter *)arg1;
- (void)snapchattersForUserId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end

