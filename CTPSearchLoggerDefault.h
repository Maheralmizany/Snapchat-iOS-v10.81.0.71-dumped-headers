//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CTPSearchLogger-Protocol.h"

@class NSString, SCLogger;
@protocol CTPSearchSession;

@interface CTPSearchLoggerDefault : NSObject <CTPSearchLogger>
{
    id <CTPSearchSession> _session;
    SCLogger *_logger;
}

- (void).cxx_destruct;
- (long long)_sourceTypeFromOrigin:(unsigned long long)arg1;
- (long long)_resultSectionFromSection:(unsigned long long)arg1;
- (id)_userLanguagePrefencesString;
- (id)_s2CellId;
- (id)_sanitizeSearchTerm:(id)arg1;
- (_Bool)_isValidSearchQuery:(id)arg1;
- (void)logSearchRankingActionAtScreenLocation:(struct CGPoint)arg1 section:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 resultId:(id)arg4 itemIndex:(unsigned long long)arg5;
- (void)logSearchRankingResultsFromCache:(_Bool)arg1 query:(id)arg2 endTime:(id)arg3;
- (void)logSearchRankingQuery:(id)arg1;
- (id)initWithSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

