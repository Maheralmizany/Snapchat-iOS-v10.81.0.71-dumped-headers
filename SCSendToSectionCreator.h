//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCCollectionViewSectionDataProvidingScheduler, SCExperimentManager, SCSelectionGroupSectionCreator, SCSelectionStorySectionCreator, SCSendToInternalConfiguration, SCSendToPreviewSectionCreator, SCSendToRecentSectionCreator, SCSnapchatterSelectionSectionCreator;

@interface SCSendToSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCSendToInternalConfiguration *_configuration;
    SCExperimentManager *_experimentManager;
    SCSendToPreviewSectionCreator *_sendToPreviewSectionCreator;
    SCSnapchatterSelectionSectionCreator *_snapchatterSelectionSectionCreator;
    SCSelectionGroupSectionCreator *_selectionGroupSectionCreator;
    SCSelectionStorySectionCreator *_selectionStorySectionCreator;
    SCSendToRecentSectionCreator *_recentSectionCreator;
    SCCollectionViewSectionDataProvidingScheduler *_dataProvidingScheduler;
}

- (void).cxx_destruct;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithConfiguration:(id)arg1 sendToSectionDataSource:(id)arg2 sendToViewModelSource:(id)arg3 previewConfiguration:(id)arg4 storyConfiguration:(id)arg5 previewTracker:(id)arg6 selectionTracker:(id)arg7 actionHandler:(id)arg8 imageDownloader:(id)arg9 experimentManager:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
