//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOJUAuthPayload-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUMessagingConversationStoryElementRequest <SOJUAuthPayload>
@property(readonly, nonatomic) NSString *conversationId;
@property(readonly, nonatomic) NSNumber *sequenceNumber;
@property(readonly, nonatomic) NSString *senderUsername;
@property(readonly, nonatomic) NSString *storyId;
@end

