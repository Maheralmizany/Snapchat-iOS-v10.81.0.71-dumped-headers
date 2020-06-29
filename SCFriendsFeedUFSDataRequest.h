//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCFriendsFeedFetchContext, SOJUFeedResponseInfo;

@interface SCFriendsFeedUFSDataRequest : NSObject <NSCopying>
{
    SOJUFeedResponseInfo *_feedResponse;
    NSArray *_mischiefResponse;
    NSArray *_conversationsResponse;
    long long _fetchType;
    SCFriendsFeedFetchContext *_fetchContext;
}

@property(readonly, copy, nonatomic) SCFriendsFeedFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
@property(readonly, nonatomic) long long fetchType; // @synthesize fetchType=_fetchType;
@property(readonly, copy, nonatomic) NSArray *conversationsResponse; // @synthesize conversationsResponse=_conversationsResponse;
@property(readonly, copy, nonatomic) NSArray *mischiefResponse; // @synthesize mischiefResponse=_mischiefResponse;
@property(readonly, copy, nonatomic) SOJUFeedResponseInfo *feedResponse; // @synthesize feedResponse=_feedResponse;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedResponse:(id)arg1 mischiefResponse:(id)arg2 conversationsResponse:(id)arg3 fetchType:(long long)arg4 fetchContext:(id)arg5;

@end

