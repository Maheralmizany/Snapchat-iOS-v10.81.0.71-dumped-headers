//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerRequestProviderProtocol-Protocol.h"

@class NSArray, NSString, SCDisposableObserver, SCLensExplorerEventsControllerManager;
@protocol SCLensUserProvider, SCPerforming, SCSnapTokenProvider;

@interface SCLensExplorerRequestProvider : NSObject <SCLensExplorerRequestProviderProtocol>
{
    SCLensExplorerEventsControllerManager *_eventsControllerManager;
    NSArray *_lensesIdsInCarousel;
    SCDisposableObserver *_activeLensOrderDisposableObserver;
    id <SCLensUserProvider> _lensUserProvider;
    id <SCPerforming> _performer;
    NSString *_endpoint;
    NSString *_batchEndpoint;
    id <SCSnapTokenProvider> _snapTokenProvider;
}

- (void).cxx_destruct;
- (id)_baseRequestWithStoriesRequest:(id)arg1 endpoint:(id)arg2 service:(id)arg3;
- (id)_baseRequestWithStoriesRequest:(id)arg1 endpoint:(id)arg2;
- (id)_commonParameters;
- (id)_baseStoriesRequestWithSearchQuery:(id)arg1 streamToken:(id)arg2;
- (id)categoriesBatchRequest;
- (id)lensesRequestWithQuery:(id)arg1 streamToken:(id)arg2;
- (id)initWithEventsControllerManager:(id)arg1 lensUserProvider:(id)arg2 activeLensOrderObservable:(id)arg3 endpoint:(id)arg4 batchEndpoint:(id)arg5 snapTokenProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

