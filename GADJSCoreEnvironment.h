//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADJSCoreEnvironmentProtocol-Protocol.h"

@class GADJSCoreConsole, GADJSCoreInterface, GADJSCoreLocalStorage, GADJSCoreNavigator, GADJSCorePinger, GADJSCoreTimers, NSString;

@interface GADJSCoreEnvironment : NSObject <GADJSCoreEnvironmentProtocol>
{
    NSString *_environment;
    NSString *_platform;
    NSString *_sdkVersion;
    GADJSCoreNavigator *_navigator;
    GADJSCoreInterface *_googleAdsJsInterface;
    GADJSCoreConsole *_console;
    GADJSCoreTimers *_timers;
    GADJSCorePinger *_pinger;
    GADJSCoreLocalStorage *_localStorage;
}

@property(readonly, nonatomic) GADJSCoreLocalStorage *localStorage; // @synthesize localStorage=_localStorage;
@property(readonly, nonatomic) GADJSCorePinger *pinger; // @synthesize pinger=_pinger;
@property(readonly, nonatomic) GADJSCoreTimers *timers; // @synthesize timers=_timers;
@property(readonly, nonatomic) GADJSCoreConsole *console; // @synthesize console=_console;
@property(readonly, nonatomic) GADJSCoreInterface *googleAdsJsInterface; // @synthesize googleAdsJsInterface=_googleAdsJsInterface;
@property(readonly, nonatomic) GADJSCoreNavigator *navigator; // @synthesize navigator=_navigator;
@property(readonly, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)init;
- (id)initWithJSCoreJSContext:(id)arg1 eventContext:(id)arg2;

@end

