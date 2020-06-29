//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadHandler-Protocol.h"

@class NSString, SCChatV3MetadataStore;
@protocol SCChatRequestManager;

@interface SCChatURLThumbnailDownloadHandler : NSObject <SCChatMediaDownloadHandler>
{
    id <SCChatRequestManager> _chatRequestManager;
    SCChatV3MetadataStore *_metadataStore;
}

- (void).cxx_destruct;
- (void)downloadItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithChatRequestManager:(id)arg1 metadataStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

