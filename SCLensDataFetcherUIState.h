//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUIUpdateListener-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol SCLensDataFetcherUIStateDelegate, SCPerforming;

@interface SCLensDataFetcherUIState : NSObject <SCLensUIUpdateListener>
{
    id <SCPerforming> _performer;
    NSString *_currentSelectedLensId;
    NSMutableDictionary *_lensIdsToVisibleIndexes;
    NSMutableDictionary *_visibleLenses;
    NSMutableSet *_explicitlySelectedLensIds;
    id <SCLensDataFetcherUIStateDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensDataFetcherUIStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_performImmediatlyIfCurrentPerformerBlock:(CDUnknownBlockType)arg1;
- (void)willShowLensesWithContext:(unsigned long long)arg1;
- (void)didHideLensesWithContext:(unsigned long long)arg1;
- (void)didSelectLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)didEndDisplayingLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)willDisplayLens:(id)arg1 withContext:(unsigned long long)arg2;
- (void)didUpdateActiveLensOrder:(id)arg1 withContext:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long selectedLensIndex;
- (id)lensIndexById:(id)arg1;
- (id)lensById:(id)arg1;
- (_Bool)isSelectedLensId:(id)arg1;
- (_Bool)isExplicitlySelectedLensId:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *visibleLenses;
- (id)initWithPerformer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

