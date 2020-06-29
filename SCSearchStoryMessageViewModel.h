//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMediaChatViewModel.h"

#import "SCChatMetadataForwardable-Protocol.h"
#import "SCReportStoryMetadataParamsProvider-Protocol.h"

@class NSString, SOJUSearchShareStorySnap;

@interface SCSearchStoryMessageViewModel : SCMediaChatViewModel <SCReportStoryMetadataParamsProvider, SCChatMetadataForwardable>
{
    SOJUSearchShareStorySnap *_searchStorySnap;
    _Bool _isViewable;
    NSString *_displayText;
}

@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void).cxx_destruct;
- (id)forwardButtonString;
- (_Bool)isReadyToForward;
- (id)forwardPreviewViewModel;
- (id)sendTaskMetadataContainer;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)thumbnailSize;
- (id)_updatedThumbnailViewModel;
- (id)updatedThumbnailViewModel;
- (id)reusableCellIdentifier;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
@property(readonly, copy, nonatomic) NSString *snapId;
@property(readonly, copy, nonatomic) NSString *dynamicStoryId;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (id)storyMetadataParams;
- (unsigned long long)reportSnapSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

