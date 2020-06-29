//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSURL, SCOperaPage;

@interface SCOperaRemoteWebV3Layer : NSObject <SCOperaLayer>
{
    _Bool _showShareButton;
    _Bool _showActionButton;
    _Bool _allowPreloading;
    _Bool _allowAutoDetectAutofill;
    _Bool _reportJavaScriptPerformance;
    _Bool _delayLoadUntilScheduledToTakeOver;
    _Bool _enableMultiWebViews;
    _Bool _preventPullDownToDismiss;
    _Bool _shouldSkipSafeBrowseCheck;
    NSURL *_url;
    NSString *_hitURLRegex;
    NSString *_customUserAgent;
    NSNumber *_multiWebViewsCount;
    NSNumber *_multiWebViewsDefaultInteractiveIndex;
    NSDictionary *_additionalInfoDictForDeeplinkManager;
    SCOperaPage *_page;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) NSDictionary *additionalInfoDictForDeeplinkManager; // @synthesize additionalInfoDictForDeeplinkManager=_additionalInfoDictForDeeplinkManager;
@property(readonly, nonatomic) _Bool shouldSkipSafeBrowseCheck; // @synthesize shouldSkipSafeBrowseCheck=_shouldSkipSafeBrowseCheck;
@property(readonly, nonatomic) NSNumber *multiWebViewsDefaultInteractiveIndex; // @synthesize multiWebViewsDefaultInteractiveIndex=_multiWebViewsDefaultInteractiveIndex;
@property(readonly, nonatomic) NSNumber *multiWebViewsCount; // @synthesize multiWebViewsCount=_multiWebViewsCount;
@property(readonly, nonatomic) _Bool preventPullDownToDismiss; // @synthesize preventPullDownToDismiss=_preventPullDownToDismiss;
@property(readonly, nonatomic) _Bool enableMultiWebViews; // @synthesize enableMultiWebViews=_enableMultiWebViews;
@property(readonly, nonatomic) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(readonly, nonatomic) _Bool delayLoadUntilScheduledToTakeOver; // @synthesize delayLoadUntilScheduledToTakeOver=_delayLoadUntilScheduledToTakeOver;
@property(readonly, nonatomic) NSString *hitURLRegex; // @synthesize hitURLRegex=_hitURLRegex;
@property(readonly, nonatomic) _Bool reportJavaScriptPerformance; // @synthesize reportJavaScriptPerformance=_reportJavaScriptPerformance;
@property(readonly, nonatomic) _Bool allowAutoDetectAutofill; // @synthesize allowAutoDetectAutofill=_allowAutoDetectAutofill;
@property(readonly, nonatomic) _Bool allowPreloading; // @synthesize allowPreloading=_allowPreloading;
@property(readonly, nonatomic) _Bool showActionButton; // @synthesize showActionButton=_showActionButton;
@property(readonly, nonatomic) _Bool showShareButton; // @synthesize showShareButton=_showShareButton;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

