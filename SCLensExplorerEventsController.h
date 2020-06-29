//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerActionLoggerProtocol-Protocol.h"
#import "SCLensExplorerEventsController-Protocol.h"
#import "SCLensExplorerImpressionControllerDelegate-Protocol.h"
#import "SCLensExplorerPageEventLoggerProtocol-Protocol.h"

@class NSString, SCLensExplorerHistoryManager, SCLensExplorerImpressionController, SCLensExplorerLogger, SCQueuePerformer;
@protocol SCLensExplorerDataStoreProtocol;

@interface SCLensExplorerEventsController : NSObject <SCLensExplorerPageEventLoggerProtocol, SCLensExplorerActionLoggerProtocol, SCLensExplorerImpressionControllerDelegate, SCLensExplorerEventsController>
{
    SCLensExplorerLogger *_lensExplorerLogger;
    SCQueuePerformer *_performer;
    Class _targetCellClass;
    id <SCLensExplorerDataStoreProtocol> _dataStore;
    SCLensExplorerImpressionController *_impressionController;
    SCLensExplorerHistoryManager *_longImpressionHistoryManager;
}

@property(readonly, nonatomic) SCLensExplorerHistoryManager *longImpressionHistoryManager; // @synthesize longImpressionHistoryManager=_longImpressionHistoryManager;
- (void).cxx_destruct;
- (void)impressionController:(id)arg1 didReachThresholdForShortImpressionItems:(id)arg2;
- (void)impressionController:(id)arg1 didReachThresholdForLongImpressionItems:(id)arg2;
- (void)logPageViewEvent;
- (void)logPageOpenEventPageTypeSpecific:(id)arg1;
- (void)reset;
- (void)flush;
- (void)_handleTapOnLensItemCell:(id)arg1 actionModel:(id)arg2;
- (void)handleTapOnCell:(id)arg1 actionModel:(id)arg2;
- (void)updateImpressionItemsWithCollectionView:(id)arg1;
- (id)initWithImpressionController:(id)arg1 dataStore:(id)arg2 targetCellClass:(Class)arg3 lensExplorerLogger:(id)arg4 performer:(id)arg5;
- (void)logUnsubscribeFromCreator:(id)arg1 streamIdentifier:(id)arg2;
- (void)logSubscribeToCreator:(id)arg1 streamIdentifier:(id)arg2;
- (void)logUnlockActionForImpressionItem:(id)arg1 pageTypeSpecific:(id)arg2 streamIdentifier:(id)arg3;
- (void)logUnlockActionForImpressionItem:(id)arg1 streamIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
