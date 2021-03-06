//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, SCAuxiliaryContentToastView, UIView;
@protocol SCAuxiliaryContentToastControllerDelegate;

@interface SCAuxiliaryContentToastController : NSObject
{
    UIView *_parentView;
    SCAuxiliaryContentToastView *_toastView;
    NSTimer *_progressTimer;
    id <SCAuxiliaryContentToastControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCAuxiliaryContentToastControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_stopProgress;
- (void)_startProgress;
- (void)_showFinishedToast;
- (void)_showErrorToast;
- (void)_showDownloadingToast;
- (void)_showCheckingDepthAvailabilityToast;
- (void)_showProcessingToast;
- (void)_showSyncingToast;
- (void)_performHideAnimationAfterDelay;
- (void)_hideToast;
- (void)_didTapOnToast;
- (void)_setupToastView;
- (void)stopProgress;
- (void)setFractionCompleted:(double)arg1;
@property(nonatomic) unsigned long long state;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;

@end

