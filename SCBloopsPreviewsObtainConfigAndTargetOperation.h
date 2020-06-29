//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBloopsAsyncOperation.h"

@class NSError, SCBloopsRemoteSettingsProvider, SCLazy;
@protocol SCBloopsTarget;

@interface SCBloopsPreviewsObtainConfigAndTargetOperation : SCBloopsAsyncOperation
{
    SCLazy *_categoriesProvider;
    SCLazy *_bloopsAPI;
    SCLazy *_targetsService;
    SCBloopsRemoteSettingsProvider *_remoteSettingsProvider;
    _Bool _isLensBeautificationExperimentEnabled;
    _Bool _success;
    id <SCBloopsTarget> _userTarget;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <SCBloopsTarget> userTarget; // @synthesize userTarget=_userTarget;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)_errorDomain;
- (void)_obtainUserTargetAndUpdateConfig:(CDUnknownBlockType)arg1;
- (void)_obtainConfig:(CDUnknownBlockType)arg1;
- (void)_obtainConfigAndCategories:(CDUnknownBlockType)arg1;
- (void)start;
- (id)initWithCategoriesProvider:(id)arg1 bloopsAPI:(id)arg2 targetService:(id)arg3 remoteSettingsProvider:(id)arg4 isLensBeautificationExperimentEnabled:(_Bool)arg5;

@end
