//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSnapchattersFetchDataRequestFetchContacts : NSObject <NSCopying>
{
    _Bool _hasGrantedContactAccess;
    _Bool _shouldRecommend;
    _Bool _isAllUpdate;
    _Bool _isDelta;
    long long _source;
}

@property(readonly, nonatomic) _Bool isDelta; // @synthesize isDelta=_isDelta;
@property(readonly, nonatomic) _Bool isAllUpdate; // @synthesize isAllUpdate=_isAllUpdate;
@property(readonly, nonatomic) _Bool shouldRecommend; // @synthesize shouldRecommend=_shouldRecommend;
@property(readonly, nonatomic) _Bool hasGrantedContactAccess; // @synthesize hasGrantedContactAccess=_hasGrantedContactAccess;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSource:(long long)arg1 hasGrantedContactAccess:(_Bool)arg2 shouldRecommend:(_Bool)arg3 isAllUpdate:(_Bool)arg4 isDelta:(_Bool)arg5;

@end

