//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsAPIListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"

@class AVPlayerItem, NSString, SCEventListenerAnnouncer, SCLazy;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCMyUnifiedProfileBloopsIntroSectionDataProvider : NSObject <SCBloopsAPIListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLazy *_bloopsAPI;
    AVPlayerItem *_playerItem;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)obtainBloopsVideo;
- (void)obtainBloopsVideoIfNeccesary;
- (void)bloopsAPI:(id)arg1 didChangeBloopsPreviewsResourcesStatus:(_Bool)arg2;
- (void)bloopsAPI:(id)arg1 didChangeBloopsFeatureStatus:(_Bool)arg2;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)setUp;
- (id)initWithBloopsAPI:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
