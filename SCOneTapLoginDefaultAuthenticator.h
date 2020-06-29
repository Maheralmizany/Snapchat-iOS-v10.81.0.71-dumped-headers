//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOneTapLoginAuthenticator-Protocol.h"

@class SCFideliusLoggedOutManager, SCLazy, SCLoginStateTransitionLogger, SCSystemNetworkServices;
@protocol SCEndpointDeviceIDManager, SCOneTapLoginRepository;

@interface SCOneTapLoginDefaultAuthenticator : NSObject <SCOneTapLoginAuthenticator>
{
    id <SCOneTapLoginRepository> _oneTapLoginRepository;
    SCSystemNetworkServices *_networkServices;
    id <SCEndpointDeviceIDManager> _deviceIdManager;
    SCFideliusLoggedOutManager *_fideliusLoggedOutManager;
    SCLoginStateTransitionLogger *_loginStateTransitionLogger;
    SCLazy *_lazyOneTapLoginLogger;
}

- (void).cxx_destruct;
- (void)_logAuthenticationFailureReason:(unsigned long long)arg1;
- (void)_handleLoginSuccess:(id)arg1 tempIdentity:(id)arg2 username:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)authenticateWithConfirmedReactivation:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)removeOneTapLoginToken;
- (void)removeOneTapLogin;
- (id)initWithOneTapLoginRepository:(id)arg1 networkServices:(id)arg2 deviceIdManager:(id)arg3 fideliusLoggedOutManager:(id)arg4 loginStateTransitionLogger:(id)arg5 lazyOneTapLoginLogger:(id)arg6;

@end

