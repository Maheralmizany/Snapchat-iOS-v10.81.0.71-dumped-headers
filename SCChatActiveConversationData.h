//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, SCChatConversationMetadata, SCChatConversationSnapshotViewModel, SCChatSendBlockInfo, SCStoriesSummaryInfo;
@protocol SCChatGroup, SCChatRenderingConversation, SCContextV3PostSnapDataActionsResults;

@interface SCChatActiveConversationData : NSObject <NSCopying>
{
    _Bool _earlierContentExists;
    id <SCChatRenderingConversation> _conversation;
    SCChatConversationSnapshotViewModel *_snapshot;
    SCChatSendBlockInfo *_blockInfo;
    SCChatConversationMetadata *_metadata;
    SCStoriesSummaryInfo *_storiesSummary;
    id <SCChatGroup> _group;
    long long _conversationHistoryLoadStatus;
    long long _conversationLoadStatus;
    NSDictionary *_animationData;
    NSDictionary *_miniThumbnailImages;
    NSDictionary *_snapchattersData;
    NSString *_conversationDisplayPrefix;
    id <SCContextV3PostSnapDataActionsResults> _postSnapActionsResults;
    NSString *_paginationSinceMessageIdToken;
}

@property(readonly, copy, nonatomic) NSString *paginationSinceMessageIdToken; // @synthesize paginationSinceMessageIdToken=_paginationSinceMessageIdToken;
@property(readonly, nonatomic) id <SCContextV3PostSnapDataActionsResults> postSnapActionsResults; // @synthesize postSnapActionsResults=_postSnapActionsResults;
@property(readonly, copy, nonatomic) NSString *conversationDisplayPrefix; // @synthesize conversationDisplayPrefix=_conversationDisplayPrefix;
@property(readonly, copy, nonatomic) NSDictionary *snapchattersData; // @synthesize snapchattersData=_snapchattersData;
@property(readonly, copy, nonatomic) NSDictionary *miniThumbnailImages; // @synthesize miniThumbnailImages=_miniThumbnailImages;
@property(readonly, copy, nonatomic) NSDictionary *animationData; // @synthesize animationData=_animationData;
@property(readonly, nonatomic) long long conversationLoadStatus; // @synthesize conversationLoadStatus=_conversationLoadStatus;
@property(readonly, nonatomic) long long conversationHistoryLoadStatus; // @synthesize conversationHistoryLoadStatus=_conversationHistoryLoadStatus;
@property(readonly, nonatomic) _Bool earlierContentExists; // @synthesize earlierContentExists=_earlierContentExists;
@property(readonly, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
@property(readonly, copy, nonatomic) SCStoriesSummaryInfo *storiesSummary; // @synthesize storiesSummary=_storiesSummary;
@property(readonly, copy, nonatomic) SCChatConversationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) SCChatSendBlockInfo *blockInfo; // @synthesize blockInfo=_blockInfo;
@property(readonly, copy, nonatomic) SCChatConversationSnapshotViewModel *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) id <SCChatRenderingConversation> conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversation:(id)arg1 snapshot:(id)arg2 blockInfo:(id)arg3 metadata:(id)arg4 storiesSummary:(id)arg5 group:(id)arg6 earlierContentExists:(_Bool)arg7 conversationHistoryLoadStatus:(long long)arg8 conversationLoadStatus:(long long)arg9 animationData:(id)arg10 miniThumbnailImages:(id)arg11 snapchattersData:(id)arg12 conversationDisplayPrefix:(id)arg13 postSnapActionsResults:(id)arg14 paginationSinceMessageIdToken:(id)arg15;

@end

