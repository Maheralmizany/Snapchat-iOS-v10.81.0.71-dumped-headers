//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextLoggerProviding-Protocol.h"

@class NSString, SCLazy;
@protocol SCContextV2UserInfoProvider;

@interface SCContextV2LoggerProvider : NSObject <SCContextLoggerProviding>
{
    id <SCContextV2UserInfoProvider> _userInfoProvider;
    SCLazy *_snapchatterFetcher;
}

- (void).cxx_destruct;
- (id)restoreLoggerForSessionId:(id)arg1 sourceType:(long long)arg2 contextMenuLocation:(long long)arg3 sourceMediaType:(long long)arg4 snapIdentity:(id)arg5 snapContextInfo:(id)arg6 storyType:(long long)arg7 storyTypeSpecific:(long long)arg8;
- (id)createLoggerWithSourceType:(long long)arg1 contextMenuLocation:(long long)arg2 sourceMediaType:(long long)arg3 snapIdentity:(id)arg4 snapContextInfo:(id)arg5 storyType:(long long)arg6 storyTypeSpecific:(long long)arg7;
- (id)initWithUserInfoProvider:(id)arg1 snapchatterFetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

