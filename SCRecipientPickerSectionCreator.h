//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCRecipientPickerConfiguration, SCSelectionDescriptionSectionCreator, SCSelectionGroupSectionCreator, SCSelectionRecipientSectionCreator, SCSnapchatterSelectionSectionCreator;

@interface SCRecipientPickerSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCRecipientPickerConfiguration *_configuration;
    SCSnapchatterSelectionSectionCreator *_snapchatterSelectionSectionCreator;
    SCSelectionGroupSectionCreator *_selectionGroupSectionCreator;
    SCSelectionRecipientSectionCreator *_selectionRecipientSectionCreator;
    SCSelectionDescriptionSectionCreator *_selectionDescriptionSectionCreator;
}

- (void).cxx_destruct;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithConfiguration:(id)arg1 recipientPickerSectionDataSource:(id)arg2 recipientPickerViewModelSource:(id)arg3 selectionTracker:(id)arg4 actionHandler:(id)arg5 imageDownloader:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

