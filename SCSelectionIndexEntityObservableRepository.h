//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SIGIndexEntityObservableRepository-Protocol.h"

@class NSString, SCLazy, SCObservable;

@interface SCSelectionIndexEntityObservableRepository : NSObject <SIGIndexEntityObservableRepository>
{
    SCLazy *_sortableSnapchatterObservableRepository;
    SCLazy *_selectionGroupObservableRepository;
    long long _suggestionPage;
}

- (void).cxx_destruct;
- (void)warmUp;
- (id)entityCountObservableForIndexKey:(id)arg1;
@property(readonly, nonatomic) SCObservable *sortedEntitiesObservable;
- (id)initWithSortableSnapchatterObservableRepository:(id)arg1 selectionGroupObservableRepository:(id)arg2 selectionIndexSuggestionPageType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

