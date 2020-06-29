//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMPEventFieldProvider-Protocol.h"
#import "SCUserProtocol-Protocol.h"

@class NSString;
@protocol SCUserInfoProvider;

@interface SCEventFieldProvider : NSObject <AMPEventFieldProvider, SCUserProtocol>
{
    NSString *_cachedLanguageId;
    id <SCUserInfoProvider> _userInfoProvider;
    CDUnknownBlockType _appStartupStateProvider;
}

@property(copy, nonatomic) CDUnknownBlockType appStartupStateProvider; // @synthesize appStartupStateProvider=_appStartupStateProvider;
- (void).cxx_destruct;
- (long long)appStartupType;
- (id)linkId;
- (long long)deeplinkSourceType;
- (_Bool)isAppOpenFromDeepLink;
- (id)clientId;
- (long long)connectionDownloadBandwidthBps;
- (id)userLocale;
- (_Bool)travelModeEnabled;
- (long long)connectivityType;
- (id)schemeName;
- (id)appVersion;
- (id)osVersion;
- (id)devicePlatform;
- (id)deviceModel;
- (id)userAgent;
- (_Bool)hasBitmoji;
- (id)userGuid;
- (id)userName;
- (_Bool)isLoggedIn;
- (id)initWithSCAppStartupStateProvider:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

