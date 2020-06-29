//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLogoutInterceptor-Protocol.h"

@class NSString, SCLazy;

@interface SCOneTapLoginLogoutInterceptor : NSObject <SCLogoutInterceptor>
{
    NSString *_userId;
    NSString *_username;
    SCLazy *_oneTapLoginLogger;
    SCLazy *_oneTapLoginRegistry;
    _Bool _enableOneTapLoginExperience;
}

- (void).cxx_destruct;
- (void)_oneTapLoginOptInAlertDeclined;
- (void)_oneTapLoginOptInAlertConfirmed;
- (void)interceptLogoutWithCompletionBlock:(CDUnknownBlockType)arg1 uiContainer:(id)arg2;
- (id)initWithUserId:(id)arg1 username:(id)arg2 oneTapLoginLogger:(id)arg3 oneTapLoginRegistry:(id)arg4 enableOneTapLoginExperience:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

