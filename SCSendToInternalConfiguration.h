//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSelectionSectionConfiguration-Protocol.h"

@class NSArray, NSDictionary, NSOrderedSet, NSSet, NSString, SCObservable, SCSendToSectionsConfiguration;

@interface SCSendToInternalConfiguration : NSObject <SCSelectionSectionConfiguration>
{
    SCSendToSectionsConfiguration *_sectionsConfiguration;
    NSOrderedSet *_tapSelectionBarSections;
    NSDictionary *_sectionToTitleMapping;
    NSDictionary *_sectionToSubtitleMapping;
    NSDictionary *_sectionToIndexSymbolMapping;
    NSDictionary *_indexSymbolToSectionIdentifierMapping;
    NSDictionary *_reuseIdentifierToSingleCellClassMapping;
    NSDictionary *_reuseIdentifierToDualCellClassMapping;
    NSArray *_preSelectedItems;
    NSOrderedSet *_indexingSections;
    NSOrderedSet *_precedingSections;
    NSOrderedSet *_subsequentSections;
    NSOrderedSet *_nonQuerySections;
    NSOrderedSet *_querySections;
    NSOrderedSet *_viewMoreSections;
    NSSet *_carouselSections;
    NSOrderedSet *_alphabeticalIndexes;
    NSOrderedSet *_precedingIndexes;
    NSOrderedSet *_subsequentIndexes;
    NSString *_searchFieldPlaceHolder;
    unsigned long long _indexOfPreviewSection;
    NSSet *_snapchatterSections;
    NSSet *_selectionGroupSections;
    NSSet *_selectionRecipientSections;
    NSSet *_selectionStorySections;
    NSSet *_sendToLastSnapSections;
    SCObservable *_snappableFriendUserIdsObservable;
}

@property(readonly, nonatomic) SCObservable *snappableFriendUserIdsObservable; // @synthesize snappableFriendUserIdsObservable=_snappableFriendUserIdsObservable;
@property(readonly, copy, nonatomic) NSSet *sendToLastSnapSections; // @synthesize sendToLastSnapSections=_sendToLastSnapSections;
@property(readonly, copy, nonatomic) NSSet *selectionStorySections; // @synthesize selectionStorySections=_selectionStorySections;
@property(readonly, copy, nonatomic) NSSet *selectionRecipientSections; // @synthesize selectionRecipientSections=_selectionRecipientSections;
@property(readonly, copy, nonatomic) NSSet *selectionGroupSections; // @synthesize selectionGroupSections=_selectionGroupSections;
@property(readonly, copy, nonatomic) NSSet *snapchatterSections; // @synthesize snapchatterSections=_snapchatterSections;
@property(readonly, nonatomic) unsigned long long indexOfPreviewSection; // @synthesize indexOfPreviewSection=_indexOfPreviewSection;
@property(readonly, copy, nonatomic) NSString *searchFieldPlaceHolder; // @synthesize searchFieldPlaceHolder=_searchFieldPlaceHolder;
@property(readonly, copy, nonatomic) NSOrderedSet *subsequentIndexes; // @synthesize subsequentIndexes=_subsequentIndexes;
@property(readonly, copy, nonatomic) NSOrderedSet *precedingIndexes; // @synthesize precedingIndexes=_precedingIndexes;
@property(readonly, copy, nonatomic) NSOrderedSet *alphabeticalIndexes; // @synthesize alphabeticalIndexes=_alphabeticalIndexes;
@property(readonly, copy, nonatomic) NSSet *carouselSections; // @synthesize carouselSections=_carouselSections;
@property(readonly, copy, nonatomic) NSOrderedSet *viewMoreSections; // @synthesize viewMoreSections=_viewMoreSections;
@property(readonly, copy, nonatomic) NSOrderedSet *querySections; // @synthesize querySections=_querySections;
@property(readonly, copy, nonatomic) NSOrderedSet *nonQuerySections; // @synthesize nonQuerySections=_nonQuerySections;
@property(readonly, copy, nonatomic) NSOrderedSet *subsequentSections; // @synthesize subsequentSections=_subsequentSections;
@property(readonly, copy, nonatomic) NSOrderedSet *precedingSections; // @synthesize precedingSections=_precedingSections;
@property(readonly, copy, nonatomic) NSOrderedSet *indexingSections; // @synthesize indexingSections=_indexingSections;
@property(readonly, copy, nonatomic) NSArray *preSelectedItems; // @synthesize preSelectedItems=_preSelectedItems;
- (void).cxx_destruct;
- (id)reuseIdentifierForSectionIdentifier:(id)arg1 itemsCount:(unsigned long long)arg2;
- (id)reuseIdentifierToCellClassMapForSectionIdentifier:(id)arg1;
- (id)sectionIdentifiersForQuery:(id)arg1 querySource:(id)arg2;
- (id)sectionIdentifierForIndexSymbol:(id)arg1;
- (id)indexSymbolForSectionIdentifier:(id)arg1;
- (id)sectionHeaderViewModelForSectionIdentifier:(id)arg1;
- (id)titleForSectionIdentifier:(id)arg1;
- (id)initAlphabeticalIndexes:(id)arg1 preSelectedItems:(id)arg2 previewConfiguration:(id)arg3 recipientConfiguration:(id)arg4 storyConfiguration:(id)arg5 snapchattersDataFetcher:(id)arg6 userInfoProvider:(id)arg7 userPreferences:(id)arg8 experimentManager:(id)arg9 lastSnapDataCoordinator:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

