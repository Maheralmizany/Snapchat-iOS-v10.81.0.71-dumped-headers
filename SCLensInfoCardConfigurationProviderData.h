//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFeatureReference, SCLens, SCObservable, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCLensByIdRetrievable, SCLensInfoCardPresentationDelegate;

@interface SCLensInfoCardConfigurationProviderData : NSObject
{
    _Bool _isLiveLensPreview;
    _Bool _isSourceLensCreatorPage;
    SCLens *_lens;
    UIViewController *_fromViewController;
    SCUserSession *_userSession;
    id <SCLensByIdRetrievable> _lensRetrievable;
    SCFeatureReference *_lensFeedFeature;
    SCFeatureReference *_lensCarouselFeature;
    id <NavigationDelegate> _navigationDelegate;
    id <SCLensInfoCardPresentationDelegate> _presentationDelegate;
    SCObservable *_applicationLifeCycleEvents;
    long long _lensSourceType;
}

@property(readonly, nonatomic) long long lensSourceType; // @synthesize lensSourceType=_lensSourceType;
@property(readonly, nonatomic) __weak SCObservable *applicationLifeCycleEvents; // @synthesize applicationLifeCycleEvents=_applicationLifeCycleEvents;
@property(readonly, nonatomic) _Bool isSourceLensCreatorPage; // @synthesize isSourceLensCreatorPage=_isSourceLensCreatorPage;
@property(readonly, nonatomic) _Bool isLiveLensPreview; // @synthesize isLiveLensPreview=_isLiveLensPreview;
@property(readonly, nonatomic) __weak id <SCLensInfoCardPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) SCFeatureReference *lensCarouselFeature; // @synthesize lensCarouselFeature=_lensCarouselFeature;
@property(readonly, nonatomic) SCFeatureReference *lensFeedFeature; // @synthesize lensFeedFeature=_lensFeedFeature;
@property(readonly, nonatomic) id <SCLensByIdRetrievable> lensRetrievable; // @synthesize lensRetrievable=_lensRetrievable;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
- (void).cxx_destruct;
- (id)initWithLens:(id)arg1 fromViewController:(id)arg2 userSession:(id)arg3 lensRetrievable:(id)arg4 lensFeedFeature:(id)arg5 lensCarouselFeature:(id)arg6 navigationDelegate:(id)arg7 presentationDelegate:(id)arg8 isLiveLensPreview:(_Bool)arg9 isSourceLensCreatorPage:(_Bool)arg10 applicationLifeCycleEvents:(id)arg11 lensSourceType:(long long)arg12;
- (id)initWithLens:(id)arg1 fromViewController:(id)arg2 userSession:(id)arg3 lensRetrievable:(id)arg4 lensFeedFeature:(id)arg5 lensCarouselFeature:(id)arg6 navigationDelegate:(id)arg7 presentationDelegate:(id)arg8 isLiveLensPreview:(_Bool)arg9 isSourceLensCreatorPage:(_Bool)arg10 applicationLifeCycleEvents:(id)arg11;

@end

