//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityDeepLinkRequest-Protocol.h"

@class NSString;

@interface SOJUIdentityDeepLinkRequest : SCSojuMessage <SOJUIdentityDeepLinkRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 deepLinkAction:(id)arg4 friendUsername:(id)arg5 linkId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *deepLinkAction; // @dynamic deepLinkAction;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *friendUsername; // @dynamic friendUsername;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *linkId; // @dynamic linkId;
@property(readonly, nonatomic) NSString *reqToken; // @dynamic reqToken;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end

