//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapKitVerifyLogging-Protocol.h"

@class NSString;

@interface SCSnapKitVerifyLogger : NSObject <SCSnapKitVerifyLogging>
{
    NSString *_kitAppId;
    NSString *_clientId;
    long long _kitType;
    NSString *_kitVersion;
    NSString *_sessionId;
    NSString *_userNumber;
    _Bool _isReverify;
}

- (void).cxx_destruct;
- (long long)actionFromNumber;
- (void)logEvent:(long long)arg1 actionType:(long long)arg2;
- (void)logEvent:(long long)arg1 actionType:(long long)arg2 errorMessage:(id)arg3;
- (void)_addBaseInfoToEvent:(id)arg1;
- (void)logPasswordError:(id)arg1;
- (void)logPasswordCancel;
- (void)logPasswordSuccess;
- (void)logPasswordBegin;
- (void)logPhoneVerifyError:(id)arg1;
- (void)logPhoneVerifySuccess;
- (void)logPhoneVerifyAuthorize;
- (void)logPhoneVerifyCancel;
- (void)logPhoneVerifyView;
- (void)logAuthorizeError:(id)arg1;
- (void)logAuthorizeSuccess;
- (void)logAuthorizeAuthorize;
- (void)logAuthorizeCancel;
- (void)logAuthorizeView;
- (void)logVerifyError:(id)arg1;
- (void)logVerifySuccess;
- (void)logVerifyAuthorize;
- (void)logVerifyCancel;
- (void)logVerifyMatch;
- (void)logVerifyBegin;
- (void)isReverify:(_Bool)arg1;
- (id)initWithClientID:(id)arg1 kitType:(long long)arg2 kitVersion:(id)arg3 kitAppID:(id)arg4 sessionId:(id)arg5 userNumber:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

