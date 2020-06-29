//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadHandler-Protocol.h"

@class NSString, SCChatV3MetadataStore, SCExperimentManager, SCLazy, SCSessionRequestManager;
@protocol SCChatLogger, SCChatRequestManager;

@interface SCChatSearchStoryDownloadHandler : NSObject <SCChatMediaDownloadHandler>
{
    id <SCChatRequestManager> _chatRequestManager;
    SCChatV3MetadataStore *_metadataStore;
    id <SCChatLogger> _logger;
    SCExperimentManager *_experimentManager;
    SCSessionRequestManager *_requestManager;
    SCLazy *_snapTokenProvider;
}

- (void).cxx_destruct;
- (void)downloadItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithChatRequestManager:(id)arg1 metadataStore:(id)arg2 messageStateHandler:(id)arg3 mediaStateManager:(id)arg4 experimentManager:(id)arg5 requestManager:(id)arg6 snapTokenProvider:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

