//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSecurityGetAssertionRequest-Protocol.h"

@class NSString;

@interface SOJUSecurityGetAssertionRequest : SCSojuMessage <SOJUSecurityGetAssertionRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithPurpose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *purpose; // @dynamic purpose;
@property(readonly) Class superclass;

@end

