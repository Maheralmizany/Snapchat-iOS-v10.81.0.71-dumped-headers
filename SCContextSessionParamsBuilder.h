//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCTXContextClientInfo, SCContextV3StoryParams, SCLensSbSnappableMessage, SCStoriesSnapPlaybackMetadata;

@interface SCContextSessionParamsBuilder : NSObject
{
    _Bool _replyEnabled;
    _Bool _isContextDisabled;
    NSString *_venueId;
    NSString *_attachmentUrl;
    NSString *_contentUsername;
    NSString *_lensId;
    SCLensSbSnappableMessage *_lensMetadata;
    NSString *_filterId;
    SCCTXContextClientInfo *_contextClientInfo;
    NSString *_unlockablesSnapInfo;
    NSString *_displayName;
    int _launchSource;
    SCContextV3StoryParams *_storyParams;
    SCStoriesSnapPlaybackMetadata *_storySnap;
    long long _storyType;
    long long _storyTypeSpecific;
    NSString *_storyId;
    NSString *_storySnapId;
    NSString *_chatMessageId;
    long long _chatMediaType;
    long long _unifiedMediaType;
    NSString *_oneOnOneConversationId;
    NSString *_groupChatConversationId;
    NSString *_chatSenderUsername;
    NSString *_singleRecipientDisplayName;
    NSString *_teamSnapchatMassSnapIdHash;
    _Bool _showSnapProPublicStoryReplyDisclaimer;
}

+ (id)contextSessionParamsFromExistingContextSessionParams:(id)arg1;
+ (id)contextSessionParams;
- (void).cxx_destruct;
- (id)withShowSnapProPublicStoryReplyDisclaimer:(_Bool)arg1;
- (id)withTeamSnapchatMassSnapIdHash:(id)arg1;
- (id)withSingleRecipientDisplayName:(id)arg1;
- (id)withChatSenderUsername:(id)arg1;
- (id)withGroupChatConversationId:(id)arg1;
- (id)withOneOnOneConversationId:(id)arg1;
- (id)withUnifiedMediaType:(long long)arg1;
- (id)withChatMediaType:(long long)arg1;
- (id)withChatMessageId:(id)arg1;
- (id)withStorySnapId:(id)arg1;
- (id)withStoryId:(id)arg1;
- (id)withStoryTypeSpecific:(long long)arg1;
- (id)withStoryType:(long long)arg1;
- (id)withStorySnap:(id)arg1;
- (id)withStoryParams:(id)arg1;
- (id)withLaunchSource:(int)arg1;
- (id)withDisplayName:(id)arg1;
- (id)withUnlockablesSnapInfo:(id)arg1;
- (id)withContextClientInfo:(id)arg1;
- (id)withFilterId:(id)arg1;
- (id)withLensMetadata:(id)arg1;
- (id)withLensId:(id)arg1;
- (id)withContentUsername:(id)arg1;
- (id)withAttachmentUrl:(id)arg1;
- (id)withVenueId:(id)arg1;
- (id)withIsContextDisabled:(_Bool)arg1;
- (id)withReplyEnabled:(_Bool)arg1;
- (id)build;
- (id)withoutStoryType;
- (id)withReplyEnabledDerivedFromLaunchSource:(int)arg1 story:(id)arg2 friendsStories:(id)arg3 isFriendStorySnap:(_Bool)arg4 discoverChunk:(id)arg5 fallbackIsReplyEnabled:(_Bool)arg6;
- (id)withStoryProperties:(id)arg1;
- (id)withOperaPageProperties:(id)arg1;

@end

