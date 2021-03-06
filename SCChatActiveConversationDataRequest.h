//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCChatActiveConversationMetadata, SCChatViewOptions, SCStartChatIdentifier;

@interface SCChatActiveConversationDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_setActiveConversation_conversationId;
    SCChatActiveConversationMetadata *_setActiveConversation_metadata;
    SCStartChatIdentifier *_setActiveConversation_chatIdentifier;
    SCChatViewOptions *_setActiveConversation_chatViewOptions;
    NSString *_resumeActiveConversation_conversationId;
    SCChatActiveConversationMetadata *_resumeActiveConversation_metadata;
    SCStartChatIdentifier *_resumeActiveConversation_chatIdentifier;
    NSString *_unsetActiveConversation_conversationId;
    SCStartChatIdentifier *_unsetActiveConversation_chatIdentifier;
}

+ (id)unsetActiveConversationWithConversationId:(id)arg1 chatIdentifier:(id)arg2;
+ (id)setActiveConversationWithConversationId:(id)arg1 metadata:(id)arg2 chatIdentifier:(id)arg3 chatViewOptions:(id)arg4;
+ (id)resumeActiveConversationWithConversationId:(id)arg1 metadata:(id)arg2 chatIdentifier:(id)arg3;
- (void).cxx_destruct;
- (void)matchSetActiveConversation:(CDUnknownBlockType)arg1 resumeActiveConversation:(CDUnknownBlockType)arg2 unsetActiveConversation:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

