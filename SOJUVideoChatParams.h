//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUVideoChatParams-Protocol.h"

@class NSString;

@interface SOJUVideoChatParams : SCSojuMessage <SOJUVideoChatParams>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithMac:(id)arg1 token:(id)arg2 scopeId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *mac; // @dynamic mac;
@property(readonly, nonatomic) NSString *scopeId; // @dynamic scopeId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *token; // @dynamic token;

@end
