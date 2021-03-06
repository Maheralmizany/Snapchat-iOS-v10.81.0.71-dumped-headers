//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCFeatureReference, SCLensInPreviewUsageNotifier, SCObservable, SCPreferences, SCPreviewConfiguration, SCSmartCarouselFilterArranger, SCSnapCommonLoggingParameters, SCSpectaclesAuxiliaryContentStore;
@protocol SCLensIconInMemoryCache, SCLensLogger, SCLensUIUpdateListener, SCPreviewLensDataProviderFactoryProtocol;

@interface SCSpectaclesLensInFilterPreviewFeatureInitializer : SCFeatureInitializer
{
    SCPreviewConfiguration *_previewConfiguration;
    SCLensInPreviewUsageNotifier *_lensInPreviewUsageNotifier;
    id <SCPreviewLensDataProviderFactoryProtocol> _lensDataProviderFactory;
    id <SCLensUIUpdateListener> _lensUIStateListener;
    SCSpectaclesAuxiliaryContentStore *_auxiliaryContentStore;
    SCFeatureReference *_swipeFilters;
    SCSmartCarouselFilterArranger *_filterArranger;
    id <SCLensLogger> _lensLogger;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCObservable *_applicationLifecycleEvents;
    SCPreferences *_userPreferences;
    SCPreferences *_lensPreferences;
    id <SCLensIconInMemoryCache> _lensIconInMemoryCache;
    SCFeatureReference *_magicMomentInPreview;
}

- (void).cxx_destruct;
- (id)createInstance;
- (_Bool)enabled;
- (id)initWithPreviewConfiguration:(id)arg1 lensUsageNotifier:(id)arg2 lensDataProviderFactory:(id)arg3 lensUIStateListener:(id)arg4 auxiliaryContentStore:(id)arg5 swipeFilters:(id)arg6 filterArranger:(id)arg7 lensLogger:(id)arg8 commonLoggingParameters:(id)arg9 applicationLifecycleEvents:(id)arg10 userPreferences:(id)arg11 lensPreferences:(id)arg12 lensIconInMemoryCache:(id)arg13 magicMoment:(id)arg14;

@end

