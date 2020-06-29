//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUCommerceErrorResponse-Protocol.h"

@class NSNumber, NSString;

@interface SOJUCommerceErrorResponse : SCSojuMessage <SOJUCommerceErrorResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithCode:(id)arg1 message:(id)arg2 isFakeError:(id)arg3 isRetryable:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSString *code; // @dynamic code;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isFakeError; // @dynamic isFakeError;
@property(readonly, nonatomic) NSNumber *isRetryable; // @dynamic isRetryable;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly) Class superclass;

@end

