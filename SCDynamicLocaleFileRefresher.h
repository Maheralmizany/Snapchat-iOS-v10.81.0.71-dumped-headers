//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocaleFileRefresher-Protocol.h"

@class NSString, SCBehaviorSubject, SCQueuePerformer;
@protocol SCDynamicLocaleBundle, SCLocaleBundleProvider, SCLocaleFileDataFetcher, SCLocaleFileDownloader;

@interface SCDynamicLocaleFileRefresher : NSObject <SCLocaleFileRefresher>
{
    id <SCLocaleFileDownloader> _fileDownloader;
    id <SCDynamicLocaleBundle> _dynamicLocaleBundle;
    id <SCLocaleFileDataFetcher> _localeDataFetcher;
    id <SCLocaleBundleProvider> _bundleProvider;
    SCQueuePerformer *_performer;
    NSString *_locale;
    _Bool _downloadStarted;
    SCBehaviorSubject *_dynamicLocaleEvents;
}

- (void).cxx_destruct;
- (void)_downloadLocalFailed;
- (void)_persisLocaleContents:(id)arg1 localeURL:(id)arg2;
- (_Bool)_isDownloadRequired:(id)arg1;
- (void)downloadCurrentLocale;
- (id)initWithFileDownloader:(id)arg1 localeDataFetcher:(id)arg2 dynamicLocaleBundle:(id)arg3 bundleProvider:(id)arg4 locale:(id)arg5 dynamicLocaleEvents:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

