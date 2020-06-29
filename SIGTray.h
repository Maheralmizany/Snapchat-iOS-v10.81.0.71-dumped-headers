//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSLayoutConstraint, NSString, SIGTrayPullBar, UILayoutGuide, UIView, UIViewController;
@protocol SIGTrayHostDelegate, SIGTrayViewController;

@interface SIGTray : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _interacting;
    double _initialOffset;
    double _defaultTrayHeightPercentage;
    unsigned long long _trayPullBarType;
    SIGTrayPullBar *_pullBarContainer;
    UIView *_shadowBackgroundView;
    UIViewController *_trayHostViewController;
    UIViewController *_trayViewController;
    unsigned long long _currentTrayPosition;
    unsigned long long _previouslyResolvedTrayPosition;
    UILayoutGuide *_trayLayoutGuide;
    NSLayoutConstraint *_trayLayoutHeightConstraint;
    NSLayoutConstraint *_trayLayoutBottomConstraint;
    id <SIGTrayHostDelegate> _trayHostDelegate;
    id <SIGTrayViewController> _sigTrayViewController;
    NSDictionary *_heights;
    unsigned long long _allowedPositions;
}

@property(nonatomic) unsigned long long allowedPositions; // @synthesize allowedPositions=_allowedPositions;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_backgroundViewTapped;
- (void)_panGestureUpdated:(id)arg1;
- (unsigned long long)_getNextTrayPosition:(unsigned long long)arg1 newOffset:(double)arg2;
- (void)_resolveTrayPosition:(unsigned long long)arg1 newOffset:(double)arg2;
- (void)installPanGestureRecognizerOnView:(id)arg1;
@property(nonatomic) _Bool hasTransparentBackground;
- (void)dismiss;
- (void)_trayAnimationCompleted:(double)arg1;
- (void)_updateConstraintForHeight:(double)arg1;
- (void)setTrayHeight:(double)arg1 forPresentation:(_Bool)arg2;
- (void)_setupLayoutConstraints;
- (void)_installGestureRecognizer;
- (void)_setupPullBar;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentIn:(id)arg1 withPullBar:(unsigned long long)arg2 withDefaultTrayHeightPercentage:(double)arg3;
- (void)presentIn:(id)arg1;
- (id)initWithTrayViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
