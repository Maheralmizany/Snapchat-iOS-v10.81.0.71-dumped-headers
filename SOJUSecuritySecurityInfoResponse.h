//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSecuritySecurityInfoResponse-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUSecuritySecurityInfoResponse : SCSojuMessage <SOJUSecuritySecurityInfoResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithCapricornNumber:(id)arg1 capricornEndpoints:(id)arg2 inAppReportMessageId:(id)arg3 inAppReportMessage:(id)arg4 capricornString:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSArray *capricornEndpoints; // @dynamic capricornEndpoints;
@property(readonly, nonatomic) NSNumber *capricornNumber; // @dynamic capricornNumber;
@property(readonly, nonatomic) NSString *capricornString; // @dynamic capricornString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *inAppReportMessage; // @dynamic inAppReportMessage;
@property(readonly, nonatomic) NSString *inAppReportMessageId; // @dynamic inAppReportMessageId;
@property(readonly) Class superclass;

@end

