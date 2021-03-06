//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandResourceDownloader-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLazy;
@protocol SCContentResultDataFactory, SCContentResultUnzipper;

@interface SCBoltOnDemandResourceDownloader : NSObject <SCTraceEnabled, SCOnDemandResourceDownloader>
{
    SCLazy *_contentDeliver;
    id <SCContentResultDataFactory> _contentResultDataFactory;
    id <SCContentResultUnzipper> _contentResultUnzipper;
}

- (void).cxx_destruct;
- (id)_downloadRequestForResource:(id)arg1;
- (void)_retrieveResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_registerIfRequiredAndRetriveResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_unzipResource:(id)arg1 fromResult:(id)arg2;
- (void)downloadImage:(id)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)downloadAndUnzipAsImages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAndUnzip:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)download:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prefetch:(id)arg1;
- (id)initWithContentDelivery:(id)arg1 contentResultDataFactory:(id)arg2 contentResultUnzipper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

