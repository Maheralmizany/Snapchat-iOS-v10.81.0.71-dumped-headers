//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCustomStoryCreationActionMenuDelegate-Protocol.h"
#import "SCCustomStoryCreationErrorAlertDelegate-Protocol.h"
#import "SCCustomStoryCreationNamingAlertDelegate-Protocol.h"
#import "SCRecipientPickerDelegate-Protocol.h"

@class NSArray, NSString, SCLazy;
@protocol SCCustomStoryCreationDelegate, SCCustomStoryCreationRouter, SCStoriesBlizzardLogging;

@interface SCCustomStoryCreationWorkflow : NSObject <SCCustomStoryCreationActionMenuDelegate, SCRecipientPickerDelegate, SCCustomStoryCreationNamingAlertDelegate, SCCustomStoryCreationErrorAlertDelegate>
{
    id <SCCustomStoryCreationRouter> _router;
    id <SCCustomStoryCreationDelegate> _delegate;
    SCLazy *_customStoriesDataMutator;
    id <SCStoriesBlizzardLogging> _storiesBlizzardLogger;
    long long _sourcePageType;
    NSString *_currentUserId;
    unsigned long long _storyType;
    NSArray *_selectedUserIds;
    NSString *_selectedStoryName;
    _Bool _didCompleteMemberSelection;
}

- (void).cxx_destruct;
- (void)_logIncompleteCreationSession;
- (void)didDismissCustomStoryErrorWithAllowRetryNaming:(_Bool)arg1;
- (void)didCancelCustomStoryName;
- (void)_handleCustomStoryCreationFailureWithResponseCode:(long long)arg1;
- (void)_handleCustomStoryCreationSuccessWithPublicationId:(id)arg1;
- (void)_createCustomStory;
- (void)didSubmitCustomStoryName:(id)arg1;
- (void)didDismissWithSelectedItems:(id)arg1 header:(id)arg2;
- (void)didConfirmWithSelectedItems:(id)arg1 header:(id)arg2 uiContainer:(id)arg3;
- (void)didDismissFromSwipeOrTap;
- (void)didSelectCancel;
- (void)didSelectCreateCustomStory;
- (void)didSelectCreatePrivateStory;
- (void)beginWorkflow;
- (id)initWithRouter:(id)arg1 delegate:(id)arg2 customStoriesDataMutator:(id)arg3 storiesBlizzardLogger:(id)arg4 currentUserId:(id)arg5 sourcePageType:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

