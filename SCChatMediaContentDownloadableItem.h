//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadableItem-Protocol.h"

@class NSString, SCChatMediaContent;

@interface SCChatMediaContentDownloadableItem : NSObject <SCChatMediaDownloadableItem>
{
    _Bool _userInitiated;
    NSString *_conversationId;
    NSString *_messageId;
    long long _messageBodyType;
    NSString *_senderUsername;
    SCChatMediaContent *_chatMediaContent;
    NSString *_lensMetadata;
}

@property(readonly, copy, nonatomic) NSString *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
@property(readonly, nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(readonly, copy, nonatomic) SCChatMediaContent *chatMediaContent; // @synthesize chatMediaContent=_chatMediaContent;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, nonatomic) long long messageBodyType; // @synthesize messageBodyType=_messageBodyType;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)mediaId;
- (id)initWithChatMediaContent:(id)arg1 messageBodyType:(long long)arg2 messageId:(id)arg3 conversationId:(id)arg4 senderUserName:(id)arg5 lensMetadata:(id)arg6 userInitiated:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

