//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchQueryCoordinating-Protocol.h"

@class NSString, SCSearchNavigationCoordinator, SCSearchQuery, SCSearchQueryResult;
@protocol SCSelectionSectionConfiguration, SCSelectionSectionExpansionModelProvider;

@interface SCSelectionSectionCoordinator : NSObject <SCSearchQueryCoordinating>
{
    id <SCSelectionSectionConfiguration> _configuration;
    id <SCSelectionSectionExpansionModelProvider> _expansionModelProvider;
    _Bool _isLoading;
    SCSearchQuery *_currentQuery;
    SCSearchNavigationCoordinator *_navigationCoordinator;
    SCSearchQueryResult *_nonQueryResult;
}

@property(readonly, nonatomic) SCSearchQueryResult *nonQueryResult; // @synthesize nonQueryResult=_nonQueryResult;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
- (void).cxx_destruct;
- (void)_resultsForQuery:(id)arg1 sectionIdentifierToExpansionModels:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (_Bool)canPerformQuery:(id)arg1;
- (id)initWithConfiguration:(id)arg1 expansionModelProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

