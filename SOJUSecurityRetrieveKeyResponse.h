//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSecurityRetrieveKeyResponse-Protocol.h"

@class NSNumber, NSString;

@interface SOJUSecurityRetrieveKeyResponse : SCSojuMessage <SOJUSecurityRetrieveKeyResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithKey:(id)arg1 rateLimitExpiration:(id)arg2 currentTimestamp:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSNumber *currentTimestamp; // @dynamic currentTimestamp;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *key; // @dynamic key;
@property(readonly, nonatomic) NSNumber *rateLimitExpiration; // @dynamic rateLimitExpiration;
@property(readonly) Class superclass;

@end

