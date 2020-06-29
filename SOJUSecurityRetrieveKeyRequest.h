//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSecurityRetrieveKeyRequest-Protocol.h"

@class NSString;

@interface SOJUSecurityRetrieveKeyRequest : SCSojuMessage <SOJUSecurityRetrieveKeyRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithAssertion:(id)arg1 auth:(id)arg2 signedNonce:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *assertion; // @dynamic assertion;
@property(readonly, nonatomic) NSString *auth; // @dynamic auth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *signedNonce; // @dynamic signedNonce;
@property(readonly) Class superclass;

@end

