//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCBloopsConverterFactory, SCBloopsFullscreenViewFactory;

@interface SCBloopsServices : NSObject
{
    SCLazy *_bloopsAPI;
    SCLazy *_reenactmentService;
    SCLazy *_onboardingResourcesService;
    id <SCBloopsConverterFactory> _bloopsConverterFactory;
    Class _previewsViewClass;
    Class _previewsStickersViewClass;
    SCLazy *_changeControllerFactory;
    SCLazy *_onboardingControllerFactory;
    id <SCBloopsFullscreenViewFactory> _fullscreenViewFactory;
    SCLazy *_pickerAccessoryFactory;
    SCLazy *_targetsService;
    SCLazy *_gesturesUtility;
    SCLazy *_friendBloopsPolicyTitleProvider;
    SCLazy *_exportPresenterFactory;
    SCLazy *_previewsViewLayoutFactory;
    SCLazy *_analyticsService;
    SCLazy *_searchIconProvider;
    SCLazy *_friendsBloopsCache;
    SCLazy *_categoriesProvider;
    SCLazy *_onboardingTooltipStateProvider;
    SCLazy *_previewStickersTooltipStateProvider;
    SCLazy *_lensProviderFactory;
    SCLazy *_lensDownloadableContentProvider;
    SCLazy *_customTextTooltipStateProvider;
    SCLazy *_previewStickersTooltipPresenter;
    SCLazy *_onboardingTooltipPresenter;
    Class _exportViewControllerClass;
    SCLazy *_pressHoldGuideStateProvider;
    SCLazy *_bloopsDataCoordinator;
    SCLazy *_stickersFactory;
    SCLazy *_bloopsStickerPickerAccessoryFactory;
    SCLazy *_stickersValidator;
}

