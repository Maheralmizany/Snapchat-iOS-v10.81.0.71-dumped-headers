//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFilePresenter-Protocol.h"

@class NSOperationQueue, NSSet, NSString, NSURL;
@protocol SCExtensionSharedFileDelegate;

@interface SCExtensionSharedFile : NSObject <NSFilePresenter>
{
    _Bool _autoCreateDirectory;
    id <SCExtensionSharedFileDelegate> _delegate;
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
}

+ (_Bool)fileExistsForUserId:(id)arg1 filename:(id)arg2;
@property(retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(retain, nonatomic) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(nonatomic) __weak id <SCExtensionSharedFileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteFileWithError:(id *)arg1;
- (id)readData;
- (_Bool)fileExists;
- (void)copyDataFromURL:(id)arg1 error:(id *)arg2;
- (void)modifyDataWithModificationBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)_appendDataToFile:(id)arg1 withData:(id)arg2 sizeLimit:(unsigned long long)arg3;
- (void)appendData:(id)arg1 withSizeLimit:(unsigned long long)arg2;
- (id)writeData:(id)arg1;
- (void)presentedItemDidChange;
- (void)_createFileIfNeeded;
- (void)dealloc;
- (id)initFileWithDirectoryUrl:(id)arg1 filename:(id)arg2 delegate:(id)arg3;
- (id)initUserScopedFileWithUserId:(id)arg1 filename:(id)arg2 delegate:(id)arg3;
- (id)initWithName:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

