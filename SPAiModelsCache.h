//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPGenericCache-Protocol.h"

@class NSString, SPCacheControllerImplementation;
@protocol SPFileManager;

@interface SPAiModelsCache : NSObject <SPGenericCache>
{
    id <SPFileManager> _fileManager;
    SPCacheControllerImplementation *_fileCache;
}

@property(retain, nonatomic) SPCacheControllerImplementation *fileCache; // @synthesize fileCache=_fileCache;
@property(retain, nonatomic) id <SPFileManager> fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (void)clearAll;
- (void)commitStagingPath:(id)arg1;
- (id)getStagingPath:(id)arg1;
- (id)getCommitedPath:(id)arg1;
- (_Bool)cacheCommited:(id)arg1;
- (void)clearEverythingExcept:(id)arg1;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

