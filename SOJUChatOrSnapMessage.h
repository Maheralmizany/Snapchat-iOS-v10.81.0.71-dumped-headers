//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUChatOrSnapMessage-Protocol.h"

@class NSString, SOJUCashTransaction, SOJUChatMessage, SOJUGenericSnap;

@interface SOJUChatOrSnapMessage : SCSojuMessage <SOJUChatOrSnapMessage>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSnap:(id)arg1 chatMessage:(id)arg2 cashTransaction:(id)arg3 iterToken:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) SOJUCashTransaction *cashTransaction; // @dynamic cashTransaction;
@property(readonly, nonatomic) SOJUChatMessage *chatMessage; // @dynamic chatMessage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *iterToken; // @dynamic iterToken;
@property(readonly, nonatomic) SOJUGenericSnap *snap; // @dynamic snap;
@property(readonly) Class superclass;

@end

