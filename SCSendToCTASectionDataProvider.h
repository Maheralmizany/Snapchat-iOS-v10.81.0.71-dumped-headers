//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCExperimentManager;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate, SCUserSelectionManaging, SCUserTooltipStatusProviding;

@interface SCSendToCTASectionDataProvider : NSObject <SCUserSelectionListener, SCEventListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCUserSelectionManaging> _selectionStateManager;
    NSString *_sectionType;
    SCExperimentManager *_experimentManager;
    _Bool _groupLinksEnabled;
    id <SCUserTooltipStatusProviding> _userTooltipStatusProvider;
    unsigned long long _creationType;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_setTooltipStatusWithIsSelected:(_Bool)arg1;
- (_Bool)_shouldDisplayBadge;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (double)minimumInteritemSpacing;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)initWithSelectionStateManager:(id)arg1 sectionType:(id)arg2 experimentManager:(id)arg3 userTooltipStatusProvider:(id)arg4 creationType:(unsigned long long)arg5;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
