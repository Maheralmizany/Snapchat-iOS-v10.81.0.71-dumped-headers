//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSOrderedSet, NSSet, NSString, SIGSectionHeaderViewModel;

@protocol SCSelectionSectionConfiguration <NSObject>
@property(readonly, copy, nonatomic) NSArray *preSelectedItems;
@property(readonly, copy, nonatomic) NSOrderedSet *subsequentIndexes;
@property(readonly, copy, nonatomic) NSOrderedSet *precedingIndexes;
@property(readonly, copy, nonatomic) NSOrderedSet *alphabeticalIndexes;
@property(readonly, copy, nonatomic) NSSet *carouselSections;
@property(readonly, copy, nonatomic) NSOrderedSet *viewMoreSections;
@property(readonly, copy, nonatomic) NSOrderedSet *querySections;
@property(readonly, copy, nonatomic) NSOrderedSet *nonQuerySections;
@property(readonly, copy, nonatomic) NSOrderedSet *subsequentSections;
@property(readonly, copy, nonatomic) NSOrderedSet *precedingSections;
@property(readonly, copy, nonatomic) NSOrderedSet *indexingSections;
- (SIGSectionHeaderViewModel *)sectionHeaderViewModelForSectionIdentifier:(NSString *)arg1;
- (NSString *)titleForSectionIdentifier:(NSString *)arg1;
- (NSOrderedSet *)sectionIdentifiersForQuery:(NSString *)arg1 querySource:(NSString *)arg2;
- (NSString *)sectionIdentifierForIndexSymbol:(NSString *)arg1;
- (NSString *)indexSymbolForSectionIdentifier:(NSString *)arg1;
@end
