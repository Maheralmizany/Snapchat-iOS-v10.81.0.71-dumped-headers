//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUserSessionInit-Protocol.h"

@class NSString;

@interface SOJUUserSessionInit : SCSojuMessage <SOJUUserSessionInit>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUserId:(id)arg1 snapadsId:(id)arg2 lagunaId:(id)arg3 authToken:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSString *authToken; // @dynamic authToken;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lagunaId; // @dynamic lagunaId;
@property(readonly, nonatomic) NSString *snapadsId; // @dynamic snapadsId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userId; // @dynamic userId;

@end
