//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCustomStoriesDataMutating-Protocol.h"

@class NSString, SCCustomStoriesNetworkRequester, SCCustomStoriesSOMANetworkRequester, SCLazy, SCUserSession;
@protocol SCLegacyCustomStoriesDataMutating, SCPerforming, SCStoriesBlizzardLogging;

@interface SCCustomStoriesDataMutator : NSObject <SCCustomStoriesDataMutating>
{
    SCCustomStoriesNetworkRequester *_customStoriesNetworkRequester;
    SCCustomStoriesSOMANetworkRequester *_customStoriesSOMANetworkRequester;
    SCUserSession *_userSession;
    SCLazy *_docObjectContext;
    id <SCStoriesBlizzardLogging> _storiesBlizzardLogger;
    id <SCPerforming> _performer;
    id <SCLegacyCustomStoriesDataMutating> _legacyDataMutator;
}

@property(retain, nonatomic) id <SCLegacyCustomStoriesDataMutating> legacyDataMutator; // @synthesize legacyDataMutator=_legacyDataMutator;
- (void).cxx_destruct;
- (void)_handleCreationResponse:(id)arg1 error:(id)arg2 metadata:(id)arg3 creationSource:(long long)arg4 completionQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_removeOrLeaveCustomStoryDidFinishWithPublicationId:(id)arg1 leaveType:(long long)arg2 success:(_Bool)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_handleCreatedCustomStoryWithCustomStoryId:(id)arg1 metadata:(id)arg2 creationSource:(long long)arg3;
- (void)_createCustomStoryDidSuccessWithResponse:(id)arg1 metadata:(id)arg2 creationSource:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)_updateCustomStoryDidFailWithResponseCode:(long long)arg1 publicationId:(id)arg2 originalDisplayName:(id)arg3 originalAutosaveTurnOn:(_Bool)arg4 originalPosterIdsPermitted:(id)arg5 originalViewerIdsPermitted:(id)arg6 failureBlock:(CDUnknownBlockType)arg7 callbackQueue:(id)arg8;
- (void)_updateCustomStoryDidSucceedWithResponse:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)updateLocalMyMostRecentPostTimestampWithCustomStoriesMetadata:(id)arg1;
- (void)createCustomStoryWithMetadata:(id)arg1 creationSource:(long long)arg2 completionQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_sendUpdateCustomStoryMetadataRequestWithMetadata:(id)arg1 originalDisplayName:(id)arg2 originalAutosaveTurnOn:(_Bool)arg3 originalPosterIdsPermitted:(id)arg4 originalViewerIdsPermitted:(id)arg5 completionQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)updateCustomStoryWithMetadata:(id)arg1 completionQueue:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)leaveCustomStoryWithPublicationId:(id)arg1 leaveByBlocking:(_Bool)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCustomStoryWithPublicationId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithCustomStoriesNetworkRequester:(id)arg1 customStoriesSOMANetworkRequester:(id)arg2 userSession:(id)arg3 docObjectContext:(id)arg4 storiesBlizzardLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

