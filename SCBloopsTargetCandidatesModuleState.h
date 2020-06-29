//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsModuleState-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface SCBloopsTargetCandidatesModuleState : NSObject <SCBloopsModuleState>
{
    _Bool _showTargetCandidatesCalled;
    NSMutableArray *_cellModels;
    NSMutableDictionary *_targetCandidates;
    NSNumber *_selectedIndex;
}

@property(nonatomic) _Bool showTargetCandidatesCalled; // @synthesize showTargetCandidatesCalled=_showTargetCandidatesCalled;
@property(retain, nonatomic) NSNumber *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableDictionary *targetCandidates; // @synthesize targetCandidates=_targetCandidates;
@property(retain, nonatomic) NSMutableArray *cellModels; // @synthesize cellModels=_cellModels;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

