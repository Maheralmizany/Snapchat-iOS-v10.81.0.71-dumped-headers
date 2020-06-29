//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUReleaseMessage-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUReleaseMessage : SCSojuMessage <SOJUReleaseMessage>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 releaseType:(id)arg10 knownReceivedSnapsTs:(id)arg11 snapIds:(id)arg12;

// Remaining properties
@property(readonly, nonatomic) NSString *appEngineTarget; // @dynamic appEngineTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUHeader *header; // @dynamic header;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSDictionary *knownChatSequenceNumbers; // @dynamic knownChatSequenceNumbers;
@property(readonly, nonatomic) NSDictionary *knownReceivedSnapsTs; // @dynamic knownReceivedSnapsTs;
@property(readonly, nonatomic) NSNumber *mischiefVersion; // @dynamic mischiefVersion;
@property(readonly, nonatomic) NSString *releaseType; // @dynamic releaseType;
@property(readonly, nonatomic) NSNumber *retried; // @dynamic retried;
@property(readonly, nonatomic) NSNumber *seqNum; // @dynamic seqNum;
@property(readonly, nonatomic) NSArray *snapIds; // @dynamic snapIds;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end
