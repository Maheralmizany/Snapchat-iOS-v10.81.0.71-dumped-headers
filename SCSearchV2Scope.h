//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SCFeatureLensFeed, SCSearchV2WorkflowDelegate, SCUIContainer;

@interface SCSearchV2Scope : NSObject
{
    id <SCUIContainer> _uiContainer;
    UIView *_originSearchBoxView;
    long long _metricsContext;
    id <SCFeatureLensFeed> _lensFeedFeature;
    id <SCSearchV2WorkflowDelegate> _workflowDelegate;
}

@property(readonly, nonatomic) __weak id <SCSearchV2WorkflowDelegate> workflowDelegate; // @synthesize workflowDelegate=_workflowDelegate;
@property(readonly, nonatomic) id <SCFeatureLensFeed> lensFeedFeature; // @synthesize lensFeedFeature=_lensFeedFeature;
@property(readonly, nonatomic) long long metricsContext; // @synthesize metricsContext=_metricsContext;
@property(readonly, nonatomic) UIView *originSearchBoxView; // @synthesize originSearchBoxView=_originSearchBoxView;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
- (void).cxx_destruct;
- (id)initWithUIContainer:(id)arg1 originSearchBoxView:(id)arg2 metricsContext:(long long)arg3 lensFeedFeature:(id)arg4 workflowDelegate:(id)arg5;

@end
