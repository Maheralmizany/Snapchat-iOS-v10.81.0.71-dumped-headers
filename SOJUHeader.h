//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUHeader-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUSignedPayload;

@interface SOJUHeader : SCSojuMessage <SOJUHeader>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithFrom:(id)arg1 to:(id)arg2 convId:(id)arg3 isv3:(id)arg4 auth:(id)arg5 connSeqNum:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) SOJUSignedPayload *auth; // @dynamic auth;
@property(readonly, nonatomic) NSNumber *connSeqNum; // @dynamic connSeqNum;
@property(readonly, nonatomic) NSString *convId; // @dynamic convId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *from; // @dynamic from;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isv3; // @dynamic isv3;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *to; // @dynamic to;

@end

