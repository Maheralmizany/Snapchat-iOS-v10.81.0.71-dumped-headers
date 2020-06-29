//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLens, SCLensEffectActivatorConfiguration;

@protocol SCLensEffectActivationManager <NSObject>
- (void)resetCurrentApplyingLens;
- (void)clearCurrentLens;
- (void)activateLens:(SCLens *)arg1 configuration:(SCLensEffectActivatorConfiguration *)arg2 completion:(void (^)(unsigned long long, NSError *))arg3;
- (void)activateLens:(SCLens *)arg1 configuration:(SCLensEffectActivatorConfiguration *)arg2 setLensCompletion:(void (^)(long long, NSError *))arg3 imageOverlayCompletion:(void (^)(_Bool, NSError *))arg4 completion:(void (^)(unsigned long long, NSError *))arg5;
@end

