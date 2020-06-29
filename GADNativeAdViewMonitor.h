//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GADDebugGestureMonitor, GADGestureRecognizer, GADInternalNativeAd, GADObserverCollection, GADTouchGestureRecognizer, GADViewVisibilityMonitor, NSString, UITapGestureRecognizer, UIView;
@protocol GADMediaContentDisplaying;

@interface GADNativeAdViewMonitor : NSObject <UIGestureRecognizerDelegate>
{
    GADObserverCollection *_observers;
    GADInternalNativeAd *_internalNativeAd;
    UIView *_trackedView;
    UITapGestureRecognizer *_singleTap;
    GADGestureRecognizer *_touchGestureRecognizer;
    GADTouchGestureRecognizer *_touchEventGestureRecognizer;
    GADDebugGestureMonitor *_debugGestureMonitor;
    GADViewVisibilityMonitor *_viewVisibilityMonitor;
    NSString *_adUnitID;
    NSString *_debugDialogString;
    _Bool _handlesClicks;
    id <GADMediaContentDisplaying> _mediaContent;
    _Bool _hasMediaContentObserver;
    NSString *_adChoicesAssetName;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleMediaViewClick:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleCustomClickGesture:(id)arg1;
- (void)handleUntrackedView:(id)arg1;
- (void)handleTrackedView:(id)arg1;
- (id)initWithInternalNativeAd:(id)arg1 handlesClicks:(_Bool)arg2 mediaContent:(id)arg3 viewVisibilityMonitor:(id)arg4 adConfiguration:(struct NSDictionary *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

