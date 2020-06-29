//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityMischiefExParticipant-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentityMischiefExParticipant : SCSojuMessage <SOJUIdentityMischiefExParticipant>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 display:(id)arg3 mischiefVersion:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *display; // @dynamic display;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *mischiefVersion; // @dynamic mischiefVersion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end

