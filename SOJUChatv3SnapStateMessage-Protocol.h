//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOJUConversationMessage-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUChatv3SnapStateMessage <SOJUConversationMessage>
@property(readonly, nonatomic) NSNumber *chatMessageSeqNum;
@property(readonly, nonatomic) NSNumber *screenCaptureRecordingCount;
@property(readonly, nonatomic) NSNumber *screenCaptureShotCount;
@property(readonly, nonatomic) NSNumber *openTimestamp;
@property(readonly, nonatomic) NSString *senderChatMediaId;
@property(readonly, nonatomic) NSNumber *screenshotCount;
@property(readonly, nonatomic) NSString *state;
@property(readonly, nonatomic) NSString *chatMessageId;
@end

