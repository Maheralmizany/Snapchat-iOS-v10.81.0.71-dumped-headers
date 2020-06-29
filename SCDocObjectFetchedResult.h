//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSArray;

@interface SCDocObjectFetchedResult : NSObject <NSFastEnumeration>
{
    vector_30c1d833 _array;
    Class _objectClass;
    struct Error _error;
    unsigned long long _changesTimestamp;
    unsigned long long _fetchedResultId;
    shared_ptr_163b3c25 _expressionPtr;
    struct OrderBy _orderBy;
    struct Limit _limit;
}

+ (id)fetchedResultWithArray:(const vector_30c1d833 *)arg1 objectClass:(Class)arg2 error:(const struct Error *)arg3 changesTimestamp:(unsigned long long)arg4 expressionPtr:(const shared_ptr_163b3c25 *)arg5 orderBy:(const struct OrderBy *)arg6 limit:(const struct Limit *)arg7;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) NSArray *asArray;
@property(readonly, nonatomic) id lastObject;
@property(readonly, nonatomic) id firstObject;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)error;
- (const struct Limit *)limit;
- (const struct OrderBy *)orderBy;
- (const shared_ptr_163b3c25 *)expressionPtr;
- (unsigned long long)fetchedResultId;
- (unsigned long long)changesTimestamp;
- (Class)objectClass;
- (const vector_30c1d833 *)array;
- (id)initWithArray:(const vector_30c1d833 *)arg1 objectClass:(Class)arg2 error:(const struct Error *)arg3 changesTimestamp:(unsigned long long)arg4 fetchedResultId:(unsigned long long)arg5 expressionPtr:(const shared_ptr_163b3c25 *)arg6 orderBy:(const struct OrderBy *)arg7 limit:(const struct Limit *)arg8;
- (id)observableForDocObjectContext:(id)arg1 observationQueue:(id)arg2;

@end

