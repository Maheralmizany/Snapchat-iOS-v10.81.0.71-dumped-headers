//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, SCNMessagingFeedEntryDisplayInfo, SCNMessagingInteractionInfo, SCNMessagingLegacyConversationInfo, SCNMessagingStreakMetadata, SCNMessagingUUID;

@interface SCNMessagingFeedEntry : NSObject
{
    SCNMessagingUUID *_conversationId;
    SCNMessagingLegacyConversationInfo *_legacyConversationInfo;
    long long _lastEventUpdateTimestamp;
    NSData *_secondOrderSortParameter;
    NSArray *_participants;
    NSString *_conversationTitle;
    long long _conversationType;
    SCNMessagingFeedEntryDisplayInfo *_displayInfo;
    SCNMessagingInteractionInfo *_interactionInfo;
    SCNMessagingStreakMetadata *_streakMetadata;
}

+ (id)FeedEntryWithConversationId:(id)arg1 legacyConversationInfo:(id)arg2 lastEventUpdateTimestamp:(long long)arg3 secondOrderSortParameter:(id)arg4 participants:(id)arg5 conversationTitle:(id)arg6 conversationType:(long long)arg7 displayInfo:(id)arg8 interactionInfo:(id)arg9 streakMetadata:(id)arg10;
@property(readonly, nonatomic) SCNMessagingStreakMetadata *streakMetadata; // @synthesize streakMetadata=_streakMetadata;
@property(readonly, nonatomic) SCNMessagingInteractionInfo *interactionInfo; // @synthesize interactionInfo=_interactionInfo;
@property(readonly, nonatomic) SCNMessagingFeedEntryDisplayInfo *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(readonly, nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(readonly, nonatomic) NSString *conversationTitle; // @synthesize conversationTitle=_conversationTitle;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) NSData *secondOrderSortParameter; // @synthesize secondOrderSortParameter=_secondOrderSortParameter;
@property(readonly, nonatomic) long long lastEventUpdateTimestamp; // @synthesize lastEventUpdateTimestamp=_lastEventUpdateTimestamp;
@property(readonly, nonatomic) SCNMessagingLegacyConversationInfo *legacyConversationInfo; // @synthesize legacyConversationInfo=_legacyConversationInfo;
@property(readonly, nonatomic) SCNMessagingUUID *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConversationId:(id)arg1 legacyConversationInfo:(id)arg2 lastEventUpdateTimestamp:(long long)arg3 secondOrderSortParameter:(id)arg4 participants:(id)arg5 conversationTitle:(id)arg6 conversationType:(long long)arg7 displayInfo:(id)arg8 interactionInfo:(id)arg9 streakMetadata:(id)arg10;

@end
