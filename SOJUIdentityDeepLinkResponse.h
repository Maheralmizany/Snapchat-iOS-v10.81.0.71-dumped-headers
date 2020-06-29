//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUIdentityDeepLinkResponse-Protocol.h"

@class NSNumber, NSString, SOJUFriend, SOJUReceivedSnap;

@interface SOJUIdentityDeepLinkResponse : SCSojuMessage <SOJUIdentityDeepLinkResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithDeepLinkAction:(id)arg1 friendExists:(id)arg2 friend:(id)arg3 snap:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *deepLinkAction; // @dynamic deepLinkAction;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SOJUFriend *friend; // @dynamic friend;
@property(readonly, nonatomic) NSNumber *friendExists; // @dynamic friendExists;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUReceivedSnap *snap; // @dynamic snap;
@property(readonly) Class superclass;

@end

