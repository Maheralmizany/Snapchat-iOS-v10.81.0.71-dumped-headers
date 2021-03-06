//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSelectionRecipientObservableRepository-Protocol.h"

@class NSString, SCLazy, SCObservable;

@interface SCSelectionRecipientObservableRepositoryImpl : NSObject <SCSelectionRecipientObservableRepository>
{
    SCLazy *_sortableSnapchatterObservableRepository;
    SCLazy *_selectionGroupObservableRepository;
    CDUnknownBlockType _recentSorter;
    CDUnknownBlockType _recipientMerger;
    CDUnknownBlockType _recipientFilter;
    CDUnknownBlockType _searchSorter;
    SCLazy *_lazyAllSelectionRecipientsObservable;
    SCLazy *_lazyRecentSelectionRecipientsObservable;
}

- (void).cxx_destruct;
- (id)searchSelectionRecipientsObservableForQuery:(id)arg1;
- (id)selectionRecipientObservableForPreSelectedIds:(id)arg1;
@property(readonly, nonatomic) SCObservable *recentSelectionRecipientsObservable;
- (void)warmUp;
- (id)initWithSortableSnapchatterObservableRepository:(id)arg1 selectionGroupObservableRepository:(id)arg2 recentSorter:(CDUnknownBlockType)arg3 recipientMerger:(CDUnknownBlockType)arg4 recipientFilter:(CDUnknownBlockType)arg5 searchSorter:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

