//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPScenariosAPI-Protocol.h"

@class NSOperationQueue, NSString, SPConfigCache;
@protocol OS_dispatch_queue, SPDataLoaderService, SPExternalSettingsProvider, SPFileManager, SPGZipArchiver, SPSettings, SPStringsProvider;

@interface SPScenariosAPIImplementation : NSObject <SPScenariosAPI>
{
    id <SPSettings> _settings;
    id <SPDataLoaderService> _dataLoader;
    id <SPFileManager> _fileManager;
    id <SPGZipArchiver> _archiver;
    id <SPStringsProvider> _stringsProvider;
    id <SPExternalSettingsProvider> _externalSettingsProvider;
    SPConfigCache *_configCache;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSOperationQueue *_downloadingQueue;
}

@property(retain, nonatomic) NSOperationQueue *downloadingQueue; // @synthesize downloadingQueue=_downloadingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(retain, nonatomic) SPConfigCache *configCache; // @synthesize configCache=_configCache;
@property(retain, nonatomic) id <SPExternalSettingsProvider> externalSettingsProvider; // @synthesize externalSettingsProvider=_externalSettingsProvider;
@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(retain, nonatomic) id <SPGZipArchiver> archiver; // @synthesize archiver=_archiver;
@property(retain, nonatomic) id <SPFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) id <SPDataLoaderService> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)_clearConfig;
- (id)_configFromPath:(id)arg1 resourcesLocalPaths:(id)arg2 error:(id *)arg3;
- (void)_completeProcessConfigAtLocation:(id)arg1 config:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processConfigAtLocation:(id)arg1 resourcesLocalPaths:(id)arg2 response:(id)arg3 withError:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)clearConfig;
- (void)obtainConfigFromDiskWithResourcesLocalPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateConfigWithUrlPath:(id)arg1 resourcesLocalPaths:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
