//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCContextOperaLayerViewController, SCContextV3OperaActionPerformerScope, SCLazy, SCMultiScopeExposer, SCObservable, SCOperaPage, SCUserSession;
@protocol SCContextPresenting;

@interface SCContextOperaLayerV3InteropProvider : NSObject
{
    SCContextOperaLayerViewController *_viewController;
    SCUserSession *_userSession;
    id <SCContextPresenting> _presenter;
    SCOperaPage *_operaPage;
    _Bool _hasPublished;
    SCLazy *_ctaParamsBehaviorSubject;
    SCLazy *_paramsBehaviorSubject;
    SCContextV3OperaActionPerformerScope *_actionPerformerScope;
    SCMultiScopeExposer *_operaActionPerformerProviderScopeExposer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCObservable *paramsObservable;
@property(readonly, nonatomic) SCObservable *ctaParamsObservable;
- (void)removeActionPerformerScope;
- (id)exposeActionPerformerScopeIfNeccessary;
- (id)createActionHandler;
- (void)publishIfNeccessary;
- (void)setPresenter:(id)arg1 operaPage:(id)arg2;
- (id)initWithViewController:(id)arg1 operaActionPerformerProviderScopeExposer:(id)arg2 userSession:(id)arg3;

@end
