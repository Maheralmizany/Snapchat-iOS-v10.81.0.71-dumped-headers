//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChangeLanguageInSettingsActionRecording-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLogger, SCPreferences;

@interface SCChangeLanguageInSettingsActionRecorder : NSObject <SCTraceEnabled, SCChangeLanguageInSettingsActionRecording>
{
    SCPreferences *_preferences;
    SCLogger *_logger;
    double _downloadingBeginTime;
}

- (void).cxx_destruct;
- (void)_logUserProfileUpdateEventWithFieldName:(long long)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)_logLanguageSwitchCompletedActionWithOldLocale:(id)arg1 newLocale:(id)arg2 downloadLatency:(double)arg3;
- (void)_logGoToSettingsActionWithCurrentLocale:(id)arg1 success:(_Bool)arg2;
- (void)languageDownloadDidCompleteWithNewLocale:(id)arg1;
- (void)languageDownloadDidBeginWithNewLocale:(id)arg1;
- (void)languageDidFoundInBundle:(id)arg1;
- (void)userCancelChangeLanguageWithCurrentLocale:(id)arg1;
- (void)userTapGoToSettingsCTAWithCurrentLocale:(id)arg1;
- (id)localeInLastAppSession;
- (id)initWithPreferences:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