@property(readonly, nonatomic) SCLazy *stickersValidator; // @synthesize stickersValidator=_stickersValidator;
@property(readonly, nonatomic) SCLazy *bloopsStickerPickerAccessoryFactory; // @synthesize bloopsStickerPickerAccessoryFactory=_bloopsStickerPickerAccessoryFactory;
@property(readonly, nonatomic) SCLazy *stickersFactory; // @synthesize stickersFactory=_stickersFactory;
@property(readonly, nonatomic) SCLazy *bloopsDataCoordinator; // @synthesize bloopsDataCoordinator=_bloopsDataCoordinator;
@property(readonly, nonatomic) SCLazy *pressHoldGuideStateProvider; // @synthesize pressHoldGuideStateProvider=_pressHoldGuideStateProvider;
@property(readonly, nonatomic) Class exportViewControllerClass; // @synthesize exportViewControllerClass=_exportViewControllerClass;
@property(readonly, nonatomic) SCLazy *onboardingTooltipPresenter; // @synthesize onboardingTooltipPresenter=_onboardingTooltipPresenter;
@property(readonly, nonatomic) SCLazy *previewStickersTooltipPresenter; // @synthesize previewStickersTooltipPresenter=_previewStickersTooltipPresenter;
@property(readonly, nonatomic) SCLazy *customTextTooltipStateProvider; // @synthesize customTextTooltipStateProvider=_customTextTooltipStateProvider;
@property(readonly, nonatomic) SCLazy *lensDownloadableContentProvider; // @synthesize lensDownloadableContentProvider=_lensDownloadableContentProvider;
@property(readonly, nonatomic) SCLazy *lensProviderFactory; // @synthesize lensProviderFactory=_lensProviderFactory;
@property(readonly, nonatomic) SCLazy *previewStickersTooltipStateProvider; // @synthesize previewStickersTooltipStateProvider=_previewStickersTooltipStateProvider;
@property(readonly, nonatomic) SCLazy *onboardingTooltipStateProvider; // @synthesize onboardingTooltipStateProvider=_onboardingTooltipStateProvider;
@property(readonly, nonatomic) SCLazy *categoriesProvider; // @synthesize categoriesProvider=_categoriesProvider;
@property(readonly, nonatomic) SCLazy *friendsBloopsCache; // @synthesize friendsBloopsCache=_friendsBloopsCache;
@property(readonly, nonatomic) SCLazy *searchIconProvider; // @synthesize searchIconProvider=_searchIconProvider;
@property(readonly, nonatomic) SCLazy *analyticsService; // @synthesize analyticsService=_analyticsService;
@property(readonly, nonatomic) SCLazy *previewsViewLayoutFactory; // @synthesize previewsViewLayoutFactory=_previewsViewLayoutFactory;
@property(readonly, nonatomic) SCLazy *exportPresenterFactory; // @synthesize exportPresenterFactory=_exportPresenterFactory;
@property(readonly, nonatomic) SCLazy *friendBloopsPolicyTitleProvider; // @synthesize friendBloopsPolicyTitleProvider=_friendBloopsPolicyTitleProvider;
@property(readonly, nonatomic) SCLazy *gesturesUtility; // @synthesize gesturesUtility=_gesturesUtility;
@property(readonly, nonatomic) SCLazy *targetsService; // @synthesize targetsService=_targetsService;
@property(readonly, nonatomic) SCLazy *pickerAccessoryFactory; // @synthesize pickerAccessoryFactory=_pickerAccessoryFactory;
@property(readonly, nonatomic) id <SCBloopsFullscreenViewFactory> fullscreenViewFactory; // @synthesize fullscreenViewFactory=_fullscreenViewFactory;
@property(readonly, nonatomic) SCLazy *onboardingControllerFactory; // @synthesize onboardingControllerFactory=_onboardingControllerFactory;
@property(readonly, nonatomic) SCLazy *changeControllerFactory; // @synthesize changeControllerFactory=_changeControllerFactory;
@property(readonly, nonatomic) Class previewsStickersViewClass; // @synthesize previewsStickersViewClass=_previewsStickersViewClass;
@property(readonly, nonatomic) Class previewsViewClass; // @synthesize previewsViewClass=_previewsViewClass;
@property(readonly, nonatomic) id <SCBloopsConverterFactory> bloopsConverterFactory; // @synthesize bloopsConverterFactory=_bloopsConverterFactory;
@property(readonly, nonatomic) SCLazy *onboardingResourcesService; // @synthesize onboardingResourcesService=_onboardingResourcesService;
@property(readonly, nonatomic) SCLazy *reenactmentService; // @synthesize reenactmentService=_reenactmentService;
@property(readonly, nonatomic) SCLazy *bloopsAPI; // @synthesize bloopsAPI=_bloopsAPI;
- (void).cxx_destruct;
- (id)initWithBloopsAPI:(id)arg1 reenactmentService:(id)arg2 onboardingResourcesService:(id)arg3 bloopsConverterFactory:(id)arg4 previewsViewClass:(Class)arg5 previewsStickersViewClass:(Class)arg6 changeControllerFactory:(id)arg7 onboardingControllerFactory:(id)arg8 fullscreenViewFactory:(id)arg9 targetsService:(id)arg10 pickerAccessoryFactory:(id)arg11 gesturesUtility:(id)arg12 friendBloopsPolicyTypeTitleProvider:(id)arg13 previewsViewLayoutFactory:(id)arg14 analyticsService:(id)arg15 searchIconProvider:(id)arg16 friendsBloopsCache:(id)arg17 categoriesProvider:(id)arg18 onboardingTooltipStateProvider:(id)arg19 customTextTooltipStateProvider:(id)arg20 previewStickersTooltipStateProvider:(id)arg21 onboardingTooltipPresenter:(id)arg22 previewStickersTooltipPresenter:(id)arg23 lensProviderFactory:(id)arg24 lensDownloadableContentProvider:(id)arg25 exportViewControllerClass:(Class)arg26 pressHoldGuideStateProvider:(id)arg27 bloopsDataCoordinator:(id)arg28 stickersFactory:(id)arg29 bloopsStickerPickerAccessoryFactory:(id)arg30 stickersValidator:(id)arg31;

@end

