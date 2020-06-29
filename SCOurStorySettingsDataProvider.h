//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSMutableDictionary, NSString, SCEventListenerAnnouncer, SCExperimentManager, SCOurStorySettingsDataSource;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCOurStorySettingsDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCOurStorySettingsDataSource *_dataSource;
    NSMutableDictionary *_storySaveStates;
    id <SCImageDownloading> _imageDownloader;
    SCExperimentManager *_experimentManager;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)updateSavingStateOfStoryWithId:(id)arg1 toState:(long long)arg2;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)initWithDataSource:(id)arg1 imageDownloader:(id)arg2 experimentManager:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

