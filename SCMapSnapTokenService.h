//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCSessionRequestManager;

@interface SCMapSnapTokenService : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
    SCLazy *_snapTokenProvider;
    _Bool _isEmployee;
}

@property(readonly, nonatomic) _Bool isEmployee; // @synthesize isEmployee=_isEmployee;
- (void).cxx_destruct;
- (id)submitRequestWithAccessType:(unsigned long long)arg1 url:(id)arg2 additionalHeaders:(id)arg3 proto:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 requestType:(long long)arg8 requestTimeoutInterval:(double)arg9 responseClass:(Class)arg10 completionQueue:(id)arg11 completion:(CDUnknownBlockType)arg12;
- (id)submitRequestWithAccessType:(unsigned long long)arg1 url:(id)arg2 proto:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 requestType:(long long)arg7 requestTimeoutInterval:(double)arg8 responseClass:(Class)arg9 completionQueue:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (id)submitRequestWithAccessType:(unsigned long long)arg1 url:(id)arg2 additionalHeaders:(id)arg3 proto:(id)arg4 key:(id)arg5 contexts:(id)arg6 responseClass:(Class)arg7 completionQueue:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)submitRequestWithAccessType:(unsigned long long)arg1 url:(id)arg2 proto:(id)arg3 key:(id)arg4 contexts:(id)arg5 responseClass:(Class)arg6 completionQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithSessionRequestManager:(id)arg1 snapTokenProvider:(id)arg2 isEmployee:(_Bool)arg3;
- (void)reportCheckinOption:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteCheckinOption:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addCheckin:(id)arg1 completionQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)completeCheckinOnboarding:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCheckinOptions:(id)arg1 completionQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)submitBatchExplorerViewsRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteExploreStatus:(id)arg1 userId:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchMyExploreStatusesOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchExploreStatusesOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchMapBestFriends:(CDUnknownBlockType)arg1;
- (void)deleteGameMarker:(id)arg1 reason:(id)arg2 callbackQueue:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)clearGameState;
- (void)fetchAcquiredGameMarkersOnQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)acquireGameMarker:(id)arg1 withPointValue:(int)arg2 callbackQueue:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)fetchCurrentGameStateOnQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_submitGameServerRequestWithEndpoint:(id)arg1 proto:(id)arg2 responseClass:(Class)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendLocationUpdate:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendOrbisStoriesRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendOrbisPreviewsRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendViewportInfoRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchNestedDocumentWithEndpoint:(id)arg1 headers:(id)arg2 snapTokenType:(unsigned long long)arg3 requestType:(id)arg4 requestParams:(id)arg5 userInfo:(id)arg6 completionQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)fetchStoryManifestWithEndpoint:(id)arg1 headers:(id)arg2 snapTokenType:(unsigned long long)arg3 token:(id)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)batchRequestCTAWithEndpoint:(id)arg1 headers:(id)arg2 snapTokenType:(unsigned long long)arg3 CTAData:(id)arg4 isPreload:(_Bool)arg5 userInfo:(id)arg6 completionQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)fetchComposerViewWithEndpoint:(id)arg1 headers:(id)arg2 snapTokenType:(unsigned long long)arg3 contextInfo:(id)arg4 viewerContentInfo:(id)arg5 snapIdentity:(id)arg6 userInfo:(id)arg7 completionQueue:(id)arg8 completion:(CDUnknownBlockType)arg9;

@end

