//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCOperaViewModel, SCSnapGrapheneLogger, SCUserSession;
@protocol SCChatOperaViewModelGraphDelegate, SCPerforming;

@interface SCChatOperaViewModelGraph : NSObject <SCTraceEnabled>
{
    id <SCChatOperaViewModelGraphDelegate> _delegate;
    id <SCPerforming> _performer;
    NSMutableDictionary *_operaContentDictionary;
    NSMutableArray *_viewModels;
    NSMutableArray *_auxilliaryViewModels;
    NSMutableDictionary *_viewModelDictionary;
    NSMutableSet *_currentlyUnarchivingContentIds;
    NSMutableDictionary *_removedContents;
    SCUserSession *_userSession;
    SCSnapGrapheneLogger *_snapGraphene;
    _Bool _containsMultipleViewModels;
    SCOperaViewModel *_rootViewModel;
    NSString *_currentlyPlayingOperaPageId;
}

+ (id)_totalDurationForContent:(id)arg1;
@property(readonly, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) NSString *currentlyPlayingOperaPageId; // @synthesize currentlyPlayingOperaPageId=_currentlyPlayingOperaPageId;
@property(nonatomic) _Bool containsMultipleViewModels; // @synthesize containsMultipleViewModels=_containsMultipleViewModels;
@property(retain, nonatomic) SCOperaViewModel *rootViewModel; // @synthesize rootViewModel=_rootViewModel;
- (void).cxx_destruct;
- (id)_viewModelForChatOperaContent:(id)arg1 totalTimeLeft:(id)arg2 totalDuration:(id)arg3 numTotalSegments:(id)arg4 currentSegment:(id)arg5 secondsPlayed:(id)arg6 retryInProgress:(_Bool)arg7 message:(id)arg8 senderDisplayName:(id)arg9;
- (void)_getViewModelsAfterCurrentlyPlayingContent:(CDUnknownBlockType)arg1;
- (void)_updateViewModelForContent:(id)arg1 retrying:(_Bool)arg2 message:(id)arg3;
- (void)_updateContent:(id)arg1 message:(id)arg2 afterUnarchivingWithSuccess:(_Bool)arg3 error:(long long)arg4;
- (void)_unarchiveIfNotAlreadyUnarchivingWithContent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unarchiveAndUpdateContent:(id)arg1 message:(id)arg2;
- (void)_removeContent:(id)arg1;
- (long long)numberOfContentsFromPageId:(id)arg1;
- (void)setRootIndex:(unsigned long long)arg1;
- (_Bool)firstContentReadyToPlay;
- (id)currentlyPlayingContent;
- (id)firstOperaContentToPlay;
- (id)chatOperaContentForPageId:(id)arg1;
- (id)viewModelForPageId:(id)arg1;
- (void)prepareMediaForPresentation:(id)arg1;
- (void)loadContentIfNotInCache:(id)arg1 message:(id)arg2;
- (id)getRemovedContentByPageId:(id)arg1;
- (void)removeContentByPageId:(id)arg1;
- (void)_updateMediaContentOperaViewModelForOperaContent:(id)arg1 message:(id)arg2;
- (void)updateContent:(id)arg1 message:(id)arg2;
- (void)addContent:(id)arg1 message:(id)arg2 senderDisplayName:(id)arg3;
- (id)initWithDelegate:(id)arg1 performer:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

