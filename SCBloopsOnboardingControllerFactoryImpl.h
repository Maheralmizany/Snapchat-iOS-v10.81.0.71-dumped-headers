//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsOnboardingControllerFactory-Protocol.h"

@class NSString, SCExperimentManager, SCLazy;

@interface SCBloopsOnboardingControllerFactoryImpl : NSObject <SCBloopsOnboardingControllerFactory>
{
    SCLazy *_targetsService;
    SCLazy *_bloopsAPI;
    SCLazy *_onboardingResourcesService;
    SCLazy *_userInfoProvider;
    SCLazy *_previewsResourcesService;
    SCLazy *_remoteSettingsProvider;
    SCLazy *_categoriesProvider;
    SCLazy *_secondTargetIdsProvider;
    SCExperimentManager *_experimentManager;
    unsigned long long _lightOnboardingType;
}

- (void).cxx_destruct;
- (id)createOnboardingController;
- (id)initWithUserInfoProvider:(id)arg1 bloopsAPI:(id)arg2 remoteSettingsProvider:(id)arg3 targetsService:(id)arg4 onboardingResourcesService:(id)arg5 previewsResourcesService:(id)arg6 categoriesProvider:(id)arg7 secondTargerProvider:(id)arg8 experimentManager:(id)arg9 lightOnboardingType:(unsigned long long)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

