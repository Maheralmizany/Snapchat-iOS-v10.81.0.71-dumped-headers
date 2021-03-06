//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPetraReportingInfo-Protocol.h"

@class GADReportingInfo, NSArray, NSString, UIImageView, UILabel, UIView;
@protocol SCSnapAdsOperationMetricsAdapter;

@interface SCSnapchatPetraReportingInfo : NSObject <SCPetraReportingInfo>
{
    NSArray *_impressionURLStringList;
    NSArray *_clickURLStringList;
    NSArray *_updatedImpressionURLStringList;
    NSArray *_updatedClickURLStringList;
    GADReportingInfo *_gadReportInfo;
    UIView *_containerView;
    UIImageView *_imageBackgroundView;
    UIImageView *_appIconView;
    UILabel *_appDescriptionView;
    UILabel *_headlineView;
    UILabel *_callToActionView;
    id <SCSnapAdsOperationMetricsAdapter> _metricsManager;
}

- (void).cxx_destruct;
- (void)_updateClickURLStringList:(id)arg1 error:(id)arg2 latencyInSec:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_generateUpdatedClickURLsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateImpressionURLStringList:(id)arg1 error:(id)arg2 latencyInSec:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_generateUpdatedImpressionURLsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_generateGADReportInfo;
- (void)_updateImpressionURLStringList:(id)arg1 clickURLStringList:(id)arg2;
- (id)gadReportingInfo;
- (void)getUpdatedImpressionAndClickURLsWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getUpdatedImpressionURLsWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateWithContainerView:(id)arg1 appIconView:(id)arg2 appDescriptionView:(id)arg3 headlineView:(id)arg4 callToActionView:(id)arg5 impressionURLStringList:(id)arg6 clickURLStringList:(id)arg7;
- (void)updateWithContainerView:(id)arg1 imageBackgroundView:(id)arg2 impressionURLStringList:(id)arg3 clickURLStringList:(id)arg4;
- (id)initWithMetricsManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

