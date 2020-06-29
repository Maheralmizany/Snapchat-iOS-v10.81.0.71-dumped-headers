//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"

@class NSString;

@interface SCOnDemandGeofilterDataControllerListenerAnnouncer : NSObject <SCOnDemandGeofilterDataControllerListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCOnDemandGeofilterDataControllerListener>, std::__1::allocator<__weak id<SCOnDemandGeofilterDataControllerListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dataController:(id)arg1 didFetchStylizedTextList:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchAssetDraftList:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didResubmitCreativeForLineItem:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didResubmitLineItem:(id)arg2 success:(_Bool)arg3 autoApproved:(_Bool)arg4 error:(id)arg5;
- (void)dataController:(id)arg1 didSubmitGeofilterWithId:(id)arg2 success:(_Bool)arg3 approved:(_Bool)arg4 error:(id)arg5;
- (void)dataController:(id)arg1 didFetchOffer:(id)arg2 success:(_Bool)arg3 validationErrors:(id)arg4;
- (void)dataController:(id)arg1 didUploadAssetMetadata:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOnDemandGeofilterTemplates:(id)arg2 productType:(long long)arg3 filterType:(unsigned long long)arg4 success:(_Bool)arg5;
- (void)dataController:(id)arg1 didFetchOnDemandGeofilterTemplates:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchLineItem:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchMyGeofilters:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOfferedInventory:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchODGUser:(id)arg2 success:(_Bool)arg3 authorizationFailure:(id)arg4;
- (void)dataController:(id)arg1 didUpdateCurrentEditingLineItem:(id)arg2 shouldUpdatePrice:(_Bool)arg3;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

