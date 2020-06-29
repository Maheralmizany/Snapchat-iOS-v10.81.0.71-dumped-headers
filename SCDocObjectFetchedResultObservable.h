//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCObservable.h"

@class NSObject, SCDocObjectContext, SCDocObjectFetchedResult, SCMulticastObserver;
@protocol OS_dispatch_queue, SCDocObjectObservationToken;

@interface SCDocObjectFetchedResultObservable : SCObservable
{
    NSObject<OS_dispatch_queue> *_queue;
    id <SCDocObjectObservationToken> _docObjectObesrveToken;
    SCMulticastObserver *_observers;
    SCDocObjectContext *_docObjectContext;
    struct unique_ptr<SCObservableQuery, std::__1::default_delete<SCObservableQuery>> _observableQuery;
    SCDocObjectFetchedResult *_mostRecentFetchedResult;
}

+ (id)observableForQuery:(unique_ptr_8233b5dc)arg1 klass:(Class)arg2 orderBy:(const struct OrderBy *)arg3 limit:(const struct Limit *)arg4 docObjectContext:(id)arg5 queue:(id)arg6;
+ (id)observableForFetchedResult:(id)arg1 docObjectContext:(id)arg2 queue:(id)arg3;
@property(retain) SCDocObjectFetchedResult *mostRecentFetchedResult; // @synthesize mostRecentFetchedResult=_mostRecentFetchedResult;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setupObservationWithFetchedResult:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithQuery:(unique_ptr_8233b5dc *)arg1 klass:(Class)arg2 orderBy:(const struct OrderBy *)arg3 limit:(const struct Limit *)arg4 docObjectContext:(id)arg5 queue:(id)arg6;
- (id)initWithFetchedResult:(id)arg1 docObjectContext:(id)arg2 queue:(id)arg3;
- (id)initWithDocObjectContext:(id)arg1 queue:(id)arg2;

@end
