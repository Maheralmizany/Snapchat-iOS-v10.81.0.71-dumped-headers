//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCQueuePerformer, SCSessionRequestManager;

@interface SCSpectaclesOAuth2 : NSObject <SCUserSessionScoped>
{
    _Bool _invalidated;
    NSString *_userId;
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
}

@property(readonly, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void).cxx_destruct;
- (void)_implicitApprovalForApprovalToken:(id)arg1 state:(id)arg2 codeVerifier:(id)arg3 redirectUri:(id)arg4 completionPerformer:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_handleOAuth2NetworkErrorForEndpoint:(id)arg1 errorCode:(unsigned long long)arg2 completionPerformer:(id)arg3 responseData:(id)arg4 error:(id)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)fetchRefreshTokenWithClientId:(id)arg1 authzCode:(id)arg2 codeVerifier:(id)arg3 redirectUri:(id)arg4 completionPerformer:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)fetchNewTokensWithClientId:(id)arg1 completionPerformer:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 useDevScope:(_Bool)arg5;
- (void)invalidate;
- (id)initWithUserId:(id)arg1 requestManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

