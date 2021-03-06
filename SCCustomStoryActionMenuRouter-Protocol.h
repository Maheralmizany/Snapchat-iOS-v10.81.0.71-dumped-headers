//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCStoriesCustomStoryMetadata;
@protocol SCCustomStoryActionMenuActionHandlerDelegate, SCCustomStoryDeleteAlertDelegate, SCCustomStoryLeaveAlertDelegate, SCCustomStoryRenameAlertDelegate, SCCustomStorySeeMembersDelegate;

@protocol SCCustomStoryActionMenuRouter <NSObject>
- (void)presentMembersListForCustomStory:(SCStoriesCustomStoryMetadata *)arg1 delegate:(id <SCCustomStorySeeMembersDelegate>)arg2;
- (void)presentRenameCustomStory:(SCStoriesCustomStoryMetadata *)arg1 delegate:(id <SCCustomStoryRenameAlertDelegate>)arg2;
- (void)confirmLeaveCustomStory:(SCStoriesCustomStoryMetadata *)arg1 delegate:(id <SCCustomStoryLeaveAlertDelegate>)arg2;
- (void)confirmDeleteCustomStory:(SCStoriesCustomStoryMetadata *)arg1 delegate:(id <SCCustomStoryDeleteAlertDelegate>)arg2;
- (void)dismissCustomStoryActionMenuWithCompletion:(void (^)(void))arg1;
- (void)presentCustomStoryActionMenuWithDelegate:(id <SCCustomStoryActionMenuActionHandlerDelegate>)arg1;
@end

