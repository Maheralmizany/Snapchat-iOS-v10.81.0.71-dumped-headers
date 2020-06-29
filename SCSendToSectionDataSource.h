//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSelectionGroupSectionDataSource-Protocol.h"
#import "SCSelectionRecipientSectionDataSource-Protocol.h"
#import "SCSelectionStorySectionDataSource-Protocol.h"
#import "SCSendToLastSnapSectionDataSource-Protocol.h"
#import "SCSnapchatterSectionDataSource-Protocol.h"

@class NSArray, NSAttributedString, NSString, SCLazy, SCSelectionTracker, SCSendToInternalConfiguration;

@interface SCSendToSectionDataSource : NSObject <SCSnapchatterSectionDataSource, SCSelectionGroupSectionDataSource, SCSelectionRecipientSectionDataSource, SCSelectionStorySectionDataSource, SCSendToLastSnapSectionDataSource>
{
    SCSendToInternalConfiguration *_configuration;
    SCSelectionTracker *_selectionTracker;
    SCLazy *_sortableSnapchatterObservableRepository;
    SCLazy *_selectionGroupObservableRepository;
    SCLazy *_selectionRecipientObservableRepository;
    SCLazy *_selectionStoryObservableRepository;
    SCLazy *_replySnapchatterObservableRepository;
    SCLazy *_lastSnapDataCoordinator;
    SCLazy *_firstSnapRecipientsObservable;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *lastSnapItems;
@property(readonly, nonatomic) NSAttributedString *lastSnapTitle;
- (id)selectionStoryObservableForSectionIdentifier:(id)arg1 query:(id)arg2;
- (id)selectionRecipientObservableForSectionIdentifier:(id)arg1 query:(id)arg2;
- (id)selectionGroupObservableForSectionIdentifier:(id)arg1 query:(id)arg2;
- (id)snapchatterObservableForSectionIdentifier:(id)arg1 query:(id)arg2;
- (id)initWithConfiguration:(id)arg1 sortableSnapchatterObservableRepository:(id)arg2 selectionGroupObservableRepository:(id)arg3 selectionRecipientObservableRepository:(id)arg4 selectionStoryObservableRepository:(id)arg5 replySnapchatterObservableRepository:(id)arg6 lastSnapDataCoordinator:(id)arg7 selectionTracker:(id)arg8 firstSnapRecipientsObservable:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
