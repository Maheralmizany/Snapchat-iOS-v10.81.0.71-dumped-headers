//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAsyncOperation.h"

#import "NSCopying-Protocol.h"

@class NSError, NSOperationQueue, SPResourcesOperation, SPScenarioAllResourcesModel;

@interface SPScenarioAllResourcesOperation : SPAsyncOperation <NSCopying>
{
    SPScenarioAllResourcesModel *_resourcesModel;
    NSError *_error;
    SPResourcesOperation *_mainResourcesOperation;
    SPResourcesOperation *_fontResourcesOperation;
    NSOperationQueue *_queue;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SPResourcesOperation *fontResourcesOperation; // @synthesize fontResourcesOperation=_fontResourcesOperation;
@property(retain, nonatomic) SPResourcesOperation *mainResourcesOperation; // @synthesize mainResourcesOperation=_mainResourcesOperation;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SPScenarioAllResourcesModel *resourcesModel; // @synthesize resourcesModel=_resourcesModel;
- (void).cxx_destruct;
- (void)_finishWithFilesystemPath:(id)arg1 fontPath:(id)arg2 settingsModel:(id)arg3 fullSizeResourcesPath:(id)arg4;
- (void)_finishWithError:(id)arg1;
- (void)cancel;
- (void)start;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMainResourcesOperation:(id)arg1 fontResourcesOperation:(id)arg2;

@end
