//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPFileManager-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface SPFileManagerImplementation : NSObject <SPFileManager>
{
    NSObject<OS_dispatch_queue> *_fileManagerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileManagerQueue; // @synthesize fileManagerQueue=_fileManagerQueue;
- (void).cxx_destruct;
- (unsigned long long)fileSizeSync:(id)arg1;
- (id)folderChildrenSync:(id)arg1 error:(id)arg2;
- (_Bool)archiveRootObjectSync:(id)arg1 toFile:(id)arg2;
- (void)saveUIImageAsFile:(id)arg1 withPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveNSDataAsFile:(id)arg1 withPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)createDirectorySync:(id)arg1 error:(id *)arg2;
- (_Bool)moveFileSyncAtPath:(id)arg1 toPath:(id)arg2 overwriteDstFile:(_Bool)arg3 error:(id *)arg4;
- (_Bool)removeFileSync:(id)arg1 error:(id *)arg2;
- (_Bool)fileExistsAtPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
