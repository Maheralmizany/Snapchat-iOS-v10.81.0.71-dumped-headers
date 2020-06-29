//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionable-Protocol.h"
#import "SCDiscoverFeedWhiteSpaceTileGestureHandling-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionModel, SCEventListenerAnnouncer, UICollectionViewCell, UIView;
@protocol SCActionHandling, SCDiscoverFeedWhiteSpaceGestureCoordinating;

@interface SCDiscoverFeedCollectionViewCellTapHandler : NSObject <UIGestureRecognizerDelegate, SCActionable, SCDiscoverFeedWhiteSpaceTileGestureHandling>
{
    UIView *_targetView;
    UIView *_viewToAnimate;
    UIView *_sourceView;
    UICollectionViewCell *_collectionViewCell;
    SCActionModel *_singleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSString *_announceIdentifier;
    id <SCActionHandling> _actionHandler;
    id <SCDiscoverFeedWhiteSpaceGestureCoordinating> _gestureCoordinator;
}

@property(retain, nonatomic) id <SCDiscoverFeedWhiteSpaceGestureCoordinating> gestureCoordinator; // @synthesize gestureCoordinator=_gestureCoordinator;
@property(copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(copy, nonatomic) SCActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_handleLongPressAction:(id)arg1;
- (void)_handleSingleTapAction:(id)arg1;
- (void)_didTapWithGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithTouchTargetView:(id)arg1 viewToAnimate:(id)arg2 sourceView:(id)arg3 collectionViewCell:(id)arg4 eventAnnouncer:(id)arg5 announcerIdentifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

