//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPageNameLogging-Protocol.h"

@class SCOperaEventListenerAnnouncer, SCOperaPage, UIView;

@protocol SCContextOperaLayerViewControlling <SCPageNameLogging>
@property(readonly, nonatomic) SCOperaEventListenerAnnouncer *eventAnnouncer;
@property(readonly, nonatomic) SCOperaPage *page;
@property(nonatomic, getter=isPageable) _Bool pageable;
@property(nonatomic) _Bool presenterWantsCTAHidden;
@property(nonatomic) __weak UIView *swipeUpGestureView;
- (void)resumePlaybackIfNecessary;
- (void)requestNativeVolumeUI:(_Bool)arg1;
- (_Bool)isSwipeUpAllowed;
- (void)prepareOperaUIForSwipeUpContentDismissed;
- (void)prepareOperaUIForShowingSwipeUpContent;
@end

