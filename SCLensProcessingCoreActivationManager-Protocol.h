//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCLens, SCLensEffectActivatorConfiguration;

@protocol SCLensProcessingCoreActivationManager
- (void)resetCurrentApplyingLensWithActivatorId:(NSString *)arg1;
- (void)clearCurrentLensWithActivatorId:(NSString *)arg1;
- (void)activateLens:(SCLens *)arg1 activatorId:(NSString *)arg2 configuration:(SCLensEffectActivatorConfiguration *)arg3 completion:(void (^)(unsigned long long, NSError *))arg4;
- (void)activateLens:(SCLens *)arg1 activatorId:(NSString *)arg2 configuration:(SCLensEffectActivatorConfiguration *)arg3 setLensCompletion:(void (^)(long long, NSError *))arg4 imageOverlayCompletion:(void (^)(_Bool, NSError *))arg5 completion:(void (^)(unsigned long long, NSError *))arg6;
- (void)unregisterActivatorWithId:(NSString *)arg1;
- (void)registerActivatorWithId:(NSString *)arg1;
@end

