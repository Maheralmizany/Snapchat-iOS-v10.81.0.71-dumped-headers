//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityCreateMischiefsRequest-Protocol.h"

@class NSArray, NSString;

@interface SOJUIdentityCreateMischiefsRequest : SCSojuMessage <SOJUIdentityCreateMischiefsRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 createMischiefRequests:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSArray *createMischiefRequests; // @dynamic createMischiefRequests;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *reqToken; // @dynamic reqToken;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end

