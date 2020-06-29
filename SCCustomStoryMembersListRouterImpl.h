//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCustomStoryMembersListRouter-Protocol.h"
#import "SCRecipientPickerDelegate-Protocol.h"

@class NSString, SCLazy, SCScopeExposer, SCStoriesCustomStoryMetadata;
@protocol SCCustomStoryEditMembersDelegate, SCSearchSectionCreating, SCUIContainer;

@interface SCCustomStoryMembersListRouterImpl : NSObject <SCRecipientPickerDelegate, SCCustomStoryMembersListRouter>
{
    id <SCUIContainer> _uiContainer;
    SCScopeExposer *_recipientPickerScopeExposer;
    NSString *_publicationId;
    id <SCSearchSectionCreating> _membersListSectionCreator;
    SCLazy *_snapchattersDataFetcher;
    NSString *_currentUserId;
    id <SCCustomStoryEditMembersDelegate> _editMembersDelegate;
    SCStoriesCustomStoryMetadata *_customStoryBeingEdited;
}

- (void).cxx_destruct;
- (void)presentSeeMembersForCustomStory:(id)arg1 delegate:(id)arg2;
- (void)didDismissWithSelectedItems:(id)arg1 header:(id)arg2;
- (void)didConfirmWithSelectedItems:(id)arg1 header:(id)arg2 uiContainer:(id)arg3;
- (void)_presentEditMembersWithTitle:(id)arg1 description:(id)arg2 preSelectedIds:(id)arg3 snapchatters:(id)arg4;
- (void)presentEditMembersForCustomStory:(id)arg1 delegate:(id)arg2;
- (id)initWithUiContainer:(id)arg1 recipientPickerScopeExposer:(id)arg2 publicationId:(id)arg3 membersListSectionCreator:(id)arg4 snapchattersDataFetcher:(id)arg5 currentUserId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
