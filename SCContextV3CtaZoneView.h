//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableSet, SCContextV3CtaZoneViewModel, SCLazy, SCQueuePerformer, UIViewController;
@protocol SCImageDownloading, SCPageNameLogging;

@interface SCContextV3CtaZoneView : UIView
{
    SCLazy *_actionHandler;
    id <SCImageDownloading> _imageDownloader;
    SCQueuePerformer *_imagePerformer;
    UIViewController<SCPageNameLogging> *_baseViewController;
    SCContextV3CtaZoneViewModel *_viewModel;
    NSMutableArray *_elementViews;
    NSMutableSet *_reusableElementViews;
    _Bool _isFlexible;
    _Bool _isStacked;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(copy, nonatomic) SCContextV3CtaZoneViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) _Bool isFlexible; // @synthesize isFlexible=_isFlexible;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)dequeueElementView;
- (id)initWithActionHandler:(id)arg1 imageDownloader:(id)arg2 imagePerformer:(id)arg3 baseViewController:(id)arg4;

@end

