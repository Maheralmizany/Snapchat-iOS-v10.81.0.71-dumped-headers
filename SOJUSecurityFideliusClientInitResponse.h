//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSecurityFideliusClientInitResponse-Protocol.h"

@class NSDictionary, NSString;

@interface SOJUSecurityFideliusClientInitResponse : SCSojuMessage <SOJUSecurityFideliusClientInitResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIwek:(id)arg1 friends:(id)arg2 hashedOutBeta:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *friends; // @dynamic friends;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *hashedOutBeta; // @dynamic hashedOutBeta;
@property(readonly, nonatomic) NSString *iwek; // @dynamic iwek;
@property(readonly) Class superclass;

@end

