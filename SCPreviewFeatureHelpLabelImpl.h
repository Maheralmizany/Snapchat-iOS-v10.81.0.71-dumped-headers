//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureHelpLabel-Protocol.h"

@class NSString, SCPreviewConfiguration, SCPreviewHelpLabel, SCPreviewView, UILabel;
@protocol SCPreviewTooltipProvider;

@interface SCPreviewFeatureHelpLabelImpl : SCFeature <SCPreviewFeatureHelpLabel>
{
    struct CGRect _containerViewBounds;
    SCPreviewHelpLabel *_previewHelpLabel;
    SCPreviewConfiguration *_configuration;
    id <SCPreviewTooltipProvider> _tooltipProvider;
    SCPreviewView *_previewView;
}

@property(nonatomic) __weak SCPreviewView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)hideWithAnimation:(_Bool)arg1;
- (void)setTransformScale:(double)arg1;
- (void)setAlpha:(double)arg1;
- (void)_setupWithContainerViewBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *helpLabel;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (id)initWithConfiguration:(id)arg1 tooltipProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

