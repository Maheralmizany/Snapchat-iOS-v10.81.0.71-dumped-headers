//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsPreviewsDataSource-Protocol.h"

@class NSNumber, NSString, SCBloopsSearchCachePriority, SCBloopsSessionToken;

@interface SCBloopsPreviewsSearchDataSource : NSObject <SCBloopsPreviewsDataSource>
{
    unsigned long long _type;
    unsigned long long _pickerDataSourceType;
    SCBloopsSessionToken *_sessionToken;
    SCBloopsSearchCachePriority *_searchCachePriority;
    NSNumber *_itemsLimit;
    unsigned long long _bloopsModelType;
    unsigned long long _scrollDirection;
    unsigned long long _itemsInRow;
    unsigned long long _preferredRows;
    NSString *_searchQuery;
}

@property(readonly, copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly, nonatomic) unsigned long long preferredRows; // @synthesize preferredRows=_preferredRows;
@property(readonly, nonatomic) unsigned long long itemsInRow; // @synthesize itemsInRow=_itemsInRow;
@property(readonly, nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) unsigned long long bloopsModelType; // @synthesize bloopsModelType=_bloopsModelType;
@property(readonly, nonatomic) NSNumber *itemsLimit; // @synthesize itemsLimit=_itemsLimit;
@property(readonly, nonatomic) SCBloopsSearchCachePriority *searchCachePriority; // @synthesize searchCachePriority=_searchCachePriority;
@property(readonly, nonatomic) SCBloopsSessionToken *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(readonly, nonatomic) unsigned long long pickerDataSourceType; // @synthesize pickerDataSourceType=_pickerDataSourceType;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithSearchQuery:(id)arg1 sessionToken:(id)arg2 searchCachePriority:(id)arg3 itemsLimit:(id)arg4 bloopsModelType:(unsigned long long)arg5 scrollDirection:(unsigned long long)arg6 itemsInRow:(unsigned long long)arg7 preferredRows:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

