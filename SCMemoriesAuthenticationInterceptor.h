//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCMemoriesAuthenticationInterceptor : NSObject
{
    unsigned long long _context;
}

+ (id)interceptorForRegistration;
+ (id)interceptorForLogin;
- (void)_doShowMemoriesPendingSyncAlertWithDescription:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showMemoriesPendingSyncAlertWithDescription:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)interceptLogInWithUsernameOrEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)shallInterceptLogInWithUsernameOrEmail:(id)arg1;
- (void)interceptRegistrationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)shallInterceptRegistration;
- (id)initWithContext:(unsigned long long)arg1;

@end
