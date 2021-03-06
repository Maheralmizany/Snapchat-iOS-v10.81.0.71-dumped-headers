//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsPreviewsResourcesService-Protocol.h"

@class NSError, NSOperationQueue, NSString, SCBloopsPreviewResourcesPathes, SCBloopsRemoteSettingsProvider, SCLazy;
@protocol SCBloopsPreviewsResourcesServiceOutput;

@interface SCBloopsPreviewsResourcesServiceImpl : NSObject <SCBloopsPreviewsResourcesService>
{
    SCBloopsRemoteSettingsProvider *_remoteSettingsProvider;
    SCLazy *_contentDelivery;
    SCLazy *_categoriesProvider;
    SCBloopsPreviewResourcesPathes *_resourcesPathes;
    unsigned long long _tryCount;
    unsigned long long _stickersTryCount;
    _Bool _isLensBeautificationExperimentEnabled;
    NSOperationQueue *_resourceObtainQueue;
    id <SCBloopsPreviewsResourcesServiceOutput> _output;
    long long _state;
    long long _stickersState;
    NSError *_stickersError;
    NSString *_onboardingBloopsJSON;
    NSError *_error;
    SCLazy *_targetsService;
    SCLazy *_bloopsAPI;
}

@property(nonatomic) __weak SCLazy *bloopsAPI; // @synthesize bloopsAPI=_bloopsAPI;
@property(retain, nonatomic) SCLazy *targetsService; // @synthesize targetsService=_targetsService;
@property(readonly, copy, nonatomic) NSString *onboardingBloopsJSON; // @synthesize onboardingBloopsJSON=_onboardingBloopsJSON;
@property(nonatomic) __weak id <SCBloopsPreviewsResourcesServiceOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (id)_resourceOperationForPath:(id)arg1 possibleErrorCode:(unsigned long long)arg2;
- (id)_configAndTargetOperation;
- (id)_resourcesOperationsForPathes:(id)arg1;
- (void)_obtainResourceFromURL:(id)arg1 possibleErrorCode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_obtainResourcesWithPathes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainStickersOnboardingHomeTabResources:(CDUnknownBlockType)arg1;
- (void)obtainStickersOnboardingCellResources:(CDUnknownBlockType)arg1;
- (void)obtainLightOnboardingEmptyFriendsVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)obtainGenderSelectionImagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)obtainOnboardingVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)obtainEmptyFaceSlidingVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)obtainEmptyFaceHorizontalVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)obtainEmptyFaceVerticalVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)tryToPrepareStickerResources;
- (void)tryToPrepareResources;
- (id)errorDomain;
@property(retain, nonatomic) NSError *stickersError; // @synthesize stickersError=_stickersError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long stickersState; // @synthesize stickersState=_stickersState;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)initWithRemoteSettingsProvider:(id)arg1 contentDelivery:(id)arg2 categoriesProvider:(id)arg3 lightOnboardingType:(unsigned long long)arg4 isLensBeautificationExperimentEnabled:(_Bool)arg5 fourColumnsLayoutEnabled:(_Bool)arg6 onboardingButtonType:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

