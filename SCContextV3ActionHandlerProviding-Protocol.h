//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCContextV3ActionParams, SCObservable;
@protocol SCContextActionHandling, SCContextV3ActionHandling;

@protocol SCContextV3ActionHandlerProviding
- (id <SCContextV3ActionHandling>)createActionHandlerWithLegacyActionHandler:(id <SCContextActionHandling>)arg1 paramsObservable:(SCObservable *)arg2 supplementaryActionProvidersObservable:(SCObservable *)arg3;
- (id <SCContextV3ActionHandling>)createActionHandlerWithLegacyActionHandler:(id <SCContextActionHandling>)arg1 params:(SCContextV3ActionParams *)arg2;
- (id <SCContextV3ActionHandling>)createActionHandlerWithLegacyActionHandler:(id <SCContextActionHandling>)arg1 paramsObservable:(SCObservable *)arg2;
@end

