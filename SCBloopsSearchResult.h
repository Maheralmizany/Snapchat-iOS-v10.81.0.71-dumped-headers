//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCBloopsSearchIconQuery;
@protocol SCBloopsTopic;

@interface SCBloopsSearchResult : NSObject <NSCopying>
{
    SCBloopsSearchIconQuery *_searchIconQuery;
    id <SCBloopsTopic> _topicResult;
    NSString *_searchTextResult;
    NSArray *_queryFeatures;
    NSArray *_bestDefaultTextFeatures;
    NSArray *_bestCustomizedTextFeatures;
}

@property(readonly, copy, nonatomic) NSArray *bestCustomizedTextFeatures; // @synthesize bestCustomizedTextFeatures=_bestCustomizedTextFeatures;
@property(readonly, copy, nonatomic) NSArray *bestDefaultTextFeatures; // @synthesize bestDefaultTextFeatures=_bestDefaultTextFeatures;
@property(readonly, copy, nonatomic) NSArray *queryFeatures; // @synthesize queryFeatures=_queryFeatures;
@property(readonly, copy, nonatomic) NSString *searchTextResult; // @synthesize searchTextResult=_searchTextResult;
@property(readonly, nonatomic) id <SCBloopsTopic> topicResult; // @synthesize topicResult=_topicResult;
@property(readonly, copy, nonatomic) SCBloopsSearchIconQuery *searchIconQuery; // @synthesize searchIconQuery=_searchIconQuery;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSearchIconQuery:(id)arg1 topicResult:(id)arg2 searchTextResult:(id)arg3 queryFeatures:(id)arg4 bestDefaultTextFeatures:(id)arg5 bestCustomizedTextFeatures:(id)arg6;

@end

