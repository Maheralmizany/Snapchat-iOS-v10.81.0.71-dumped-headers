//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV3ActionHandlerProviding-Protocol.h"

@class SCObservable, SCUserSession;

@interface SCContextV3ActionHandlerProvider : NSObject <SCContextV3ActionHandlerProviding>
{
    SCObservable *_actionProvidersObservable;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_createActionHandlerWithLegacyActionHandler:(id)arg1 paramsObservable:(id)arg2 actionProvidersObservable:(id)arg3;
- (id)createActionHandlerWithLegacyActionHandler:(id)arg1 paramsObservable:(id)arg2 supplementaryActionProvidersObservable:(id)arg3;
- (id)createActionHandlerWithLegacyActionHandler:(id)arg1 params:(id)arg2;
- (id)createActionHandlerWithLegacyActionHandler:(id)arg1 paramsObservable:(id)arg2;
- (id)initWithActionProvidersObservable:(id)arg1 userSession:(id)arg2;

@end

