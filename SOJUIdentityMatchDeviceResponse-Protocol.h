//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUIdentityMatchDeviceResponse <SCSojuMessage>
@property(readonly, nonatomic) NSString *metadata;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *referrer;
@property(readonly, nonatomic) NSString *userAgent;
@property(readonly, nonatomic) NSString *shareUuid;
@property(readonly, nonatomic) NSString *clickUuid;
@property(readonly, nonatomic) NSString *deeplinkUrl;
@property(readonly, nonatomic) NSNumber *matched;
@end
